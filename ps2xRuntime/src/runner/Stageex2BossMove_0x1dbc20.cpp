#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stageex2BossMove
// Address: 0x1dbc20 - 0x1df480
void Stageex2BossMove_0x1dbc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stageex2BossMove_0x1dbc20");
#endif

    ctx->pc = 0x1dbc20u;

    // 0x1dbc20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1dbc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1dbc24: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1dbc24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1dbc28: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1dbc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1dbc2c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1dbc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1dbc30: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1dbc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1dbc34: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dbc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1dbc38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dbc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dbc3c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1dbc3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1dbc40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dbc40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc44: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1dbc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1dbc48: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x1dbc48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x1dbc4c: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x1DBC4Cu;
    SET_GPR_U32(ctx, 31, 0x1DBC54u);
    ctx->pc = 0x1DBC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBC4Cu;
            // 0x1dbc50: 0xdc25ab10  ld          $a1, -0x54F0($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294945552)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC54u; }
        if (ctx->pc != 0x1DBC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC54u; }
        if (ctx->pc != 0x1DBC54u) { return; }
    }
    ctx->pc = 0x1DBC54u;
    // 0x1dbc54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dbc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc58: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1DBC58u;
    SET_GPR_U32(ctx, 31, 0x1DBC60u);
    ctx->pc = 0x1DBC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBC58u;
            // 0x1dbc5c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC60u; }
        if (ctx->pc != 0x1DBC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC60u; }
        if (ctx->pc != 0x1DBC60u) { return; }
    }
    ctx->pc = 0x1DBC60u;
    // 0x1dbc60: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1dbc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1dbc64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dbc64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc68: 0x24021770  addiu       $v0, $zero, 0x1770
    ctx->pc = 0x1dbc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    // 0x1dbc6c: 0xc0409de  jal         func_102778
    ctx->pc = 0x1DBC6Cu;
    SET_GPR_U32(ctx, 31, 0x1DBC74u);
    ctx->pc = 0x1DBC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBC6Cu;
            // 0x1dbc70: 0x432023  subu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102778u;
    if (runtime->hasFunction(0x102778u)) {
        auto targetFn = runtime->lookupFunction(0x102778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC74u; }
        if (ctx->pc != 0x1DBC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x102778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC74u; }
        if (ctx->pc != 0x1DBC74u) { return; }
    }
    ctx->pc = 0x1DBC74u;
    // 0x1dbc74: 0x3c043f9e  lui         $a0, 0x3F9E
    ctx->pc = 0x1dbc74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16286 << 16));
    // 0x1dbc78: 0x3403eb85  ori         $v1, $zero, 0xEB85
    ctx->pc = 0x1dbc78u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)60293u)));
    // 0x1dbc7c: 0x3484b851  ori         $a0, $a0, 0xB851
    ctx->pc = 0x1dbc7cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)47185u)));
    // 0x1dbc80: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1dbc80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1dbc84: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1dbc84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1dbc88: 0x34631eb8  ori         $v1, $v1, 0x1EB8
    ctx->pc = 0x1dbc88u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)7864u)));
    // 0x1dbc8c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1dbc8cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1dbc90: 0xc040880  jal         func_102200
    ctx->pc = 0x1DBC90u;
    SET_GPR_U32(ctx, 31, 0x1DBC98u);
    ctx->pc = 0x1DBC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBC90u;
            // 0x1dbc94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC98u; }
        if (ctx->pc != 0x1DBC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC98u; }
        if (ctx->pc != 0x1DBC98u) { return; }
    }
    ctx->pc = 0x1DBC98u;
    // 0x1dbc98: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1DBC98u;
    SET_GPR_U32(ctx, 31, 0x1DBCA0u);
    ctx->pc = 0x1DBC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBC98u;
            // 0x1dbc9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBCA0u; }
        if (ctx->pc != 0x1DBCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBCA0u; }
        if (ctx->pc != 0x1DBCA0u) { return; }
    }
    ctx->pc = 0x1DBCA0u;
    // 0x1dbca0: 0x3c033a83  lui         $v1, 0x3A83
    ctx->pc = 0x1dbca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14979 << 16));
    // 0x1dbca4: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1dbca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x1dbca8: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x1dbca8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4719u)));
    // 0x1dbcac: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1dbcacu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1dbcb0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1dbcb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1dbcb4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1dbcb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dbcb8: 0x0  nop
    ctx->pc = 0x1dbcb8u;
    // NOP
    // 0x1dbcbc: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1dbcbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1dbcc0: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1dbcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1dbcc4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1dbcc4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1dbcc8: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1dbcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbccc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1dbcccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1dbcd0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1dbcd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1dbcd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dbcd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbcd8: 0x0  nop
    ctx->pc = 0x1dbcd8u;
    // NOP
    // 0x1dbcdc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dbcdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dbce0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1DBCE0u;
    {
        const bool branch_taken_0x1dbce0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DBCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBCE0u;
            // 0x1dbce4: 0xe6210018  swc1        $f1, 0x18($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbce0) {
            ctx->pc = 0x1DBD00u;
            goto label_1dbd00;
        }
    }
    ctx->pc = 0x1DBCE8u;
    // 0x1dbce8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1dbce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1dbcec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1dbcecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1dbcf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dbcf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbcf4: 0x0  nop
    ctx->pc = 0x1dbcf4u;
    // NOP
    // 0x1dbcf8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1dbcf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1dbcfc: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x1dbcfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_1dbd00:
    // 0x1dbd00: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1dbd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1dbd04: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1dbd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbd08: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1dbd08u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1dbd0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dbd0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbd10: 0x0  nop
    ctx->pc = 0x1dbd10u;
    // NOP
    // 0x1dbd14: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dbd14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dbd18: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1DBD18u;
    {
        const bool branch_taken_0x1dbd18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DBD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBD18u;
            // 0x1dbd1c: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd18) {
            ctx->pc = 0x1DBD38u;
            goto label_1dbd38;
        }
    }
    ctx->pc = 0x1DBD20u;
    // 0x1dbd20: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1dbd20u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1dbd24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dbd24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbd28: 0x0  nop
    ctx->pc = 0x1dbd28u;
    // NOP
    // 0x1dbd2c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1dbd2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1dbd30: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x1dbd30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1dbd34: 0x0  nop
    ctx->pc = 0x1dbd34u;
    // NOP
label_1dbd38:
    // 0x1dbd38: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dbd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dbd3c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1dbd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1dbd40: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1dbd40u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1dbd44: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1dbd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dbd48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dbd48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbd4c: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1dbd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbd50: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1dbd50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1dbd54: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1dbd54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1dbd58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1dbd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dbd5c: 0xc60200d4  lwc1        $f2, 0xD4($s0)
    ctx->pc = 0x1dbd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dbd60: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1dbd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbd64: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1dbd64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1dbd68: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1dbd68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1dbd6c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1dbd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dbd70: 0xc60200e4  lwc1        $f2, 0xE4($s0)
    ctx->pc = 0x1dbd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dbd74: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1dbd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbd78: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1dbd78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1dbd7c: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1dbd7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
    // 0x1dbd80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1dbd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dbd84: 0xc60200e0  lwc1        $f2, 0xE0($s0)
    ctx->pc = 0x1dbd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dbd88: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1dbd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbd8c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1dbd8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1dbd90: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1dbd90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x1dbd94: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1dbd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dbd98: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1dbd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbd9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dbd9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dbda0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1DBDA0u;
    {
        const bool branch_taken_0x1dbda0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DBDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBDA0u;
            // 0x1dbda4: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbda0) {
            ctx->pc = 0x1DBDC0u;
            goto label_1dbdc0;
        }
    }
    ctx->pc = 0x1DBDA8u;
    // 0x1dbda8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1dbda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1dbdac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1dbdacu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1dbdb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dbdb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbdb4: 0x0  nop
    ctx->pc = 0x1dbdb4u;
    // NOP
    // 0x1dbdb8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1dbdb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1dbdbc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1dbdbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1dbdc0:
    // 0x1dbdc0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dbdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dbdc4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1dbdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1dbdc8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1dbdc8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1dbdcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dbdccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbdd0: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1dbdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbdd4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dbdd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dbdd8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1DBDD8u;
    {
        const bool branch_taken_0x1dbdd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DBDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBDD8u;
            // 0x1dbddc: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbdd8) {
            ctx->pc = 0x1DBDF8u;
            goto label_1dbdf8;
        }
    }
    ctx->pc = 0x1DBDE0u;
    // 0x1dbde0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1dbde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1dbde4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1dbde4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1dbde8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dbde8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbdec: 0x0  nop
    ctx->pc = 0x1dbdecu;
    // NOP
    // 0x1dbdf0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1dbdf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1dbdf4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1dbdf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1dbdf8:
    // 0x1dbdf8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dbdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dbdfc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1dbdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1dbe00: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1dbe00u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1dbe04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dbe04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbe08: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1dbe08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbe0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dbe0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dbe10: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1DBE10u;
    {
        const bool branch_taken_0x1dbe10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DBE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBE10u;
            // 0x1dbe14: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbe10) {
            ctx->pc = 0x1DBE30u;
            goto label_1dbe30;
        }
    }
    ctx->pc = 0x1DBE18u;
    // 0x1dbe18: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1dbe18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1dbe1c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1dbe1cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1dbe20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dbe20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbe24: 0x0  nop
    ctx->pc = 0x1dbe24u;
    // NOP
    // 0x1dbe28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1dbe28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1dbe2c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1dbe2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1dbe30:
    // 0x1dbe30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dbe30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dbe34: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1dbe34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1dbe38: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1dbe38u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1dbe3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dbe3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbe40: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1dbe40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbe44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dbe44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dbe48: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1DBE48u;
    {
        const bool branch_taken_0x1dbe48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DBE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBE48u;
            // 0x1dbe4c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbe48) {
            ctx->pc = 0x1DBE68u;
            goto label_1dbe68;
        }
    }
    ctx->pc = 0x1DBE50u;
    // 0x1dbe50: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1dbe50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1dbe54: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1dbe54u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1dbe58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dbe58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbe5c: 0x0  nop
    ctx->pc = 0x1dbe5cu;
    // NOP
    // 0x1dbe60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1dbe60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1dbe64: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1dbe64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1dbe68:
    // 0x1dbe68: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1dbe68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dbe6c: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1dbe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1dbe70: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1dbe70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dbe74: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1dbe74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1dbe78: 0xc077de0  jal         func_1DF780
    ctx->pc = 0x1DBE78u;
    SET_GPR_U32(ctx, 31, 0x1DBE80u);
    ctx->pc = 0x1DBE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBE78u;
            // 0x1dbe7c: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF780u;
    if (runtime->hasFunction(0x1DF780u)) {
        auto targetFn = runtime->lookupFunction(0x1DF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE80u; }
        if (ctx->pc != 0x1DBE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1df780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBE80u; }
        if (ctx->pc != 0x1DBE80u) { return; }
    }
    ctx->pc = 0x1DBE80u;
    // 0x1dbe80: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1dbe80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dbe84: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1dbe84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1dbe88: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dbe88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dbe8c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1dbe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1dbe90: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1dbe90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1dbe94: 0x28410708  slti        $at, $v0, 0x708
    ctx->pc = 0x1dbe94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1800) ? 1 : 0);
    // 0x1dbe98: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DBE98u;
    {
        const bool branch_taken_0x1dbe98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBE98u;
            // 0x1dbe9c: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbe98) {
            ctx->pc = 0x1DBEA8u;
            goto label_1dbea8;
        }
    }
    ctx->pc = 0x1DBEA0u;
    // 0x1dbea0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1DBEA0u;
    {
        const bool branch_taken_0x1dbea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbea0) {
            ctx->pc = 0x1DBEC8u;
            goto label_1dbec8;
        }
    }
    ctx->pc = 0x1DBEA8u;
label_1dbea8:
    // 0x1dbea8: 0x28410fa0  slti        $at, $v0, 0xFA0
    ctx->pc = 0x1dbea8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4000) ? 1 : 0);
    // 0x1dbeac: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DBEACu;
    {
        const bool branch_taken_0x1dbeac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBEACu;
            // 0x1dbeb0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbeac) {
            ctx->pc = 0x1DBEC0u;
            goto label_1dbec0;
        }
    }
    ctx->pc = 0x1DBEB4u;
    // 0x1dbeb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DBEB4u;
    {
        const bool branch_taken_0x1dbeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbeb4) {
            ctx->pc = 0x1DBEC8u;
            goto label_1dbec8;
        }
    }
    ctx->pc = 0x1DBEBCu;
    // 0x1dbebc: 0x0  nop
    ctx->pc = 0x1dbebcu;
    // NOP
label_1dbec0:
    // 0x1dbec0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1dbec0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbec4: 0x0  nop
    ctx->pc = 0x1dbec4u;
    // NOP
label_1dbec8:
    // 0x1dbec8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1dbec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1dbecc: 0x2c41000a  sltiu       $at, $v0, 0xA
    ctx->pc = 0x1dbeccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1dbed0: 0x10200bcf  beqz        $at, . + 4 + (0xBCF << 2)
    ctx->pc = 0x1DBED0u;
    {
        const bool branch_taken_0x1dbed0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBED0u;
            // 0x1dbed4: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbed0) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DBED8u;
    // 0x1dbed8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dbed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dbedc: 0x24632d80  addiu       $v1, $v1, 0x2D80
    ctx->pc = 0x1dbedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11648));
    // 0x1dbee0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dbee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dbee4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1dbee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dbee8: 0x400008  jr          $v0
    ctx->pc = 0x1DBEE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DBEF0u: goto label_1dbef0;
            case 0x1DBF78u: goto label_1dbf78;
            case 0x1DD6D0u: goto label_1dd6d0;
            case 0x1DD740u: goto label_1dd740;
            case 0x1DDF28u: goto label_1ddf28;
            case 0x1DE6E8u: goto label_1de6e8;
            case 0x1DEC18u: goto label_1dec18;
            case 0x1DED60u: goto label_1ded60;
            case 0x1DEDD0u: goto label_1dedd0;
            case 0x1DEE10u: goto label_1dee10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DBEF0u;
label_1dbef0:
    // 0x1dbef0: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1dbef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1dbef4: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1dbef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbef8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1dbef8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1dbefc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dbefcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbf00: 0x0  nop
    ctx->pc = 0x1dbf00u;
    // NOP
    // 0x1dbf04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dbf04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dbf08: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1DBF08u;
    {
        const bool branch_taken_0x1dbf08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DBF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBF08u;
            // 0x1dbf0c: 0x3c023f7d  lui         $v0, 0x3F7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbf08) {
            ctx->pc = 0x1DBF28u;
            goto label_1dbf28;
        }
    }
    ctx->pc = 0x1DBF10u;
    // 0x1dbf10: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x1dbf10u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)28836u)));
    // 0x1dbf14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dbf14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbf18: 0x0  nop
    ctx->pc = 0x1dbf18u;
    // NOP
    // 0x1dbf1c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1dbf1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1dbf20: 0x10000bbb  b           . + 4 + (0xBBB << 2)
    ctx->pc = 0x1DBF20u;
    {
        const bool branch_taken_0x1dbf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBF20u;
            // 0x1dbf24: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbf20) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DBF28u;
label_1dbf28:
    // 0x1dbf28: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DBF28u;
    SET_GPR_U32(ctx, 31, 0x1DBF30u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBF30u; }
        if (ctx->pc != 0x1DBF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBF30u; }
        if (ctx->pc != 0x1DBF30u) { return; }
    }
    ctx->pc = 0x1DBF30u;
    // 0x1dbf30: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1dbf30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1dbf34: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1dbf34u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1dbf38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dbf38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dbf3c: 0x0  nop
    ctx->pc = 0x1dbf3cu;
    // NOP
    // 0x1dbf40: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1dbf40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1dbf44: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DBF44u;
    SET_GPR_U32(ctx, 31, 0x1DBF4Cu);
    ctx->pc = 0x1DBF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBF44u;
            // 0x1dbf48: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBF4Cu; }
        if (ctx->pc != 0x1DBF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBF4Cu; }
        if (ctx->pc != 0x1DBF4Cu) { return; }
    }
    ctx->pc = 0x1DBF4Cu;
    // 0x1dbf4c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1dbf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1dbf50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dbf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbf54: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1dbf54u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1dbf58: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1dbf58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dbf5c: 0x0  nop
    ctx->pc = 0x1dbf5cu;
    // NOP
    // 0x1dbf60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1dbf60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1dbf64: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1dbf64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1dbf68: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1dbf68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1dbf6c: 0x10000ba8  b           . + 4 + (0xBA8 << 2)
    ctx->pc = 0x1DBF6Cu;
    {
        const bool branch_taken_0x1dbf6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBF6Cu;
            // 0x1dbf70: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbf6c) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DBF74u;
    // 0x1dbf74: 0x0  nop
    ctx->pc = 0x1dbf74u;
    // NOP
label_1dbf78:
    // 0x1dbf78: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1dbf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1dbf7c: 0x10520002  beq         $v0, $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DBF7Cu;
    {
        const bool branch_taken_0x1dbf7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1DBF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBF7Cu;
            // 0x1dbf80: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbf7c) {
            ctx->pc = 0x1DBF88u;
            goto label_1dbf88;
        }
    }
    ctx->pc = 0x1DBF84u;
    // 0x1dbf84: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1dbf84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_1dbf88:
    // 0x1dbf88: 0xae120110  sw          $s2, 0x110($s0)
    ctx->pc = 0x1dbf88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 18));
    // 0x1dbf8c: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1dbf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbf90: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1dbf90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1dbf94: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1dbf94u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1dbf98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dbf98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbf9c: 0x0  nop
    ctx->pc = 0x1dbf9cu;
    // NOP
    // 0x1dbfa0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dbfa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dbfa4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1DBFA4u;
    {
        const bool branch_taken_0x1dbfa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DBFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBFA4u;
            // 0x1dbfa8: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbfa4) {
            ctx->pc = 0x1DBFD8u;
            goto label_1dbfd8;
        }
    }
    ctx->pc = 0x1DBFACu;
    // 0x1dbfac: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1dbfacu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1dbfb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dbfb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbfb4: 0x0  nop
    ctx->pc = 0x1dbfb4u;
    // NOP
    // 0x1dbfb8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dbfb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dbfbc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1DBFBCu;
    {
        const bool branch_taken_0x1dbfbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DBFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBFBCu;
            // 0x1dbfc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbfbc) {
            ctx->pc = 0x1DBFD8u;
            goto label_1dbfd8;
        }
    }
    ctx->pc = 0x1DBFC4u;
    // 0x1dbfc4: 0xc077d20  jal         func_1DF480
    ctx->pc = 0x1DBFC4u;
    SET_GPR_U32(ctx, 31, 0x1DBFCCu);
    ctx->pc = 0x1DF480u;
    if (runtime->hasFunction(0x1DF480u)) {
        auto targetFn = runtime->lookupFunction(0x1DF480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBFCCu; }
        if (ctx->pc != 0x1DBFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector_0x1df480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBFCCu; }
        if (ctx->pc != 0x1DBFCCu) { return; }
    }
    ctx->pc = 0x1DBFCCu;
    // 0x1dbfcc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1DBFCCu;
    {
        const bool branch_taken_0x1dbfcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbfcc) {
            ctx->pc = 0x1DC048u;
            goto label_1dc048;
        }
    }
    ctx->pc = 0x1DBFD4u;
    // 0x1dbfd4: 0x0  nop
    ctx->pc = 0x1dbfd4u;
    // NOP
label_1dbfd8:
    // 0x1dbfd8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1dbfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1dbfdc: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1dbfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbfe0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1dbfe0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1dbfe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dbfe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbfe8: 0x0  nop
    ctx->pc = 0x1dbfe8u;
    // NOP
    // 0x1dbfec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dbfecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dbff0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1DBFF0u;
    {
        const bool branch_taken_0x1dbff0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DBFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBFF0u;
            // 0x1dbff4: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbff0) {
            ctx->pc = 0x1DC020u;
            goto label_1dc020;
        }
    }
    ctx->pc = 0x1DBFF8u;
    // 0x1dbff8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1dbff8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1dbffc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dbffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc000: 0x0  nop
    ctx->pc = 0x1dc000u;
    // NOP
    // 0x1dc004: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dc004u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc008: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DC008u;
    {
        const bool branch_taken_0x1dc008 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DC00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC008u;
            // 0x1dc00c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc008) {
            ctx->pc = 0x1DC020u;
            goto label_1dc020;
        }
    }
    ctx->pc = 0x1DC010u;
    // 0x1dc010: 0xc077d20  jal         func_1DF480
    ctx->pc = 0x1DC010u;
    SET_GPR_U32(ctx, 31, 0x1DC018u);
    ctx->pc = 0x1DF480u;
    if (runtime->hasFunction(0x1DF480u)) {
        auto targetFn = runtime->lookupFunction(0x1DF480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC018u; }
        if (ctx->pc != 0x1DC018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector_0x1df480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC018u; }
        if (ctx->pc != 0x1DC018u) { return; }
    }
    ctx->pc = 0x1DC018u;
    // 0x1dc018: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1DC018u;
    {
        const bool branch_taken_0x1dc018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc018) {
            ctx->pc = 0x1DC048u;
            goto label_1dc048;
        }
    }
    ctx->pc = 0x1DC020u;
label_1dc020:
    // 0x1dc020: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x1dc020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x1dc024: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1dc024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc028: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x1dc028u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)28836u)));
    // 0x1dc02c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dc02cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dc030: 0x0  nop
    ctx->pc = 0x1dc030u;
    // NOP
    // 0x1dc034: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1dc034u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1dc038: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1dc038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1dc03c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1dc03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc040: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1dc040u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1dc044: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1dc044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1dc048:
    // 0x1dc048: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dc048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dc04c: 0x12420340  beq         $s2, $v0, . + 4 + (0x340 << 2)
    ctx->pc = 0x1DC04Cu;
    {
        const bool branch_taken_0x1dc04c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DC050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC04Cu;
            // 0x1dc050: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc04c) {
            ctx->pc = 0x1DCD50u;
            goto label_1dcd50;
        }
    }
    ctx->pc = 0x1DC054u;
    // 0x1dc054: 0x124201ae  beq         $s2, $v0, . + 4 + (0x1AE << 2)
    ctx->pc = 0x1DC054u;
    {
        const bool branch_taken_0x1dc054 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dc054) {
            ctx->pc = 0x1DC710u;
            goto label_1dc710;
        }
    }
    ctx->pc = 0x1DC05Cu;
    // 0x1dc05c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DC05Cu;
    {
        const bool branch_taken_0x1dc05c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc05c) {
            ctx->pc = 0x1DC070u;
            goto label_1dc070;
        }
    }
    ctx->pc = 0x1DC064u;
    // 0x1dc064: 0x10000b6a  b           . + 4 + (0xB6A << 2)
    ctx->pc = 0x1DC064u;
    {
        const bool branch_taken_0x1dc064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc064) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DC06Cu;
    // 0x1dc06c: 0x0  nop
    ctx->pc = 0x1dc06cu;
    // NOP
label_1dc070:
    // 0x1dc070: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1dc070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dc074: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1dc074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1dc078: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1dc078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dc07c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1dc07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1dc080: 0xc077de0  jal         func_1DF780
    ctx->pc = 0x1DC080u;
    SET_GPR_U32(ctx, 31, 0x1DC088u);
    ctx->pc = 0x1DC084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC080u;
            // 0x1dc084: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF780u;
    if (runtime->hasFunction(0x1DF780u)) {
        auto targetFn = runtime->lookupFunction(0x1DF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC088u; }
        if (ctx->pc != 0x1DC088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1df780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC088u; }
        if (ctx->pc != 0x1DC088u) { return; }
    }
    ctx->pc = 0x1DC088u;
    // 0x1dc088: 0xc065d00  jal         func_197400
    ctx->pc = 0x1DC088u;
    SET_GPR_U32(ctx, 31, 0x1DC090u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC090u; }
        if (ctx->pc != 0x1DC090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC090u; }
        if (ctx->pc != 0x1DC090u) { return; }
    }
    ctx->pc = 0x1DC090u;
    // 0x1dc090: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1dc090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dc094: 0x14430082  bne         $v0, $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x1DC094u;
    {
        const bool branch_taken_0x1dc094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dc094) {
            ctx->pc = 0x1DC2A0u;
            goto label_1dc2a0;
        }
    }
    ctx->pc = 0x1DC09Cu;
    // 0x1dc09c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1dc09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1dc0a0: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1dc0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1dc0a4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1dc0a4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1dc0a8: 0x0  nop
    ctx->pc = 0x1dc0a8u;
    // NOP
    // 0x1dc0ac: 0x0  nop
    ctx->pc = 0x1dc0acu;
    // NOP
    // 0x1dc0b0: 0x1010  mfhi        $v0
    ctx->pc = 0x1dc0b0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1dc0b4: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1DC0B4u;
    {
        const bool branch_taken_0x1dc0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc0b4) {
            ctx->pc = 0x1DC148u;
            goto label_1dc148;
        }
    }
    ctx->pc = 0x1DC0BCu;
    // 0x1dc0bc: 0x8e030124  lw          $v1, 0x124($s0)
    ctx->pc = 0x1dc0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1dc0c0: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DC0C0u;
    {
        const bool branch_taken_0x1dc0c0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DC0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC0C0u;
            // 0x1dc0c4: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc0c0) {
            ctx->pc = 0x1DC0D4u;
            goto label_1dc0d4;
        }
    }
    ctx->pc = 0x1DC0C8u;
    // 0x1dc0c8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DC0C8u;
    {
        const bool branch_taken_0x1dc0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc0c8) {
            ctx->pc = 0x1DC0D4u;
            goto label_1dc0d4;
        }
    }
    ctx->pc = 0x1DC0D0u;
    // 0x1dc0d0: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1dc0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1dc0d4:
    // 0x1dc0d4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1DC0D4u;
    {
        const bool branch_taken_0x1dc0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc0d4) {
            ctx->pc = 0x1DC110u;
            goto label_1dc110;
        }
    }
    ctx->pc = 0x1DC0DCu;
    // 0x1dc0dc: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dc0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc0e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc0e4: 0x2464ff88  addiu       $a0, $v1, -0x78
    ctx->pc = 0x1dc0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967176));
    // 0x1dc0e8: 0xc06560c  jal         func_195830
    ctx->pc = 0x1DC0E8u;
    SET_GPR_U32(ctx, 31, 0x1DC0F0u);
    ctx->pc = 0x1DC0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC0E8u;
            // 0x1dc0ec: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC0F0u; }
        if (ctx->pc != 0x1DC0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC0F0u; }
        if (ctx->pc != 0x1DC0F0u) { return; }
    }
    ctx->pc = 0x1DC0F0u;
    // 0x1dc0f0: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dc0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc0f4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc0f8: 0x2464ff79  addiu       $a0, $v1, -0x87
    ctx->pc = 0x1dc0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967161));
    // 0x1dc0fc: 0xc06560c  jal         func_195830
    ctx->pc = 0x1DC0FCu;
    SET_GPR_U32(ctx, 31, 0x1DC104u);
    ctx->pc = 0x1DC100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC0FCu;
            // 0x1dc100: 0x24450032  addiu       $a1, $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC104u; }
        if (ctx->pc != 0x1DC104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC104u; }
        if (ctx->pc != 0x1DC104u) { return; }
    }
    ctx->pc = 0x1DC104u;
    // 0x1dc104: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1DC104u;
    {
        const bool branch_taken_0x1dc104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc104) {
            ctx->pc = 0x1DC138u;
            goto label_1dc138;
        }
    }
    ctx->pc = 0x1DC10Cu;
    // 0x1dc10c: 0x0  nop
    ctx->pc = 0x1dc10cu;
    // NOP
label_1dc110:
    // 0x1dc110: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dc110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc114: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc118: 0x24640078  addiu       $a0, $v1, 0x78
    ctx->pc = 0x1dc118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x1dc11c: 0xc06560c  jal         func_195830
    ctx->pc = 0x1DC11Cu;
    SET_GPR_U32(ctx, 31, 0x1DC124u);
    ctx->pc = 0x1DC120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC11Cu;
            // 0x1dc120: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC124u; }
        if (ctx->pc != 0x1DC124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC124u; }
        if (ctx->pc != 0x1DC124u) { return; }
    }
    ctx->pc = 0x1DC124u;
    // 0x1dc124: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dc124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc128: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc12c: 0x24640087  addiu       $a0, $v1, 0x87
    ctx->pc = 0x1dc12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 135));
    // 0x1dc130: 0xc06560c  jal         func_195830
    ctx->pc = 0x1DC130u;
    SET_GPR_U32(ctx, 31, 0x1DC138u);
    ctx->pc = 0x1DC134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC130u;
            // 0x1dc134: 0x24450032  addiu       $a1, $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC138u; }
        if (ctx->pc != 0x1DC138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC138u; }
        if (ctx->pc != 0x1DC138u) { return; }
    }
    ctx->pc = 0x1DC138u;
label_1dc138:
    // 0x1dc138: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x1dc138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1dc13c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dc13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dc140: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x1dc140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x1dc144: 0x0  nop
    ctx->pc = 0x1dc144u;
    // NOP
label_1dc148:
    // 0x1dc148: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1dc148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1dc14c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1dc14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1dc150: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1dc150u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1dc154: 0x0  nop
    ctx->pc = 0x1dc154u;
    // NOP
    // 0x1dc158: 0x0  nop
    ctx->pc = 0x1dc158u;
    // NOP
    // 0x1dc15c: 0x1010  mfhi        $v0
    ctx->pc = 0x1dc15cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1dc160: 0x14400b2b  bnez        $v0, . + 4 + (0xB2B << 2)
    ctx->pc = 0x1DC160u;
    {
        const bool branch_taken_0x1dc160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc160) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DC168u;
    // 0x1dc168: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1dc168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc16c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dc16cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc170: 0x0  nop
    ctx->pc = 0x1dc170u;
    // NOP
    // 0x1dc174: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dc174u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc178: 0x45010041  bc1t        . + 4 + (0x41 << 2)
    ctx->pc = 0x1DC178u;
    {
        const bool branch_taken_0x1dc178 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DC17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC178u;
            // 0x1dc17c: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc178) {
            ctx->pc = 0x1DC280u;
            goto label_1dc280;
        }
    }
    ctx->pc = 0x1DC180u;
    // 0x1dc180: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1dc180u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1dc184: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dc184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc188: 0x0  nop
    ctx->pc = 0x1dc188u;
    // NOP
    // 0x1dc18c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dc18cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc190: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x1DC190u;
    {
        const bool branch_taken_0x1dc190 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dc190) {
            ctx->pc = 0x1DC280u;
            goto label_1dc280;
        }
    }
    ctx->pc = 0x1DC198u;
    // 0x1dc198: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1dc198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc19c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc1a0: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1dc1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1dc1a4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1dc1a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1dc1a8: 0x2442004b  addiu       $v0, $v0, 0x4B
    ctx->pc = 0x1dc1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
    // 0x1dc1ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dc1acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc1b0: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DC1B0u;
    SET_GPR_U32(ctx, 31, 0x1DC1B8u);
    ctx->pc = 0x1DC1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC1B0u;
            // 0x1dc1b4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC1B8u; }
        if (ctx->pc != 0x1DC1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC1B8u; }
        if (ctx->pc != 0x1DC1B8u) { return; }
    }
    ctx->pc = 0x1DC1B8u;
    // 0x1dc1b8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DC1B8u;
    SET_GPR_U32(ctx, 31, 0x1DC1C0u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC1C0u; }
        if (ctx->pc != 0x1DC1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC1C0u; }
        if (ctx->pc != 0x1DC1C0u) { return; }
    }
    ctx->pc = 0x1DC1C0u;
    // 0x1dc1c0: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dc1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dc1c4: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dc1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dc1c8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dc1c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dc1cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dc1ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dc1d0: 0x0  nop
    ctx->pc = 0x1dc1d0u;
    // NOP
    // 0x1dc1d4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dc1d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dc1d8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DC1D8u;
    SET_GPR_U32(ctx, 31, 0x1DC1E0u);
    ctx->pc = 0x1DC1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC1D8u;
            // 0x1dc1dc: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC1E0u; }
        if (ctx->pc != 0x1DC1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC1E0u; }
        if (ctx->pc != 0x1DC1E0u) { return; }
    }
    ctx->pc = 0x1DC1E0u;
    // 0x1dc1e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc1e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dc1e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dc1e8: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc1ec: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dc1ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dc1f0: 0xc065254  jal         func_194950
    ctx->pc = 0x1DC1F0u;
    SET_GPR_U32(ctx, 31, 0x1DC1F8u);
    ctx->pc = 0x1DC1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC1F0u;
            // 0x1dc1f4: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC1F8u; }
        if (ctx->pc != 0x1DC1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC1F8u; }
        if (ctx->pc != 0x1DC1F8u) { return; }
    }
    ctx->pc = 0x1DC1F8u;
    // 0x1dc1f8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DC1F8u;
    SET_GPR_U32(ctx, 31, 0x1DC200u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC200u; }
        if (ctx->pc != 0x1DC200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC200u; }
        if (ctx->pc != 0x1DC200u) { return; }
    }
    ctx->pc = 0x1DC200u;
    // 0x1dc200: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dc200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dc204: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dc204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dc208: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dc208u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dc20c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dc20cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dc210: 0x0  nop
    ctx->pc = 0x1dc210u;
    // NOP
    // 0x1dc214: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dc214u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dc218: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DC218u;
    SET_GPR_U32(ctx, 31, 0x1DC220u);
    ctx->pc = 0x1DC21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC218u;
            // 0x1dc21c: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC220u; }
        if (ctx->pc != 0x1DC220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC220u; }
        if (ctx->pc != 0x1DC220u) { return; }
    }
    ctx->pc = 0x1DC220u;
    // 0x1dc220: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc224: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dc224u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dc228: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc22c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dc22cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dc230: 0xc065254  jal         func_194950
    ctx->pc = 0x1DC230u;
    SET_GPR_U32(ctx, 31, 0x1DC238u);
    ctx->pc = 0x1DC234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC230u;
            // 0x1dc234: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC238u; }
        if (ctx->pc != 0x1DC238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC238u; }
        if (ctx->pc != 0x1DC238u) { return; }
    }
    ctx->pc = 0x1DC238u;
    // 0x1dc238: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DC238u;
    SET_GPR_U32(ctx, 31, 0x1DC240u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC240u; }
        if (ctx->pc != 0x1DC240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC240u; }
        if (ctx->pc != 0x1DC240u) { return; }
    }
    ctx->pc = 0x1DC240u;
    // 0x1dc240: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dc240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dc244: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dc244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dc248: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dc248u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dc24c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dc24cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dc250: 0x0  nop
    ctx->pc = 0x1dc250u;
    // NOP
    // 0x1dc254: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dc254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dc258: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DC258u;
    SET_GPR_U32(ctx, 31, 0x1DC260u);
    ctx->pc = 0x1DC25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC258u;
            // 0x1dc25c: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC260u; }
        if (ctx->pc != 0x1DC260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC260u; }
        if (ctx->pc != 0x1DC260u) { return; }
    }
    ctx->pc = 0x1DC260u;
    // 0x1dc260: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc264: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dc264u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dc268: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc26c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dc26cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dc270: 0xc065254  jal         func_194950
    ctx->pc = 0x1DC270u;
    SET_GPR_U32(ctx, 31, 0x1DC278u);
    ctx->pc = 0x1DC274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC270u;
            // 0x1dc274: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC278u; }
        if (ctx->pc != 0x1DC278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC278u; }
        if (ctx->pc != 0x1DC278u) { return; }
    }
    ctx->pc = 0x1DC278u;
    // 0x1dc278: 0x10000ae5  b           . + 4 + (0xAE5 << 2)
    ctx->pc = 0x1DC278u;
    {
        const bool branch_taken_0x1dc278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc278) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DC280u;
label_1dc280:
    // 0x1dc280: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc284: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc288: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dc288u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dc28c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DC28Cu;
    SET_GPR_U32(ctx, 31, 0x1DC294u);
    ctx->pc = 0x1DC290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC28Cu;
            // 0x1dc290: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC294u; }
        if (ctx->pc != 0x1DC294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC294u; }
        if (ctx->pc != 0x1DC294u) { return; }
    }
    ctx->pc = 0x1DC294u;
    // 0x1dc294: 0x10000ade  b           . + 4 + (0xADE << 2)
    ctx->pc = 0x1DC294u;
    {
        const bool branch_taken_0x1dc294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc294) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DC29Cu;
    // 0x1dc29c: 0x0  nop
    ctx->pc = 0x1dc29cu;
    // NOP
label_1dc2a0:
    // 0x1dc2a0: 0xc065d00  jal         func_197400
    ctx->pc = 0x1DC2A0u;
    SET_GPR_U32(ctx, 31, 0x1DC2A8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC2A8u; }
        if (ctx->pc != 0x1DC2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC2A8u; }
        if (ctx->pc != 0x1DC2A8u) { return; }
    }
    ctx->pc = 0x1DC2A8u;
    // 0x1dc2a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dc2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc2ac: 0x14430092  bne         $v0, $v1, . + 4 + (0x92 << 2)
    ctx->pc = 0x1DC2ACu;
    {
        const bool branch_taken_0x1dc2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dc2ac) {
            ctx->pc = 0x1DC4F8u;
            goto label_1dc4f8;
        }
    }
    ctx->pc = 0x1DC2B4u;
    // 0x1dc2b4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1dc2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1dc2b8: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1dc2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1dc2bc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1dc2bcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1dc2c0: 0x0  nop
    ctx->pc = 0x1dc2c0u;
    // NOP
    // 0x1dc2c4: 0x0  nop
    ctx->pc = 0x1dc2c4u;
    // NOP
    // 0x1dc2c8: 0x1010  mfhi        $v0
    ctx->pc = 0x1dc2c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1dc2cc: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1DC2CCu;
    {
        const bool branch_taken_0x1dc2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc2cc) {
            ctx->pc = 0x1DC360u;
            goto label_1dc360;
        }
    }
    ctx->pc = 0x1DC2D4u;
    // 0x1dc2d4: 0x8e030124  lw          $v1, 0x124($s0)
    ctx->pc = 0x1dc2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1dc2d8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DC2D8u;
    {
        const bool branch_taken_0x1dc2d8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DC2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC2D8u;
            // 0x1dc2dc: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc2d8) {
            ctx->pc = 0x1DC2ECu;
            goto label_1dc2ec;
        }
    }
    ctx->pc = 0x1DC2E0u;
    // 0x1dc2e0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DC2E0u;
    {
        const bool branch_taken_0x1dc2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc2e0) {
            ctx->pc = 0x1DC2ECu;
            goto label_1dc2ec;
        }
    }
    ctx->pc = 0x1DC2E8u;
    // 0x1dc2e8: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1dc2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1dc2ec:
    // 0x1dc2ec: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1DC2ECu;
    {
        const bool branch_taken_0x1dc2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc2ec) {
            ctx->pc = 0x1DC328u;
            goto label_1dc328;
        }
    }
    ctx->pc = 0x1DC2F4u;
    // 0x1dc2f4: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dc2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc2f8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc2fc: 0x2464ff88  addiu       $a0, $v1, -0x78
    ctx->pc = 0x1dc2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967176));
    // 0x1dc300: 0xc06560c  jal         func_195830
    ctx->pc = 0x1DC300u;
    SET_GPR_U32(ctx, 31, 0x1DC308u);
    ctx->pc = 0x1DC304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC300u;
            // 0x1dc304: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC308u; }
        if (ctx->pc != 0x1DC308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC308u; }
        if (ctx->pc != 0x1DC308u) { return; }
    }
    ctx->pc = 0x1DC308u;
    // 0x1dc308: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dc308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc30c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc310: 0x2464ff79  addiu       $a0, $v1, -0x87
    ctx->pc = 0x1dc310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967161));
    // 0x1dc314: 0xc06560c  jal         func_195830
    ctx->pc = 0x1DC314u;
    SET_GPR_U32(ctx, 31, 0x1DC31Cu);
    ctx->pc = 0x1DC318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC314u;
            // 0x1dc318: 0x24450032  addiu       $a1, $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC31Cu; }
        if (ctx->pc != 0x1DC31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC31Cu; }
        if (ctx->pc != 0x1DC31Cu) { return; }
    }
    ctx->pc = 0x1DC31Cu;
    // 0x1dc31c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1DC31Cu;
    {
        const bool branch_taken_0x1dc31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc31c) {
            ctx->pc = 0x1DC350u;
            goto label_1dc350;
        }
    }
    ctx->pc = 0x1DC324u;
    // 0x1dc324: 0x0  nop
    ctx->pc = 0x1dc324u;
    // NOP
label_1dc328:
    // 0x1dc328: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dc328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc32c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc330: 0x24640078  addiu       $a0, $v1, 0x78
    ctx->pc = 0x1dc330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x1dc334: 0xc06560c  jal         func_195830
    ctx->pc = 0x1DC334u;
    SET_GPR_U32(ctx, 31, 0x1DC33Cu);
    ctx->pc = 0x1DC338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC334u;
            // 0x1dc338: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC33Cu; }
        if (ctx->pc != 0x1DC33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC33Cu; }
        if (ctx->pc != 0x1DC33Cu) { return; }
    }
    ctx->pc = 0x1DC33Cu;
    // 0x1dc33c: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dc33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc340: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc344: 0x24640087  addiu       $a0, $v1, 0x87
    ctx->pc = 0x1dc344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 135));
    // 0x1dc348: 0xc06560c  jal         func_195830
    ctx->pc = 0x1DC348u;
    SET_GPR_U32(ctx, 31, 0x1DC350u);
    ctx->pc = 0x1DC34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC348u;
            // 0x1dc34c: 0x24450032  addiu       $a1, $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC350u; }
        if (ctx->pc != 0x1DC350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC350u; }
        if (ctx->pc != 0x1DC350u) { return; }
    }
    ctx->pc = 0x1DC350u;
label_1dc350:
    // 0x1dc350: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x1dc350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1dc354: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dc354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dc358: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x1dc358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x1dc35c: 0x0  nop
    ctx->pc = 0x1dc35cu;
    // NOP
label_1dc360:
    // 0x1dc360: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1dc360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1dc364: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1dc364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1dc368: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1dc368u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1dc36c: 0x0  nop
    ctx->pc = 0x1dc36cu;
    // NOP
    // 0x1dc370: 0x0  nop
    ctx->pc = 0x1dc370u;
    // NOP
    // 0x1dc374: 0x1010  mfhi        $v0
    ctx->pc = 0x1dc374u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1dc378: 0x14400aa5  bnez        $v0, . + 4 + (0xAA5 << 2)
    ctx->pc = 0x1DC378u;
    {
        const bool branch_taken_0x1dc378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc378) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DC380u;
    // 0x1dc380: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1dc380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc384: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dc384u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc388: 0x0  nop
    ctx->pc = 0x1dc388u;
    // NOP
    // 0x1dc38c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dc38cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc390: 0x45010051  bc1t        . + 4 + (0x51 << 2)
    ctx->pc = 0x1DC390u;
    {
        const bool branch_taken_0x1dc390 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DC394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC390u;
            // 0x1dc394: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc390) {
            ctx->pc = 0x1DC4D8u;
            goto label_1dc4d8;
        }
    }
    ctx->pc = 0x1DC398u;
    // 0x1dc398: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1dc398u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1dc39c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dc39cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc3a0: 0x0  nop
    ctx->pc = 0x1dc3a0u;
    // NOP
    // 0x1dc3a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dc3a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc3a8: 0x4500004b  bc1f        . + 4 + (0x4B << 2)
    ctx->pc = 0x1DC3A8u;
    {
        const bool branch_taken_0x1dc3a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dc3a8) {
            ctx->pc = 0x1DC4D8u;
            goto label_1dc4d8;
        }
    }
    ctx->pc = 0x1DC3B0u;
    // 0x1dc3b0: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1dc3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc3b4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc3b8: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1dc3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1dc3bc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1dc3bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1dc3c0: 0x2442004b  addiu       $v0, $v0, 0x4B
    ctx->pc = 0x1dc3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
    // 0x1dc3c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dc3c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc3c8: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DC3C8u;
    SET_GPR_U32(ctx, 31, 0x1DC3D0u);
    ctx->pc = 0x1DC3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC3C8u;
            // 0x1dc3cc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC3D0u; }
        if (ctx->pc != 0x1DC3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC3D0u; }
        if (ctx->pc != 0x1DC3D0u) { return; }
    }
    ctx->pc = 0x1DC3D0u;
    // 0x1dc3d0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DC3D0u;
    SET_GPR_U32(ctx, 31, 0x1DC3D8u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC3D8u; }
        if (ctx->pc != 0x1DC3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC3D8u; }
        if (ctx->pc != 0x1DC3D8u) { return; }
    }
    ctx->pc = 0x1DC3D8u;
    // 0x1dc3d8: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dc3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dc3dc: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dc3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dc3e0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dc3e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dc3e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dc3e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dc3e8: 0x0  nop
    ctx->pc = 0x1dc3e8u;
    // NOP
    // 0x1dc3ec: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dc3ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dc3f0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DC3F0u;
    SET_GPR_U32(ctx, 31, 0x1DC3F8u);
    ctx->pc = 0x1DC3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC3F0u;
            // 0x1dc3f4: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC3F8u; }
        if (ctx->pc != 0x1DC3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC3F8u; }
        if (ctx->pc != 0x1DC3F8u) { return; }
    }
    ctx->pc = 0x1DC3F8u;
    // 0x1dc3f8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc3fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dc3fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dc400: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc404: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dc404u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dc408: 0xc065254  jal         func_194950
    ctx->pc = 0x1DC408u;
    SET_GPR_U32(ctx, 31, 0x1DC410u);
    ctx->pc = 0x1DC40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC408u;
            // 0x1dc40c: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC410u; }
        if (ctx->pc != 0x1DC410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC410u; }
        if (ctx->pc != 0x1DC410u) { return; }
    }
    ctx->pc = 0x1DC410u;
    // 0x1dc410: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DC410u;
    SET_GPR_U32(ctx, 31, 0x1DC418u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC418u; }
        if (ctx->pc != 0x1DC418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC418u; }
        if (ctx->pc != 0x1DC418u) { return; }
    }
    ctx->pc = 0x1DC418u;
    // 0x1dc418: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dc418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dc41c: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dc41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dc420: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dc420u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dc424: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dc424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dc428: 0x0  nop
    ctx->pc = 0x1dc428u;
    // NOP
    // 0x1dc42c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dc42cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dc430: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DC430u;
    SET_GPR_U32(ctx, 31, 0x1DC438u);
    ctx->pc = 0x1DC434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC430u;
            // 0x1dc434: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC438u; }
        if (ctx->pc != 0x1DC438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC438u; }
        if (ctx->pc != 0x1DC438u) { return; }
    }
    ctx->pc = 0x1DC438u;
    // 0x1dc438: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc43c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dc43cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dc440: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc444: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dc444u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dc448: 0xc065254  jal         func_194950
    ctx->pc = 0x1DC448u;
    SET_GPR_U32(ctx, 31, 0x1DC450u);
    ctx->pc = 0x1DC44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC448u;
            // 0x1dc44c: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC450u; }
        if (ctx->pc != 0x1DC450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC450u; }
        if (ctx->pc != 0x1DC450u) { return; }
    }
    ctx->pc = 0x1DC450u;
    // 0x1dc450: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DC450u;
    SET_GPR_U32(ctx, 31, 0x1DC458u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC458u; }
        if (ctx->pc != 0x1DC458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC458u; }
        if (ctx->pc != 0x1DC458u) { return; }
    }
    ctx->pc = 0x1DC458u;
    // 0x1dc458: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dc458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dc45c: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dc45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dc460: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dc460u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dc464: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dc464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dc468: 0x0  nop
    ctx->pc = 0x1dc468u;
    // NOP
    // 0x1dc46c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dc46cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dc470: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DC470u;
    SET_GPR_U32(ctx, 31, 0x1DC478u);
    ctx->pc = 0x1DC474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC470u;
            // 0x1dc474: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC478u; }
        if (ctx->pc != 0x1DC478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC478u; }
        if (ctx->pc != 0x1DC478u) { return; }
    }
    ctx->pc = 0x1DC478u;
    // 0x1dc478: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc47c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dc47cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dc480: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc484: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dc484u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dc488: 0xc065254  jal         func_194950
    ctx->pc = 0x1DC488u;
    SET_GPR_U32(ctx, 31, 0x1DC490u);
    ctx->pc = 0x1DC48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC488u;
            // 0x1dc48c: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC490u; }
        if (ctx->pc != 0x1DC490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC490u; }
        if (ctx->pc != 0x1DC490u) { return; }
    }
    ctx->pc = 0x1DC490u;
    // 0x1dc490: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DC490u;
    SET_GPR_U32(ctx, 31, 0x1DC498u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC498u; }
        if (ctx->pc != 0x1DC498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC498u; }
        if (ctx->pc != 0x1DC498u) { return; }
    }
    ctx->pc = 0x1DC498u;
    // 0x1dc498: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dc498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dc49c: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dc49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dc4a0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dc4a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dc4a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dc4a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dc4a8: 0x0  nop
    ctx->pc = 0x1dc4a8u;
    // NOP
    // 0x1dc4ac: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dc4acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dc4b0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DC4B0u;
    SET_GPR_U32(ctx, 31, 0x1DC4B8u);
    ctx->pc = 0x1DC4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC4B0u;
            // 0x1dc4b4: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC4B8u; }
        if (ctx->pc != 0x1DC4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC4B8u; }
        if (ctx->pc != 0x1DC4B8u) { return; }
    }
    ctx->pc = 0x1DC4B8u;
    // 0x1dc4b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc4bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dc4bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dc4c0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc4c4: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dc4c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dc4c8: 0xc065254  jal         func_194950
    ctx->pc = 0x1DC4C8u;
    SET_GPR_U32(ctx, 31, 0x1DC4D0u);
    ctx->pc = 0x1DC4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC4C8u;
            // 0x1dc4cc: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC4D0u; }
        if (ctx->pc != 0x1DC4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC4D0u; }
        if (ctx->pc != 0x1DC4D0u) { return; }
    }
    ctx->pc = 0x1DC4D0u;
    // 0x1dc4d0: 0x10000a4f  b           . + 4 + (0xA4F << 2)
    ctx->pc = 0x1DC4D0u;
    {
        const bool branch_taken_0x1dc4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc4d0) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DC4D8u;
label_1dc4d8:
    // 0x1dc4d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc4dc: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc4e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dc4e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dc4e4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DC4E4u;
    SET_GPR_U32(ctx, 31, 0x1DC4ECu);
    ctx->pc = 0x1DC4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC4E4u;
            // 0x1dc4e8: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC4ECu; }
        if (ctx->pc != 0x1DC4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC4ECu; }
        if (ctx->pc != 0x1DC4ECu) { return; }
    }
    ctx->pc = 0x1DC4ECu;
    // 0x1dc4ec: 0x10000a48  b           . + 4 + (0xA48 << 2)
    ctx->pc = 0x1DC4ECu;
    {
        const bool branch_taken_0x1dc4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc4ec) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DC4F4u;
    // 0x1dc4f4: 0x0  nop
    ctx->pc = 0x1dc4f4u;
    // NOP
label_1dc4f8:
    // 0x1dc4f8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1dc4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1dc4fc: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1dc4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1dc500: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1dc500u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1dc504: 0x0  nop
    ctx->pc = 0x1dc504u;
    // NOP
    // 0x1dc508: 0x0  nop
    ctx->pc = 0x1dc508u;
    // NOP
    // 0x1dc50c: 0x1010  mfhi        $v0
    ctx->pc = 0x1dc50cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1dc510: 0x14400a3f  bnez        $v0, . + 4 + (0xA3F << 2)
    ctx->pc = 0x1DC510u;
    {
        const bool branch_taken_0x1dc510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc510) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DC518u;
    // 0x1dc518: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1dc518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc51c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dc51cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc520: 0x0  nop
    ctx->pc = 0x1dc520u;
    // NOP
    // 0x1dc524: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dc524u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc528: 0x45010071  bc1t        . + 4 + (0x71 << 2)
    ctx->pc = 0x1DC528u;
    {
        const bool branch_taken_0x1dc528 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DC52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC528u;
            // 0x1dc52c: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc528) {
            ctx->pc = 0x1DC6F0u;
            goto label_1dc6f0;
        }
    }
    ctx->pc = 0x1DC530u;
    // 0x1dc530: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1dc530u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1dc534: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dc534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc538: 0x0  nop
    ctx->pc = 0x1dc538u;
    // NOP
    // 0x1dc53c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dc53cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc540: 0x4500006b  bc1f        . + 4 + (0x6B << 2)
    ctx->pc = 0x1DC540u;
    {
        const bool branch_taken_0x1dc540 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dc540) {
            ctx->pc = 0x1DC6F0u;
            goto label_1dc6f0;
        }
    }
    ctx->pc = 0x1DC548u;
    // 0x1dc548: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1dc548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc54c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc550: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1dc550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1dc554: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1dc554u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1dc558: 0x2442004b  addiu       $v0, $v0, 0x4B
    ctx->pc = 0x1dc558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
    // 0x1dc55c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dc55cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc560: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DC560u;
    SET_GPR_U32(ctx, 31, 0x1DC568u);
    ctx->pc = 0x1DC564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC560u;
            // 0x1dc564: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC568u; }
        if (ctx->pc != 0x1DC568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC568u; }
        if (ctx->pc != 0x1DC568u) { return; }
    }
    ctx->pc = 0x1DC568u;
    // 0x1dc568: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DC568u;
    SET_GPR_U32(ctx, 31, 0x1DC570u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC570u; }
        if (ctx->pc != 0x1DC570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC570u; }
        if (ctx->pc != 0x1DC570u) { return; }
    }
    ctx->pc = 0x1DC570u;
    // 0x1dc570: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dc570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dc574: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dc574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dc578: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dc578u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dc57c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dc57cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dc580: 0x0  nop
    ctx->pc = 0x1dc580u;
    // NOP
    // 0x1dc584: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dc584u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dc588: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DC588u;
    SET_GPR_U32(ctx, 31, 0x1DC590u);
    ctx->pc = 0x1DC58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC588u;
            // 0x1dc58c: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC590u; }
        if (ctx->pc != 0x1DC590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC590u; }
        if (ctx->pc != 0x1DC590u) { return; }
    }
    ctx->pc = 0x1DC590u;
    // 0x1dc590: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc594: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dc594u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dc598: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc59c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dc59cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dc5a0: 0xc065254  jal         func_194950
    ctx->pc = 0x1DC5A0u;
    SET_GPR_U32(ctx, 31, 0x1DC5A8u);
    ctx->pc = 0x1DC5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC5A0u;
            // 0x1dc5a4: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC5A8u; }
        if (ctx->pc != 0x1DC5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC5A8u; }
        if (ctx->pc != 0x1DC5A8u) { return; }
    }
    ctx->pc = 0x1DC5A8u;
    // 0x1dc5a8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DC5A8u;
    SET_GPR_U32(ctx, 31, 0x1DC5B0u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC5B0u; }
        if (ctx->pc != 0x1DC5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC5B0u; }
        if (ctx->pc != 0x1DC5B0u) { return; }
    }
    ctx->pc = 0x1DC5B0u;
    // 0x1dc5b0: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dc5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dc5b4: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dc5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dc5b8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dc5b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dc5bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dc5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dc5c0: 0x0  nop
    ctx->pc = 0x1dc5c0u;
    // NOP
    // 0x1dc5c4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dc5c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dc5c8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DC5C8u;
    SET_GPR_U32(ctx, 31, 0x1DC5D0u);
    ctx->pc = 0x1DC5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC5C8u;
            // 0x1dc5cc: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC5D0u; }
        if (ctx->pc != 0x1DC5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC5D0u; }
        if (ctx->pc != 0x1DC5D0u) { return; }
    }
    ctx->pc = 0x1DC5D0u;
    // 0x1dc5d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc5d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dc5d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dc5d8: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc5dc: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dc5dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dc5e0: 0xc065254  jal         func_194950
    ctx->pc = 0x1DC5E0u;
    SET_GPR_U32(ctx, 31, 0x1DC5E8u);
    ctx->pc = 0x1DC5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC5E0u;
            // 0x1dc5e4: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC5E8u; }
        if (ctx->pc != 0x1DC5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC5E8u; }
        if (ctx->pc != 0x1DC5E8u) { return; }
    }
    ctx->pc = 0x1DC5E8u;
    // 0x1dc5e8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DC5E8u;
    SET_GPR_U32(ctx, 31, 0x1DC5F0u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC5F0u; }
        if (ctx->pc != 0x1DC5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC5F0u; }
        if (ctx->pc != 0x1DC5F0u) { return; }
    }
    ctx->pc = 0x1DC5F0u;
    // 0x1dc5f0: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dc5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dc5f4: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dc5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dc5f8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dc5f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dc5fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dc5fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dc600: 0x0  nop
    ctx->pc = 0x1dc600u;
    // NOP
    // 0x1dc604: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dc604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dc608: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DC608u;
    SET_GPR_U32(ctx, 31, 0x1DC610u);
    ctx->pc = 0x1DC60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC608u;
            // 0x1dc60c: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC610u; }
        if (ctx->pc != 0x1DC610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC610u; }
        if (ctx->pc != 0x1DC610u) { return; }
    }
    ctx->pc = 0x1DC610u;
    // 0x1dc610: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc614: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dc614u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dc618: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc61c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dc61cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dc620: 0xc065254  jal         func_194950
    ctx->pc = 0x1DC620u;
    SET_GPR_U32(ctx, 31, 0x1DC628u);
    ctx->pc = 0x1DC624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC620u;
            // 0x1dc624: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC628u; }
        if (ctx->pc != 0x1DC628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC628u; }
        if (ctx->pc != 0x1DC628u) { return; }
    }
    ctx->pc = 0x1DC628u;
    // 0x1dc628: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DC628u;
    SET_GPR_U32(ctx, 31, 0x1DC630u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC630u; }
        if (ctx->pc != 0x1DC630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC630u; }
        if (ctx->pc != 0x1DC630u) { return; }
    }
    ctx->pc = 0x1DC630u;
    // 0x1dc630: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dc630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dc634: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dc634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dc638: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dc638u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dc63c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dc63cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dc640: 0x0  nop
    ctx->pc = 0x1dc640u;
    // NOP
    // 0x1dc644: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dc644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dc648: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DC648u;
    SET_GPR_U32(ctx, 31, 0x1DC650u);
    ctx->pc = 0x1DC64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC648u;
            // 0x1dc64c: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC650u; }
        if (ctx->pc != 0x1DC650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC650u; }
        if (ctx->pc != 0x1DC650u) { return; }
    }
    ctx->pc = 0x1DC650u;
    // 0x1dc650: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc654: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dc654u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dc658: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc65c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dc65cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dc660: 0xc065254  jal         func_194950
    ctx->pc = 0x1DC660u;
    SET_GPR_U32(ctx, 31, 0x1DC668u);
    ctx->pc = 0x1DC664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC660u;
            // 0x1dc664: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC668u; }
        if (ctx->pc != 0x1DC668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC668u; }
        if (ctx->pc != 0x1DC668u) { return; }
    }
    ctx->pc = 0x1DC668u;
    // 0x1dc668: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DC668u;
    SET_GPR_U32(ctx, 31, 0x1DC670u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC670u; }
        if (ctx->pc != 0x1DC670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC670u; }
        if (ctx->pc != 0x1DC670u) { return; }
    }
    ctx->pc = 0x1DC670u;
    // 0x1dc670: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dc670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dc674: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dc674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dc678: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dc678u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dc67c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dc67cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dc680: 0x0  nop
    ctx->pc = 0x1dc680u;
    // NOP
    // 0x1dc684: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dc684u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dc688: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DC688u;
    SET_GPR_U32(ctx, 31, 0x1DC690u);
    ctx->pc = 0x1DC68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC688u;
            // 0x1dc68c: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC690u; }
        if (ctx->pc != 0x1DC690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC690u; }
        if (ctx->pc != 0x1DC690u) { return; }
    }
    ctx->pc = 0x1DC690u;
    // 0x1dc690: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc694: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dc694u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dc698: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc69c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dc69cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dc6a0: 0xc065254  jal         func_194950
    ctx->pc = 0x1DC6A0u;
    SET_GPR_U32(ctx, 31, 0x1DC6A8u);
    ctx->pc = 0x1DC6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC6A0u;
            // 0x1dc6a4: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC6A8u; }
        if (ctx->pc != 0x1DC6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC6A8u; }
        if (ctx->pc != 0x1DC6A8u) { return; }
    }
    ctx->pc = 0x1DC6A8u;
    // 0x1dc6a8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DC6A8u;
    SET_GPR_U32(ctx, 31, 0x1DC6B0u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC6B0u; }
        if (ctx->pc != 0x1DC6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC6B0u; }
        if (ctx->pc != 0x1DC6B0u) { return; }
    }
    ctx->pc = 0x1DC6B0u;
    // 0x1dc6b0: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dc6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dc6b4: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dc6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dc6b8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dc6b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dc6bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dc6bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dc6c0: 0x0  nop
    ctx->pc = 0x1dc6c0u;
    // NOP
    // 0x1dc6c4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dc6c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dc6c8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DC6C8u;
    SET_GPR_U32(ctx, 31, 0x1DC6D0u);
    ctx->pc = 0x1DC6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC6C8u;
            // 0x1dc6cc: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC6D0u; }
        if (ctx->pc != 0x1DC6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC6D0u; }
        if (ctx->pc != 0x1DC6D0u) { return; }
    }
    ctx->pc = 0x1DC6D0u;
    // 0x1dc6d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc6d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dc6d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dc6d8: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc6dc: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dc6dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dc6e0: 0xc065254  jal         func_194950
    ctx->pc = 0x1DC6E0u;
    SET_GPR_U32(ctx, 31, 0x1DC6E8u);
    ctx->pc = 0x1DC6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC6E0u;
            // 0x1dc6e4: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC6E8u; }
        if (ctx->pc != 0x1DC6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC6E8u; }
        if (ctx->pc != 0x1DC6E8u) { return; }
    }
    ctx->pc = 0x1DC6E8u;
    // 0x1dc6e8: 0x100009c9  b           . + 4 + (0x9C9 << 2)
    ctx->pc = 0x1DC6E8u;
    {
        const bool branch_taken_0x1dc6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc6e8) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DC6F0u;
label_1dc6f0:
    // 0x1dc6f0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc6f4: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc6f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dc6f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dc6fc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DC6FCu;
    SET_GPR_U32(ctx, 31, 0x1DC704u);
    ctx->pc = 0x1DC700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC6FCu;
            // 0x1dc700: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC704u; }
        if (ctx->pc != 0x1DC704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC704u; }
        if (ctx->pc != 0x1DC704u) { return; }
    }
    ctx->pc = 0x1DC704u;
    // 0x1dc704: 0x100009c2  b           . + 4 + (0x9C2 << 2)
    ctx->pc = 0x1DC704u;
    {
        const bool branch_taken_0x1dc704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc704) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DC70Cu;
    // 0x1dc70c: 0x0  nop
    ctx->pc = 0x1dc70cu;
    // NOP
label_1dc710:
    // 0x1dc710: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1dc710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dc714: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1dc714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1dc718: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1dc718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dc71c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1dc71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1dc720: 0xc077de0  jal         func_1DF780
    ctx->pc = 0x1DC720u;
    SET_GPR_U32(ctx, 31, 0x1DC728u);
    ctx->pc = 0x1DC724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC720u;
            // 0x1dc724: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF780u;
    if (runtime->hasFunction(0x1DF780u)) {
        auto targetFn = runtime->lookupFunction(0x1DF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC728u; }
        if (ctx->pc != 0x1DC728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1df780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC728u; }
        if (ctx->pc != 0x1DC728u) { return; }
    }
    ctx->pc = 0x1DC728u;
    // 0x1dc728: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DC728u;
    SET_GPR_U32(ctx, 31, 0x1DC730u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC730u; }
        if (ctx->pc != 0x1DC730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC730u; }
        if (ctx->pc != 0x1DC730u) { return; }
    }
    ctx->pc = 0x1DC730u;
    // 0x1dc730: 0xc065d00  jal         func_197400
    ctx->pc = 0x1DC730u;
    SET_GPR_U32(ctx, 31, 0x1DC738u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC738u; }
        if (ctx->pc != 0x1DC738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC738u; }
        if (ctx->pc != 0x1DC738u) { return; }
    }
    ctx->pc = 0x1DC738u;
    // 0x1dc738: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1dc738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dc73c: 0x14430080  bne         $v0, $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x1DC73Cu;
    {
        const bool branch_taken_0x1dc73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dc73c) {
            ctx->pc = 0x1DC940u;
            goto label_1dc940;
        }
    }
    ctx->pc = 0x1DC744u;
    // 0x1dc744: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1dc744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1dc748: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1dc748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1dc74c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1dc74cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1dc750: 0x0  nop
    ctx->pc = 0x1dc750u;
    // NOP
    // 0x1dc754: 0x0  nop
    ctx->pc = 0x1dc754u;
    // NOP
    // 0x1dc758: 0x1010  mfhi        $v0
    ctx->pc = 0x1dc758u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1dc75c: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1DC75Cu;
    {
        const bool branch_taken_0x1dc75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc75c) {
            ctx->pc = 0x1DC8D0u;
            goto label_1dc8d0;
        }
    }
    ctx->pc = 0x1DC764u;
    // 0x1dc764: 0x8e030124  lw          $v1, 0x124($s0)
    ctx->pc = 0x1dc764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1dc768: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DC768u;
    {
        const bool branch_taken_0x1dc768 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DC76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC768u;
            // 0x1dc76c: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc768) {
            ctx->pc = 0x1DC77Cu;
            goto label_1dc77c;
        }
    }
    ctx->pc = 0x1DC770u;
    // 0x1dc770: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DC770u;
    {
        const bool branch_taken_0x1dc770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc770) {
            ctx->pc = 0x1DC77Cu;
            goto label_1dc77c;
        }
    }
    ctx->pc = 0x1DC778u;
    // 0x1dc778: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1dc778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1dc77c:
    // 0x1dc77c: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1DC77Cu;
    {
        const bool branch_taken_0x1dc77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc77c) {
            ctx->pc = 0x1DC830u;
            goto label_1dc830;
        }
    }
    ctx->pc = 0x1DC784u;
    // 0x1dc784: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc788: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dc788u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dc78c: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc790: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DC790u;
    SET_GPR_U32(ctx, 31, 0x1DC798u);
    ctx->pc = 0x1DC794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC790u;
            // 0x1dc794: 0x2445003c  addiu       $a1, $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC798u; }
        if (ctx->pc != 0x1DC798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC798u; }
        if (ctx->pc != 0x1DC798u) { return; }
    }
    ctx->pc = 0x1DC798u;
    // 0x1dc798: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dc798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc79c: 0x3c02c334  lui         $v0, 0xC334
    ctx->pc = 0x1dc79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49972 << 16));
    // 0x1dc7a0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc7a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dc7a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dc7a8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DC7A8u;
    SET_GPR_U32(ctx, 31, 0x1DC7B0u);
    ctx->pc = 0x1DC7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC7A8u;
            // 0x1dc7ac: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC7B0u; }
        if (ctx->pc != 0x1DC7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC7B0u; }
        if (ctx->pc != 0x1DC7B0u) { return; }
    }
    ctx->pc = 0x1DC7B0u;
    // 0x1dc7b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dc7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc7b4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1dc7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1dc7b8: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc7bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dc7bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dc7c0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DC7C0u;
    SET_GPR_U32(ctx, 31, 0x1DC7C8u);
    ctx->pc = 0x1DC7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC7C0u;
            // 0x1dc7c4: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC7C8u; }
        if (ctx->pc != 0x1DC7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC7C8u; }
        if (ctx->pc != 0x1DC7C8u) { return; }
    }
    ctx->pc = 0x1DC7C8u;
    // 0x1dc7c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dc7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc7cc: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x1dc7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x1dc7d0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc7d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dc7d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dc7d8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DC7D8u;
    SET_GPR_U32(ctx, 31, 0x1DC7E0u);
    ctx->pc = 0x1DC7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC7D8u;
            // 0x1dc7dc: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC7E0u; }
        if (ctx->pc != 0x1DC7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC7E0u; }
        if (ctx->pc != 0x1DC7E0u) { return; }
    }
    ctx->pc = 0x1DC7E0u;
    // 0x1dc7e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dc7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc7e4: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x1dc7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x1dc7e8: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc7ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dc7ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dc7f0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DC7F0u;
    SET_GPR_U32(ctx, 31, 0x1DC7F8u);
    ctx->pc = 0x1DC7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC7F0u;
            // 0x1dc7f4: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC7F8u; }
        if (ctx->pc != 0x1DC7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC7F8u; }
        if (ctx->pc != 0x1DC7F8u) { return; }
    }
    ctx->pc = 0x1DC7F8u;
    // 0x1dc7f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dc7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc7fc: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x1dc7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x1dc800: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc804: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dc804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dc808: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DC808u;
    SET_GPR_U32(ctx, 31, 0x1DC810u);
    ctx->pc = 0x1DC80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC808u;
            // 0x1dc80c: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC810u; }
        if (ctx->pc != 0x1DC810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC810u; }
        if (ctx->pc != 0x1DC810u) { return; }
    }
    ctx->pc = 0x1DC810u;
    // 0x1dc810: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dc810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc814: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1dc814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1dc818: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc81c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dc81cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dc820: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DC820u;
    SET_GPR_U32(ctx, 31, 0x1DC828u);
    ctx->pc = 0x1DC824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC820u;
            // 0x1dc824: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC828u; }
        if (ctx->pc != 0x1DC828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC828u; }
        if (ctx->pc != 0x1DC828u) { return; }
    }
    ctx->pc = 0x1DC828u;
    // 0x1dc828: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1DC828u;
    {
        const bool branch_taken_0x1dc828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc828) {
            ctx->pc = 0x1DC8C0u;
            goto label_1dc8c0;
        }
    }
    ctx->pc = 0x1DC830u;
label_1dc830:
    // 0x1dc830: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dc830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc834: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc838: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x1dc838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x1dc83c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dc83cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dc840: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DC840u;
    SET_GPR_U32(ctx, 31, 0x1DC848u);
    ctx->pc = 0x1DC844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC840u;
            // 0x1dc844: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC848u; }
        if (ctx->pc != 0x1DC848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC848u; }
        if (ctx->pc != 0x1DC848u) { return; }
    }
    ctx->pc = 0x1DC848u;
    // 0x1dc848: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dc848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc84c: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x1dc84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x1dc850: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc854: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dc854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dc858: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DC858u;
    SET_GPR_U32(ctx, 31, 0x1DC860u);
    ctx->pc = 0x1DC85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC858u;
            // 0x1dc85c: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC860u; }
        if (ctx->pc != 0x1DC860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC860u; }
        if (ctx->pc != 0x1DC860u) { return; }
    }
    ctx->pc = 0x1DC860u;
    // 0x1dc860: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dc860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc864: 0x3c02c352  lui         $v0, 0xC352
    ctx->pc = 0x1dc864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50002 << 16));
    // 0x1dc868: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc86c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dc86cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dc870: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DC870u;
    SET_GPR_U32(ctx, 31, 0x1DC878u);
    ctx->pc = 0x1DC874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC870u;
            // 0x1dc874: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC878u; }
        if (ctx->pc != 0x1DC878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC878u; }
        if (ctx->pc != 0x1DC878u) { return; }
    }
    ctx->pc = 0x1DC878u;
    // 0x1dc878: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dc878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc87c: 0x3c024352  lui         $v0, 0x4352
    ctx->pc = 0x1dc87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17234 << 16));
    // 0x1dc880: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc884: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dc884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dc888: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DC888u;
    SET_GPR_U32(ctx, 31, 0x1DC890u);
    ctx->pc = 0x1DC88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC888u;
            // 0x1dc88c: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC890u; }
        if (ctx->pc != 0x1DC890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC890u; }
        if (ctx->pc != 0x1DC890u) { return; }
    }
    ctx->pc = 0x1DC890u;
    // 0x1dc890: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dc890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc894: 0x3c02c387  lui         $v0, 0xC387
    ctx->pc = 0x1dc894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50055 << 16));
    // 0x1dc898: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc89c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dc89cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dc8a0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DC8A0u;
    SET_GPR_U32(ctx, 31, 0x1DC8A8u);
    ctx->pc = 0x1DC8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC8A0u;
            // 0x1dc8a4: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC8A8u; }
        if (ctx->pc != 0x1DC8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC8A8u; }
        if (ctx->pc != 0x1DC8A8u) { return; }
    }
    ctx->pc = 0x1DC8A8u;
    // 0x1dc8a8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dc8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc8ac: 0x3c024387  lui         $v0, 0x4387
    ctx->pc = 0x1dc8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17287 << 16));
    // 0x1dc8b0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc8b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dc8b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dc8b8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DC8B8u;
    SET_GPR_U32(ctx, 31, 0x1DC8C0u);
    ctx->pc = 0x1DC8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC8B8u;
            // 0x1dc8bc: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC8C0u; }
        if (ctx->pc != 0x1DC8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC8C0u; }
        if (ctx->pc != 0x1DC8C0u) { return; }
    }
    ctx->pc = 0x1DC8C0u;
label_1dc8c0:
    // 0x1dc8c0: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x1dc8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1dc8c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dc8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dc8c8: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x1dc8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x1dc8cc: 0x0  nop
    ctx->pc = 0x1dc8ccu;
    // NOP
label_1dc8d0:
    // 0x1dc8d0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1dc8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1dc8d4: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x1dc8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1dc8d8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1dc8d8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1dc8dc: 0x0  nop
    ctx->pc = 0x1dc8dcu;
    // NOP
    // 0x1dc8e0: 0x0  nop
    ctx->pc = 0x1dc8e0u;
    // NOP
    // 0x1dc8e4: 0x1010  mfhi        $v0
    ctx->pc = 0x1dc8e4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1dc8e8: 0x14400949  bnez        $v0, . + 4 + (0x949 << 2)
    ctx->pc = 0x1DC8E8u;
    {
        const bool branch_taken_0x1dc8e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc8e8) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DC8F0u;
    // 0x1dc8f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1dc8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dc8f4: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1dc8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc8f8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1dc8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc8fc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1dc8fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1dc900: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1dc900u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1dc904: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1dc904u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1dc908: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1dc908u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1dc90c: 0xc073d68  jal         func_1CF5A0
    ctx->pc = 0x1DC90Cu;
    SET_GPR_U32(ctx, 31, 0x1DC914u);
    ctx->pc = 0x1DC910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC90Cu;
            // 0x1dc910: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CF5A0u;
    if (runtime->hasFunction(0x1CF5A0u)) {
        auto targetFn = runtime->lookupFunction(0x1CF5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC914u; }
        if (ctx->pc != 0x1DC914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_03_0x1cf5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC914u; }
        if (ctx->pc != 0x1DC914u) { return; }
    }
    ctx->pc = 0x1DC914u;
    // 0x1dc914: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1dc914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dc918: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1dc918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc91c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1dc91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc920: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1dc920u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1dc924: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1dc924u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1dc928: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1dc928u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1dc92c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1dc92cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1dc930: 0xc073d68  jal         func_1CF5A0
    ctx->pc = 0x1DC930u;
    SET_GPR_U32(ctx, 31, 0x1DC938u);
    ctx->pc = 0x1DC934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC930u;
            // 0x1dc934: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CF5A0u;
    if (runtime->hasFunction(0x1CF5A0u)) {
        auto targetFn = runtime->lookupFunction(0x1CF5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC938u; }
        if (ctx->pc != 0x1DC938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_03_0x1cf5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC938u; }
        if (ctx->pc != 0x1DC938u) { return; }
    }
    ctx->pc = 0x1DC938u;
    // 0x1dc938: 0x10000935  b           . + 4 + (0x935 << 2)
    ctx->pc = 0x1DC938u;
    {
        const bool branch_taken_0x1dc938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc938) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DC940u;
label_1dc940:
    // 0x1dc940: 0xc065d00  jal         func_197400
    ctx->pc = 0x1DC940u;
    SET_GPR_U32(ctx, 31, 0x1DC948u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC948u; }
        if (ctx->pc != 0x1DC948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC948u; }
        if (ctx->pc != 0x1DC948u) { return; }
    }
    ctx->pc = 0x1DC948u;
    // 0x1dc948: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dc948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc94c: 0x14430080  bne         $v0, $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x1DC94Cu;
    {
        const bool branch_taken_0x1dc94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dc94c) {
            ctx->pc = 0x1DCB50u;
            goto label_1dcb50;
        }
    }
    ctx->pc = 0x1DC954u;
    // 0x1dc954: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1dc954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1dc958: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1dc958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1dc95c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1dc95cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1dc960: 0x0  nop
    ctx->pc = 0x1dc960u;
    // NOP
    // 0x1dc964: 0x0  nop
    ctx->pc = 0x1dc964u;
    // NOP
    // 0x1dc968: 0x1010  mfhi        $v0
    ctx->pc = 0x1dc968u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1dc96c: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1DC96Cu;
    {
        const bool branch_taken_0x1dc96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc96c) {
            ctx->pc = 0x1DCAE0u;
            goto label_1dcae0;
        }
    }
    ctx->pc = 0x1DC974u;
    // 0x1dc974: 0x8e030124  lw          $v1, 0x124($s0)
    ctx->pc = 0x1dc974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1dc978: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DC978u;
    {
        const bool branch_taken_0x1dc978 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DC97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC978u;
            // 0x1dc97c: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc978) {
            ctx->pc = 0x1DC98Cu;
            goto label_1dc98c;
        }
    }
    ctx->pc = 0x1DC980u;
    // 0x1dc980: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DC980u;
    {
        const bool branch_taken_0x1dc980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc980) {
            ctx->pc = 0x1DC98Cu;
            goto label_1dc98c;
        }
    }
    ctx->pc = 0x1DC988u;
    // 0x1dc988: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1dc988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1dc98c:
    // 0x1dc98c: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1DC98Cu;
    {
        const bool branch_taken_0x1dc98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc98c) {
            ctx->pc = 0x1DCA40u;
            goto label_1dca40;
        }
    }
    ctx->pc = 0x1DC994u;
    // 0x1dc994: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc998: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dc998u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dc99c: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc9a0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DC9A0u;
    SET_GPR_U32(ctx, 31, 0x1DC9A8u);
    ctx->pc = 0x1DC9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC9A0u;
            // 0x1dc9a4: 0x2445003c  addiu       $a1, $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC9A8u; }
        if (ctx->pc != 0x1DC9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC9A8u; }
        if (ctx->pc != 0x1DC9A8u) { return; }
    }
    ctx->pc = 0x1DC9A8u;
    // 0x1dc9a8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dc9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc9ac: 0x3c02c334  lui         $v0, 0xC334
    ctx->pc = 0x1dc9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49972 << 16));
    // 0x1dc9b0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc9b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dc9b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dc9b8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DC9B8u;
    SET_GPR_U32(ctx, 31, 0x1DC9C0u);
    ctx->pc = 0x1DC9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC9B8u;
            // 0x1dc9bc: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC9C0u; }
        if (ctx->pc != 0x1DC9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC9C0u; }
        if (ctx->pc != 0x1DC9C0u) { return; }
    }
    ctx->pc = 0x1DC9C0u;
    // 0x1dc9c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dc9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc9c4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1dc9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1dc9c8: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc9cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dc9ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dc9d0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DC9D0u;
    SET_GPR_U32(ctx, 31, 0x1DC9D8u);
    ctx->pc = 0x1DC9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC9D0u;
            // 0x1dc9d4: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC9D8u; }
        if (ctx->pc != 0x1DC9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC9D8u; }
        if (ctx->pc != 0x1DC9D8u) { return; }
    }
    ctx->pc = 0x1DC9D8u;
    // 0x1dc9d8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dc9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc9dc: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x1dc9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x1dc9e0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc9e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dc9e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dc9e8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DC9E8u;
    SET_GPR_U32(ctx, 31, 0x1DC9F0u);
    ctx->pc = 0x1DC9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC9E8u;
            // 0x1dc9ec: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC9F0u; }
        if (ctx->pc != 0x1DC9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC9F0u; }
        if (ctx->pc != 0x1DC9F0u) { return; }
    }
    ctx->pc = 0x1DC9F0u;
    // 0x1dc9f0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dc9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc9f4: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x1dc9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x1dc9f8: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dc9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dc9fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dc9fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dca00: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DCA00u;
    SET_GPR_U32(ctx, 31, 0x1DCA08u);
    ctx->pc = 0x1DCA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCA00u;
            // 0x1dca04: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCA08u; }
        if (ctx->pc != 0x1DCA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCA08u; }
        if (ctx->pc != 0x1DCA08u) { return; }
    }
    ctx->pc = 0x1DCA08u;
    // 0x1dca08: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dca08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dca0c: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x1dca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x1dca10: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dca10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dca14: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dca14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dca18: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DCA18u;
    SET_GPR_U32(ctx, 31, 0x1DCA20u);
    ctx->pc = 0x1DCA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCA18u;
            // 0x1dca1c: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCA20u; }
        if (ctx->pc != 0x1DCA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCA20u; }
        if (ctx->pc != 0x1DCA20u) { return; }
    }
    ctx->pc = 0x1DCA20u;
    // 0x1dca20: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dca20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dca24: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1dca24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1dca28: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dca28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dca2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dca2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dca30: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DCA30u;
    SET_GPR_U32(ctx, 31, 0x1DCA38u);
    ctx->pc = 0x1DCA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCA30u;
            // 0x1dca34: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCA38u; }
        if (ctx->pc != 0x1DCA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCA38u; }
        if (ctx->pc != 0x1DCA38u) { return; }
    }
    ctx->pc = 0x1DCA38u;
    // 0x1dca38: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1DCA38u;
    {
        const bool branch_taken_0x1dca38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dca38) {
            ctx->pc = 0x1DCAD0u;
            goto label_1dcad0;
        }
    }
    ctx->pc = 0x1DCA40u;
label_1dca40:
    // 0x1dca40: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dca40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dca44: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dca44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dca48: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x1dca48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x1dca4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dca4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dca50: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DCA50u;
    SET_GPR_U32(ctx, 31, 0x1DCA58u);
    ctx->pc = 0x1DCA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCA50u;
            // 0x1dca54: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCA58u; }
        if (ctx->pc != 0x1DCA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCA58u; }
        if (ctx->pc != 0x1DCA58u) { return; }
    }
    ctx->pc = 0x1DCA58u;
    // 0x1dca58: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dca58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dca5c: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x1dca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x1dca60: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dca60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dca64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dca64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dca68: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DCA68u;
    SET_GPR_U32(ctx, 31, 0x1DCA70u);
    ctx->pc = 0x1DCA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCA68u;
            // 0x1dca6c: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCA70u; }
        if (ctx->pc != 0x1DCA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCA70u; }
        if (ctx->pc != 0x1DCA70u) { return; }
    }
    ctx->pc = 0x1DCA70u;
    // 0x1dca70: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dca70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dca74: 0x3c02c352  lui         $v0, 0xC352
    ctx->pc = 0x1dca74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50002 << 16));
    // 0x1dca78: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dca78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dca7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dca7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dca80: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DCA80u;
    SET_GPR_U32(ctx, 31, 0x1DCA88u);
    ctx->pc = 0x1DCA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCA80u;
            // 0x1dca84: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCA88u; }
        if (ctx->pc != 0x1DCA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCA88u; }
        if (ctx->pc != 0x1DCA88u) { return; }
    }
    ctx->pc = 0x1DCA88u;
    // 0x1dca88: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dca88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dca8c: 0x3c024352  lui         $v0, 0x4352
    ctx->pc = 0x1dca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17234 << 16));
    // 0x1dca90: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dca90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dca94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dca94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dca98: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DCA98u;
    SET_GPR_U32(ctx, 31, 0x1DCAA0u);
    ctx->pc = 0x1DCA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCA98u;
            // 0x1dca9c: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCAA0u; }
        if (ctx->pc != 0x1DCAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCAA0u; }
        if (ctx->pc != 0x1DCAA0u) { return; }
    }
    ctx->pc = 0x1DCAA0u;
    // 0x1dcaa0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dcaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dcaa4: 0x3c02c387  lui         $v0, 0xC387
    ctx->pc = 0x1dcaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50055 << 16));
    // 0x1dcaa8: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dcaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dcaac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dcaacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dcab0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DCAB0u;
    SET_GPR_U32(ctx, 31, 0x1DCAB8u);
    ctx->pc = 0x1DCAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCAB0u;
            // 0x1dcab4: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCAB8u; }
        if (ctx->pc != 0x1DCAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCAB8u; }
        if (ctx->pc != 0x1DCAB8u) { return; }
    }
    ctx->pc = 0x1DCAB8u;
    // 0x1dcab8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dcab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dcabc: 0x3c024387  lui         $v0, 0x4387
    ctx->pc = 0x1dcabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17287 << 16));
    // 0x1dcac0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dcac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dcac4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dcac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dcac8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DCAC8u;
    SET_GPR_U32(ctx, 31, 0x1DCAD0u);
    ctx->pc = 0x1DCACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCAC8u;
            // 0x1dcacc: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCAD0u; }
        if (ctx->pc != 0x1DCAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCAD0u; }
        if (ctx->pc != 0x1DCAD0u) { return; }
    }
    ctx->pc = 0x1DCAD0u;
label_1dcad0:
    // 0x1dcad0: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x1dcad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1dcad4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dcad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dcad8: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x1dcad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x1dcadc: 0x0  nop
    ctx->pc = 0x1dcadcu;
    // NOP
label_1dcae0:
    // 0x1dcae0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1dcae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1dcae4: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1dcae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1dcae8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1dcae8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1dcaec: 0x0  nop
    ctx->pc = 0x1dcaecu;
    // NOP
    // 0x1dcaf0: 0x0  nop
    ctx->pc = 0x1dcaf0u;
    // NOP
    // 0x1dcaf4: 0x1010  mfhi        $v0
    ctx->pc = 0x1dcaf4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1dcaf8: 0x144008c5  bnez        $v0, . + 4 + (0x8C5 << 2)
    ctx->pc = 0x1DCAF8u;
    {
        const bool branch_taken_0x1dcaf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcaf8) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DCB00u;
    // 0x1dcb00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1dcb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dcb04: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1dcb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcb08: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1dcb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcb0c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1dcb0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1dcb10: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1dcb10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1dcb14: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1dcb14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1dcb18: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1dcb18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1dcb1c: 0xc073d68  jal         func_1CF5A0
    ctx->pc = 0x1DCB1Cu;
    SET_GPR_U32(ctx, 31, 0x1DCB24u);
    ctx->pc = 0x1DCB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCB1Cu;
            // 0x1dcb20: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CF5A0u;
    if (runtime->hasFunction(0x1CF5A0u)) {
        auto targetFn = runtime->lookupFunction(0x1CF5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCB24u; }
        if (ctx->pc != 0x1DCB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_03_0x1cf5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCB24u; }
        if (ctx->pc != 0x1DCB24u) { return; }
    }
    ctx->pc = 0x1DCB24u;
    // 0x1dcb24: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1dcb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dcb28: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1dcb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcb2c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1dcb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcb30: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1dcb30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1dcb34: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1dcb34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1dcb38: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1dcb38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1dcb3c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1dcb3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1dcb40: 0xc073d68  jal         func_1CF5A0
    ctx->pc = 0x1DCB40u;
    SET_GPR_U32(ctx, 31, 0x1DCB48u);
    ctx->pc = 0x1DCB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCB40u;
            // 0x1dcb44: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CF5A0u;
    if (runtime->hasFunction(0x1CF5A0u)) {
        auto targetFn = runtime->lookupFunction(0x1CF5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCB48u; }
        if (ctx->pc != 0x1DCB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_03_0x1cf5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCB48u; }
        if (ctx->pc != 0x1DCB48u) { return; }
    }
    ctx->pc = 0x1DCB48u;
    // 0x1dcb48: 0x100008b1  b           . + 4 + (0x8B1 << 2)
    ctx->pc = 0x1DCB48u;
    {
        const bool branch_taken_0x1dcb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcb48) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DCB50u;
label_1dcb50:
    // 0x1dcb50: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1dcb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1dcb54: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1dcb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1dcb58: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1dcb58u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1dcb5c: 0x0  nop
    ctx->pc = 0x1dcb5cu;
    // NOP
    // 0x1dcb60: 0x0  nop
    ctx->pc = 0x1dcb60u;
    // NOP
    // 0x1dcb64: 0x1010  mfhi        $v0
    ctx->pc = 0x1dcb64u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1dcb68: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x1DCB68u;
    {
        const bool branch_taken_0x1dcb68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcb68) {
            ctx->pc = 0x1DCCE0u;
            goto label_1dcce0;
        }
    }
    ctx->pc = 0x1DCB70u;
    // 0x1dcb70: 0x8e030124  lw          $v1, 0x124($s0)
    ctx->pc = 0x1dcb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1dcb74: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCB74u;
    {
        const bool branch_taken_0x1dcb74 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DCB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCB74u;
            // 0x1dcb78: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcb74) {
            ctx->pc = 0x1DCB88u;
            goto label_1dcb88;
        }
    }
    ctx->pc = 0x1DCB7Cu;
    // 0x1dcb7c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DCB7Cu;
    {
        const bool branch_taken_0x1dcb7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcb7c) {
            ctx->pc = 0x1DCB88u;
            goto label_1dcb88;
        }
    }
    ctx->pc = 0x1DCB84u;
    // 0x1dcb84: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1dcb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1dcb88:
    // 0x1dcb88: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1DCB88u;
    {
        const bool branch_taken_0x1dcb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcb88) {
            ctx->pc = 0x1DCC40u;
            goto label_1dcc40;
        }
    }
    ctx->pc = 0x1DCB90u;
    // 0x1dcb90: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dcb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dcb94: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dcb94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dcb98: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dcb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dcb9c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DCB9Cu;
    SET_GPR_U32(ctx, 31, 0x1DCBA4u);
    ctx->pc = 0x1DCBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCB9Cu;
            // 0x1dcba0: 0x2445003c  addiu       $a1, $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCBA4u; }
        if (ctx->pc != 0x1DCBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCBA4u; }
        if (ctx->pc != 0x1DCBA4u) { return; }
    }
    ctx->pc = 0x1DCBA4u;
    // 0x1dcba4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dcba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dcba8: 0x3c02c334  lui         $v0, 0xC334
    ctx->pc = 0x1dcba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49972 << 16));
    // 0x1dcbac: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dcbacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dcbb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dcbb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dcbb4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DCBB4u;
    SET_GPR_U32(ctx, 31, 0x1DCBBCu);
    ctx->pc = 0x1DCBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCBB4u;
            // 0x1dcbb8: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCBBCu; }
        if (ctx->pc != 0x1DCBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCBBCu; }
        if (ctx->pc != 0x1DCBBCu) { return; }
    }
    ctx->pc = 0x1DCBBCu;
    // 0x1dcbbc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dcbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dcbc0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1dcbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1dcbc4: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dcbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dcbc8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dcbc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dcbcc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DCBCCu;
    SET_GPR_U32(ctx, 31, 0x1DCBD4u);
    ctx->pc = 0x1DCBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCBCCu;
            // 0x1dcbd0: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCBD4u; }
        if (ctx->pc != 0x1DCBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCBD4u; }
        if (ctx->pc != 0x1DCBD4u) { return; }
    }
    ctx->pc = 0x1DCBD4u;
    // 0x1dcbd4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dcbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dcbd8: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x1dcbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x1dcbdc: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dcbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dcbe0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dcbe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dcbe4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DCBE4u;
    SET_GPR_U32(ctx, 31, 0x1DCBECu);
    ctx->pc = 0x1DCBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCBE4u;
            // 0x1dcbe8: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCBECu; }
        if (ctx->pc != 0x1DCBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCBECu; }
        if (ctx->pc != 0x1DCBECu) { return; }
    }
    ctx->pc = 0x1DCBECu;
    // 0x1dcbec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dcbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dcbf0: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x1dcbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x1dcbf4: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dcbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dcbf8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dcbf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dcbfc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DCBFCu;
    SET_GPR_U32(ctx, 31, 0x1DCC04u);
    ctx->pc = 0x1DCC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCBFCu;
            // 0x1dcc00: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCC04u; }
        if (ctx->pc != 0x1DCC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCC04u; }
        if (ctx->pc != 0x1DCC04u) { return; }
    }
    ctx->pc = 0x1DCC04u;
    // 0x1dcc04: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dcc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dcc08: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x1dcc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x1dcc0c: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dcc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dcc10: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dcc10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dcc14: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DCC14u;
    SET_GPR_U32(ctx, 31, 0x1DCC1Cu);
    ctx->pc = 0x1DCC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCC14u;
            // 0x1dcc18: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCC1Cu; }
        if (ctx->pc != 0x1DCC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCC1Cu; }
        if (ctx->pc != 0x1DCC1Cu) { return; }
    }
    ctx->pc = 0x1DCC1Cu;
    // 0x1dcc1c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dcc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dcc20: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1dcc20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1dcc24: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dcc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dcc28: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dcc28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dcc2c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DCC2Cu;
    SET_GPR_U32(ctx, 31, 0x1DCC34u);
    ctx->pc = 0x1DCC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCC2Cu;
            // 0x1dcc30: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCC34u; }
        if (ctx->pc != 0x1DCC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCC34u; }
        if (ctx->pc != 0x1DCC34u) { return; }
    }
    ctx->pc = 0x1DCC34u;
    // 0x1dcc34: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1DCC34u;
    {
        const bool branch_taken_0x1dcc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcc34) {
            ctx->pc = 0x1DCCD0u;
            goto label_1dccd0;
        }
    }
    ctx->pc = 0x1DCC3Cu;
    // 0x1dcc3c: 0x0  nop
    ctx->pc = 0x1dcc3cu;
    // NOP
label_1dcc40:
    // 0x1dcc40: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dcc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dcc44: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dcc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dcc48: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x1dcc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x1dcc4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dcc4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dcc50: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DCC50u;
    SET_GPR_U32(ctx, 31, 0x1DCC58u);
    ctx->pc = 0x1DCC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCC50u;
            // 0x1dcc54: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCC58u; }
        if (ctx->pc != 0x1DCC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCC58u; }
        if (ctx->pc != 0x1DCC58u) { return; }
    }
    ctx->pc = 0x1DCC58u;
    // 0x1dcc58: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dcc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dcc5c: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x1dcc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x1dcc60: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dcc60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dcc64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dcc64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dcc68: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DCC68u;
    SET_GPR_U32(ctx, 31, 0x1DCC70u);
    ctx->pc = 0x1DCC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCC68u;
            // 0x1dcc6c: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCC70u; }
        if (ctx->pc != 0x1DCC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCC70u; }
        if (ctx->pc != 0x1DCC70u) { return; }
    }
    ctx->pc = 0x1DCC70u;
    // 0x1dcc70: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dcc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dcc74: 0x3c02c352  lui         $v0, 0xC352
    ctx->pc = 0x1dcc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50002 << 16));
    // 0x1dcc78: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dcc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dcc7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dcc7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dcc80: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DCC80u;
    SET_GPR_U32(ctx, 31, 0x1DCC88u);
    ctx->pc = 0x1DCC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCC80u;
            // 0x1dcc84: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCC88u; }
        if (ctx->pc != 0x1DCC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCC88u; }
        if (ctx->pc != 0x1DCC88u) { return; }
    }
    ctx->pc = 0x1DCC88u;
    // 0x1dcc88: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dcc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dcc8c: 0x3c024352  lui         $v0, 0x4352
    ctx->pc = 0x1dcc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17234 << 16));
    // 0x1dcc90: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dcc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dcc94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dcc94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dcc98: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DCC98u;
    SET_GPR_U32(ctx, 31, 0x1DCCA0u);
    ctx->pc = 0x1DCC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCC98u;
            // 0x1dcc9c: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCCA0u; }
        if (ctx->pc != 0x1DCCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCCA0u; }
        if (ctx->pc != 0x1DCCA0u) { return; }
    }
    ctx->pc = 0x1DCCA0u;
    // 0x1dcca0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dcca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dcca4: 0x3c02c387  lui         $v0, 0xC387
    ctx->pc = 0x1dcca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50055 << 16));
    // 0x1dcca8: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dcca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dccac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dccacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dccb0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DCCB0u;
    SET_GPR_U32(ctx, 31, 0x1DCCB8u);
    ctx->pc = 0x1DCCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCCB0u;
            // 0x1dccb4: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCCB8u; }
        if (ctx->pc != 0x1DCCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCCB8u; }
        if (ctx->pc != 0x1DCCB8u) { return; }
    }
    ctx->pc = 0x1DCCB8u;
    // 0x1dccb8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dccb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dccbc: 0x3c024387  lui         $v0, 0x4387
    ctx->pc = 0x1dccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17287 << 16));
    // 0x1dccc0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dccc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dccc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dccc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dccc8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DCCC8u;
    SET_GPR_U32(ctx, 31, 0x1DCCD0u);
    ctx->pc = 0x1DCCCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCCC8u;
            // 0x1dcccc: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCCD0u; }
        if (ctx->pc != 0x1DCCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCCD0u; }
        if (ctx->pc != 0x1DCCD0u) { return; }
    }
    ctx->pc = 0x1DCCD0u;
label_1dccd0:
    // 0x1dccd0: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x1dccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1dccd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dccd8: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x1dccd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x1dccdc: 0x0  nop
    ctx->pc = 0x1dccdcu;
    // NOP
label_1dcce0:
    // 0x1dcce0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1dcce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1dcce4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1dcce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1dcce8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1dcce8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1dccec: 0x0  nop
    ctx->pc = 0x1dccecu;
    // NOP
    // 0x1dccf0: 0x0  nop
    ctx->pc = 0x1dccf0u;
    // NOP
    // 0x1dccf4: 0x1010  mfhi        $v0
    ctx->pc = 0x1dccf4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1dccf8: 0x14400845  bnez        $v0, . + 4 + (0x845 << 2)
    ctx->pc = 0x1DCCF8u;
    {
        const bool branch_taken_0x1dccf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dccf8) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DCD00u;
    // 0x1dcd00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1dcd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dcd04: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1dcd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcd08: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1dcd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcd0c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1dcd0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1dcd10: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1dcd10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1dcd14: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1dcd14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1dcd18: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1dcd18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1dcd1c: 0xc073d68  jal         func_1CF5A0
    ctx->pc = 0x1DCD1Cu;
    SET_GPR_U32(ctx, 31, 0x1DCD24u);
    ctx->pc = 0x1DCD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCD1Cu;
            // 0x1dcd20: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CF5A0u;
    if (runtime->hasFunction(0x1CF5A0u)) {
        auto targetFn = runtime->lookupFunction(0x1CF5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCD24u; }
        if (ctx->pc != 0x1DCD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_03_0x1cf5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCD24u; }
        if (ctx->pc != 0x1DCD24u) { return; }
    }
    ctx->pc = 0x1DCD24u;
    // 0x1dcd24: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1dcd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dcd28: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1dcd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcd2c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1dcd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcd30: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1dcd30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1dcd34: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1dcd34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1dcd38: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1dcd38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1dcd3c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1dcd3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1dcd40: 0xc073d68  jal         func_1CF5A0
    ctx->pc = 0x1DCD40u;
    SET_GPR_U32(ctx, 31, 0x1DCD48u);
    ctx->pc = 0x1DCD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCD40u;
            // 0x1dcd44: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CF5A0u;
    if (runtime->hasFunction(0x1CF5A0u)) {
        auto targetFn = runtime->lookupFunction(0x1CF5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCD48u; }
        if (ctx->pc != 0x1DCD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_03_0x1cf5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCD48u; }
        if (ctx->pc != 0x1DCD48u) { return; }
    }
    ctx->pc = 0x1DCD48u;
    // 0x1dcd48: 0x10000831  b           . + 4 + (0x831 << 2)
    ctx->pc = 0x1DCD48u;
    {
        const bool branch_taken_0x1dcd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcd48) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DCD50u;
label_1dcd50:
    // 0x1dcd50: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1dcd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dcd54: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1dcd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1dcd58: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1dcd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dcd5c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1dcd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1dcd60: 0xc077de0  jal         func_1DF780
    ctx->pc = 0x1DCD60u;
    SET_GPR_U32(ctx, 31, 0x1DCD68u);
    ctx->pc = 0x1DCD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCD60u;
            // 0x1dcd64: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF780u;
    if (runtime->hasFunction(0x1DF780u)) {
        auto targetFn = runtime->lookupFunction(0x1DF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCD68u; }
        if (ctx->pc != 0x1DCD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1df780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCD68u; }
        if (ctx->pc != 0x1DCD68u) { return; }
    }
    ctx->pc = 0x1DCD68u;
    // 0x1dcd68: 0xc065d00  jal         func_197400
    ctx->pc = 0x1DCD68u;
    SET_GPR_U32(ctx, 31, 0x1DCD70u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCD70u; }
        if (ctx->pc != 0x1DCD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCD70u; }
        if (ctx->pc != 0x1DCD70u) { return; }
    }
    ctx->pc = 0x1DCD70u;
    // 0x1dcd70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1dcd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dcd74: 0x144300f6  bne         $v0, $v1, . + 4 + (0xF6 << 2)
    ctx->pc = 0x1DCD74u;
    {
        const bool branch_taken_0x1dcd74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dcd74) {
            ctx->pc = 0x1DD150u;
            goto label_1dd150;
        }
    }
    ctx->pc = 0x1DCD7Cu;
    // 0x1dcd7c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1dcd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1dcd80: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1dcd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1dcd84: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1dcd84u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1dcd88: 0x0  nop
    ctx->pc = 0x1dcd88u;
    // NOP
    // 0x1dcd8c: 0x0  nop
    ctx->pc = 0x1dcd8cu;
    // NOP
    // 0x1dcd90: 0x1010  mfhi        $v0
    ctx->pc = 0x1dcd90u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1dcd94: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1DCD94u;
    {
        const bool branch_taken_0x1dcd94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcd94) {
            ctx->pc = 0x1DCE40u;
            goto label_1dce40;
        }
    }
    ctx->pc = 0x1DCD9Cu;
    // 0x1dcd9c: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dcd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dcda0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dcda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dcda4: 0x2464ff88  addiu       $a0, $v1, -0x78
    ctx->pc = 0x1dcda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967176));
    // 0x1dcda8: 0xc06560c  jal         func_195830
    ctx->pc = 0x1DCDA8u;
    SET_GPR_U32(ctx, 31, 0x1DCDB0u);
    ctx->pc = 0x1DCDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCDA8u;
            // 0x1dcdac: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCDB0u; }
        if (ctx->pc != 0x1DCDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCDB0u; }
        if (ctx->pc != 0x1DCDB0u) { return; }
    }
    ctx->pc = 0x1DCDB0u;
    // 0x1dcdb0: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dcdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dcdb4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dcdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dcdb8: 0x2464ff79  addiu       $a0, $v1, -0x87
    ctx->pc = 0x1dcdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967161));
    // 0x1dcdbc: 0xc06560c  jal         func_195830
    ctx->pc = 0x1DCDBCu;
    SET_GPR_U32(ctx, 31, 0x1DCDC4u);
    ctx->pc = 0x1DCDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCDBCu;
            // 0x1dcdc0: 0x24450032  addiu       $a1, $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCDC4u; }
        if (ctx->pc != 0x1DCDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCDC4u; }
        if (ctx->pc != 0x1DCDC4u) { return; }
    }
    ctx->pc = 0x1DCDC4u;
    // 0x1dcdc4: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dcdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dcdc8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dcdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dcdcc: 0x2464ff8d  addiu       $a0, $v1, -0x73
    ctx->pc = 0x1dcdccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967181));
    // 0x1dcdd0: 0xc06560c  jal         func_195830
    ctx->pc = 0x1DCDD0u;
    SET_GPR_U32(ctx, 31, 0x1DCDD8u);
    ctx->pc = 0x1DCDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCDD0u;
            // 0x1dcdd4: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCDD8u; }
        if (ctx->pc != 0x1DCDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCDD8u; }
        if (ctx->pc != 0x1DCDD8u) { return; }
    }
    ctx->pc = 0x1DCDD8u;
    // 0x1dcdd8: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dcdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dcddc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dcddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dcde0: 0x2464ff7e  addiu       $a0, $v1, -0x82
    ctx->pc = 0x1dcde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967166));
    // 0x1dcde4: 0xc06560c  jal         func_195830
    ctx->pc = 0x1DCDE4u;
    SET_GPR_U32(ctx, 31, 0x1DCDECu);
    ctx->pc = 0x1DCDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCDE4u;
            // 0x1dcde8: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCDECu; }
        if (ctx->pc != 0x1DCDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCDECu; }
        if (ctx->pc != 0x1DCDECu) { return; }
    }
    ctx->pc = 0x1DCDECu;
    // 0x1dcdec: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dcdecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dcdf0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dcdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dcdf4: 0x24640078  addiu       $a0, $v1, 0x78
    ctx->pc = 0x1dcdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x1dcdf8: 0xc06560c  jal         func_195830
    ctx->pc = 0x1DCDF8u;
    SET_GPR_U32(ctx, 31, 0x1DCE00u);
    ctx->pc = 0x1DCDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCDF8u;
            // 0x1dcdfc: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCE00u; }
        if (ctx->pc != 0x1DCE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCE00u; }
        if (ctx->pc != 0x1DCE00u) { return; }
    }
    ctx->pc = 0x1DCE00u;
    // 0x1dce00: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dce00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dce04: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dce04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dce08: 0x24640087  addiu       $a0, $v1, 0x87
    ctx->pc = 0x1dce08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 135));
    // 0x1dce0c: 0xc06560c  jal         func_195830
    ctx->pc = 0x1DCE0Cu;
    SET_GPR_U32(ctx, 31, 0x1DCE14u);
    ctx->pc = 0x1DCE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCE0Cu;
            // 0x1dce10: 0x24450032  addiu       $a1, $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCE14u; }
        if (ctx->pc != 0x1DCE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCE14u; }
        if (ctx->pc != 0x1DCE14u) { return; }
    }
    ctx->pc = 0x1DCE14u;
    // 0x1dce14: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dce14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dce18: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dce18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dce1c: 0x24640073  addiu       $a0, $v1, 0x73
    ctx->pc = 0x1dce1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 115));
    // 0x1dce20: 0xc06560c  jal         func_195830
    ctx->pc = 0x1DCE20u;
    SET_GPR_U32(ctx, 31, 0x1DCE28u);
    ctx->pc = 0x1DCE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCE20u;
            // 0x1dce24: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCE28u; }
        if (ctx->pc != 0x1DCE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCE28u; }
        if (ctx->pc != 0x1DCE28u) { return; }
    }
    ctx->pc = 0x1DCE28u;
    // 0x1dce28: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dce28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dce2c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dce30: 0x24640082  addiu       $a0, $v1, 0x82
    ctx->pc = 0x1dce30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 130));
    // 0x1dce34: 0xc06560c  jal         func_195830
    ctx->pc = 0x1DCE34u;
    SET_GPR_U32(ctx, 31, 0x1DCE3Cu);
    ctx->pc = 0x1DCE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCE34u;
            // 0x1dce38: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCE3Cu; }
        if (ctx->pc != 0x1DCE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCE3Cu; }
        if (ctx->pc != 0x1DCE3Cu) { return; }
    }
    ctx->pc = 0x1DCE3Cu;
    // 0x1dce3c: 0x0  nop
    ctx->pc = 0x1dce3cu;
    // NOP
label_1dce40:
    // 0x1dce40: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1dce40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1dce44: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCE44u;
    {
        const bool branch_taken_0x1dce44 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DCE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCE44u;
            // 0x1dce48: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dce44) {
            ctx->pc = 0x1DCE58u;
            goto label_1dce58;
        }
    }
    ctx->pc = 0x1DCE4Cu;
    // 0x1dce4c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DCE4Cu;
    {
        const bool branch_taken_0x1dce4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dce4c) {
            ctx->pc = 0x1DCE58u;
            goto label_1dce58;
        }
    }
    ctx->pc = 0x1DCE54u;
    // 0x1dce54: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1dce54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_1dce58:
    // 0x1dce58: 0x14400095  bnez        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x1DCE58u;
    {
        const bool branch_taken_0x1dce58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dce58) {
            ctx->pc = 0x1DD0B0u;
            goto label_1dd0b0;
        }
    }
    ctx->pc = 0x1DCE60u;
    // 0x1dce60: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1dce60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dce64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dce64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dce68: 0x0  nop
    ctx->pc = 0x1dce68u;
    // NOP
    // 0x1dce6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dce6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dce70: 0x4501008f  bc1t        . + 4 + (0x8F << 2)
    ctx->pc = 0x1DCE70u;
    {
        const bool branch_taken_0x1dce70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DCE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCE70u;
            // 0x1dce74: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dce70) {
            ctx->pc = 0x1DD0B0u;
            goto label_1dd0b0;
        }
    }
    ctx->pc = 0x1DCE78u;
    // 0x1dce78: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1dce78u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1dce7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dce7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dce80: 0x0  nop
    ctx->pc = 0x1dce80u;
    // NOP
    // 0x1dce84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dce84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dce88: 0x45000089  bc1f        . + 4 + (0x89 << 2)
    ctx->pc = 0x1DCE88u;
    {
        const bool branch_taken_0x1dce88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dce88) {
            ctx->pc = 0x1DD0B0u;
            goto label_1dd0b0;
        }
    }
    ctx->pc = 0x1DCE90u;
    // 0x1dce90: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1dce90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dce94: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dce94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dce98: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1dce98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1dce9c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1dce9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1dcea0: 0x2442004b  addiu       $v0, $v0, 0x4B
    ctx->pc = 0x1dcea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
    // 0x1dcea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dcea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dcea8: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DCEA8u;
    SET_GPR_U32(ctx, 31, 0x1DCEB0u);
    ctx->pc = 0x1DCEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCEA8u;
            // 0x1dceac: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCEB0u; }
        if (ctx->pc != 0x1DCEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCEB0u; }
        if (ctx->pc != 0x1DCEB0u) { return; }
    }
    ctx->pc = 0x1DCEB0u;
    // 0x1dceb0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DCEB0u;
    SET_GPR_U32(ctx, 31, 0x1DCEB8u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCEB8u; }
        if (ctx->pc != 0x1DCEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCEB8u; }
        if (ctx->pc != 0x1DCEB8u) { return; }
    }
    ctx->pc = 0x1DCEB8u;
    // 0x1dceb8: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dcebc: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dcebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dcec0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dcec0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dcec4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dcec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dcec8: 0x0  nop
    ctx->pc = 0x1dcec8u;
    // NOP
    // 0x1dcecc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dceccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dced0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DCED0u;
    SET_GPR_U32(ctx, 31, 0x1DCED8u);
    ctx->pc = 0x1DCED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCED0u;
            // 0x1dced4: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCED8u; }
        if (ctx->pc != 0x1DCED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCED8u; }
        if (ctx->pc != 0x1DCED8u) { return; }
    }
    ctx->pc = 0x1DCED8u;
    // 0x1dced8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dced8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dcedc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dcedcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dcee0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dcee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dcee4: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dcee4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dcee8: 0xc065254  jal         func_194950
    ctx->pc = 0x1DCEE8u;
    SET_GPR_U32(ctx, 31, 0x1DCEF0u);
    ctx->pc = 0x1DCEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCEE8u;
            // 0x1dceec: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCEF0u; }
        if (ctx->pc != 0x1DCEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCEF0u; }
        if (ctx->pc != 0x1DCEF0u) { return; }
    }
    ctx->pc = 0x1DCEF0u;
    // 0x1dcef0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DCEF0u;
    SET_GPR_U32(ctx, 31, 0x1DCEF8u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCEF8u; }
        if (ctx->pc != 0x1DCEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCEF8u; }
        if (ctx->pc != 0x1DCEF8u) { return; }
    }
    ctx->pc = 0x1DCEF8u;
    // 0x1dcef8: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dcef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dcefc: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dcefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dcf00: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dcf00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dcf04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dcf04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dcf08: 0x0  nop
    ctx->pc = 0x1dcf08u;
    // NOP
    // 0x1dcf0c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dcf0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dcf10: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DCF10u;
    SET_GPR_U32(ctx, 31, 0x1DCF18u);
    ctx->pc = 0x1DCF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCF10u;
            // 0x1dcf14: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF18u; }
        if (ctx->pc != 0x1DCF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF18u; }
        if (ctx->pc != 0x1DCF18u) { return; }
    }
    ctx->pc = 0x1DCF18u;
    // 0x1dcf18: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dcf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dcf1c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dcf1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dcf20: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dcf20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dcf24: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dcf24u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dcf28: 0xc065254  jal         func_194950
    ctx->pc = 0x1DCF28u;
    SET_GPR_U32(ctx, 31, 0x1DCF30u);
    ctx->pc = 0x1DCF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCF28u;
            // 0x1dcf2c: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF30u; }
        if (ctx->pc != 0x1DCF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF30u; }
        if (ctx->pc != 0x1DCF30u) { return; }
    }
    ctx->pc = 0x1DCF30u;
    // 0x1dcf30: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DCF30u;
    SET_GPR_U32(ctx, 31, 0x1DCF38u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF38u; }
        if (ctx->pc != 0x1DCF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF38u; }
        if (ctx->pc != 0x1DCF38u) { return; }
    }
    ctx->pc = 0x1DCF38u;
    // 0x1dcf38: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dcf38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dcf3c: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dcf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dcf40: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dcf40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dcf44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dcf44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dcf48: 0x0  nop
    ctx->pc = 0x1dcf48u;
    // NOP
    // 0x1dcf4c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dcf4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dcf50: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DCF50u;
    SET_GPR_U32(ctx, 31, 0x1DCF58u);
    ctx->pc = 0x1DCF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCF50u;
            // 0x1dcf54: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF58u; }
        if (ctx->pc != 0x1DCF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF58u; }
        if (ctx->pc != 0x1DCF58u) { return; }
    }
    ctx->pc = 0x1DCF58u;
    // 0x1dcf58: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dcf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dcf5c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dcf5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dcf60: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dcf60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dcf64: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dcf64u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dcf68: 0xc065254  jal         func_194950
    ctx->pc = 0x1DCF68u;
    SET_GPR_U32(ctx, 31, 0x1DCF70u);
    ctx->pc = 0x1DCF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCF68u;
            // 0x1dcf6c: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF70u; }
        if (ctx->pc != 0x1DCF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF70u; }
        if (ctx->pc != 0x1DCF70u) { return; }
    }
    ctx->pc = 0x1DCF70u;
    // 0x1dcf70: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DCF70u;
    SET_GPR_U32(ctx, 31, 0x1DCF78u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF78u; }
        if (ctx->pc != 0x1DCF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF78u; }
        if (ctx->pc != 0x1DCF78u) { return; }
    }
    ctx->pc = 0x1DCF78u;
    // 0x1dcf78: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dcf78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dcf7c: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dcf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dcf80: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dcf80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dcf84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dcf84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dcf88: 0x0  nop
    ctx->pc = 0x1dcf88u;
    // NOP
    // 0x1dcf8c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dcf8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dcf90: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DCF90u;
    SET_GPR_U32(ctx, 31, 0x1DCF98u);
    ctx->pc = 0x1DCF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCF90u;
            // 0x1dcf94: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF98u; }
        if (ctx->pc != 0x1DCF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF98u; }
        if (ctx->pc != 0x1DCF98u) { return; }
    }
    ctx->pc = 0x1DCF98u;
    // 0x1dcf98: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dcf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dcf9c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dcf9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dcfa0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dcfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dcfa4: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dcfa4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dcfa8: 0xc065254  jal         func_194950
    ctx->pc = 0x1DCFA8u;
    SET_GPR_U32(ctx, 31, 0x1DCFB0u);
    ctx->pc = 0x1DCFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCFA8u;
            // 0x1dcfac: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCFB0u; }
        if (ctx->pc != 0x1DCFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCFB0u; }
        if (ctx->pc != 0x1DCFB0u) { return; }
    }
    ctx->pc = 0x1DCFB0u;
    // 0x1dcfb0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DCFB0u;
    SET_GPR_U32(ctx, 31, 0x1DCFB8u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCFB8u; }
        if (ctx->pc != 0x1DCFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCFB8u; }
        if (ctx->pc != 0x1DCFB8u) { return; }
    }
    ctx->pc = 0x1DCFB8u;
    // 0x1dcfb8: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dcfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dcfbc: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dcfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dcfc0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dcfc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dcfc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dcfc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dcfc8: 0x0  nop
    ctx->pc = 0x1dcfc8u;
    // NOP
    // 0x1dcfcc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dcfccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dcfd0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DCFD0u;
    SET_GPR_U32(ctx, 31, 0x1DCFD8u);
    ctx->pc = 0x1DCFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCFD0u;
            // 0x1dcfd4: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCFD8u; }
        if (ctx->pc != 0x1DCFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCFD8u; }
        if (ctx->pc != 0x1DCFD8u) { return; }
    }
    ctx->pc = 0x1DCFD8u;
    // 0x1dcfd8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dcfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dcfdc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dcfdcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dcfe0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dcfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dcfe4: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dcfe4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dcfe8: 0xc065254  jal         func_194950
    ctx->pc = 0x1DCFE8u;
    SET_GPR_U32(ctx, 31, 0x1DCFF0u);
    ctx->pc = 0x1DCFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCFE8u;
            // 0x1dcfec: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCFF0u; }
        if (ctx->pc != 0x1DCFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCFF0u; }
        if (ctx->pc != 0x1DCFF0u) { return; }
    }
    ctx->pc = 0x1DCFF0u;
    // 0x1dcff0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DCFF0u;
    SET_GPR_U32(ctx, 31, 0x1DCFF8u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCFF8u; }
        if (ctx->pc != 0x1DCFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCFF8u; }
        if (ctx->pc != 0x1DCFF8u) { return; }
    }
    ctx->pc = 0x1DCFF8u;
    // 0x1dcff8: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dcff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dcffc: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dcffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dd000: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dd000u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dd004: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dd004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd008: 0x0  nop
    ctx->pc = 0x1dd008u;
    // NOP
    // 0x1dd00c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dd00cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dd010: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DD010u;
    SET_GPR_U32(ctx, 31, 0x1DD018u);
    ctx->pc = 0x1DD014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD010u;
            // 0x1dd014: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD018u; }
        if (ctx->pc != 0x1DD018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD018u; }
        if (ctx->pc != 0x1DD018u) { return; }
    }
    ctx->pc = 0x1DD018u;
    // 0x1dd018: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd01c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dd01cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dd020: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dd020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd024: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dd024u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dd028: 0xc065254  jal         func_194950
    ctx->pc = 0x1DD028u;
    SET_GPR_U32(ctx, 31, 0x1DD030u);
    ctx->pc = 0x1DD02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD028u;
            // 0x1dd02c: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD030u; }
        if (ctx->pc != 0x1DD030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD030u; }
        if (ctx->pc != 0x1DD030u) { return; }
    }
    ctx->pc = 0x1DD030u;
    // 0x1dd030: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DD030u;
    SET_GPR_U32(ctx, 31, 0x1DD038u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD038u; }
        if (ctx->pc != 0x1DD038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD038u; }
        if (ctx->pc != 0x1DD038u) { return; }
    }
    ctx->pc = 0x1DD038u;
    // 0x1dd038: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dd038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dd03c: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dd03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dd040: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dd040u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dd044: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dd044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd048: 0x0  nop
    ctx->pc = 0x1dd048u;
    // NOP
    // 0x1dd04c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dd04cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dd050: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DD050u;
    SET_GPR_U32(ctx, 31, 0x1DD058u);
    ctx->pc = 0x1DD054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD050u;
            // 0x1dd054: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD058u; }
        if (ctx->pc != 0x1DD058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD058u; }
        if (ctx->pc != 0x1DD058u) { return; }
    }
    ctx->pc = 0x1DD058u;
    // 0x1dd058: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd05c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dd05cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dd060: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dd060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd064: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dd064u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dd068: 0xc065254  jal         func_194950
    ctx->pc = 0x1DD068u;
    SET_GPR_U32(ctx, 31, 0x1DD070u);
    ctx->pc = 0x1DD06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD068u;
            // 0x1dd06c: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD070u; }
        if (ctx->pc != 0x1DD070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD070u; }
        if (ctx->pc != 0x1DD070u) { return; }
    }
    ctx->pc = 0x1DD070u;
    // 0x1dd070: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DD070u;
    SET_GPR_U32(ctx, 31, 0x1DD078u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD078u; }
        if (ctx->pc != 0x1DD078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD078u; }
        if (ctx->pc != 0x1DD078u) { return; }
    }
    ctx->pc = 0x1DD078u;
    // 0x1dd078: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dd078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dd07c: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dd07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dd080: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dd080u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dd084: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dd084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd088: 0x0  nop
    ctx->pc = 0x1dd088u;
    // NOP
    // 0x1dd08c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dd08cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dd090: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DD090u;
    SET_GPR_U32(ctx, 31, 0x1DD098u);
    ctx->pc = 0x1DD094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD090u;
            // 0x1dd094: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD098u; }
        if (ctx->pc != 0x1DD098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD098u; }
        if (ctx->pc != 0x1DD098u) { return; }
    }
    ctx->pc = 0x1DD098u;
    // 0x1dd098: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd09c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dd09cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dd0a0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dd0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd0a4: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dd0a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dd0a8: 0xc065254  jal         func_194950
    ctx->pc = 0x1DD0A8u;
    SET_GPR_U32(ctx, 31, 0x1DD0B0u);
    ctx->pc = 0x1DD0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD0A8u;
            // 0x1dd0ac: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD0B0u; }
        if (ctx->pc != 0x1DD0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD0B0u; }
        if (ctx->pc != 0x1DD0B0u) { return; }
    }
    ctx->pc = 0x1DD0B0u;
label_1dd0b0:
    // 0x1dd0b0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1dd0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1dd0b4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD0B4u;
    {
        const bool branch_taken_0x1dd0b4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DD0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD0B4u;
            // 0x1dd0b8: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)7u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd0b4) {
            ctx->pc = 0x1DD0C8u;
            goto label_1dd0c8;
        }
    }
    ctx->pc = 0x1DD0BCu;
    // 0x1dd0bc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DD0BCu;
    {
        const bool branch_taken_0x1dd0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd0bc) {
            ctx->pc = 0x1DD0C8u;
            goto label_1dd0c8;
        }
    }
    ctx->pc = 0x1DD0C4u;
    // 0x1dd0c4: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1dd0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_1dd0c8:
    // 0x1dd0c8: 0x14400751  bnez        $v0, . + 4 + (0x751 << 2)
    ctx->pc = 0x1DD0C8u;
    {
        const bool branch_taken_0x1dd0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd0c8) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DD0D0u;
    // 0x1dd0d0: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1dd0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd0d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dd0d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd0d8: 0x0  nop
    ctx->pc = 0x1dd0d8u;
    // NOP
    // 0x1dd0dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dd0dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd0e0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1DD0E0u;
    {
        const bool branch_taken_0x1dd0e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD0E0u;
            // 0x1dd0e4: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd0e0) {
            ctx->pc = 0x1DD100u;
            goto label_1dd100;
        }
    }
    ctx->pc = 0x1DD0E8u;
    // 0x1dd0e8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1dd0e8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1dd0ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd0ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd0f0: 0x0  nop
    ctx->pc = 0x1dd0f0u;
    // NOP
    // 0x1dd0f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dd0f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd0f8: 0x45010745  bc1t        . + 4 + (0x745 << 2)
    ctx->pc = 0x1DD0F8u;
    {
        const bool branch_taken_0x1dd0f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd0f8) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DD100u;
label_1dd100:
    // 0x1dd100: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd104: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dd104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd108: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dd108u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dd10c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DD10Cu;
    SET_GPR_U32(ctx, 31, 0x1DD114u);
    ctx->pc = 0x1DD110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD10Cu;
            // 0x1dd110: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD114u; }
        if (ctx->pc != 0x1DD114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD114u; }
        if (ctx->pc != 0x1DD114u) { return; }
    }
    ctx->pc = 0x1DD114u;
    // 0x1dd114: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dd114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd118: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x1dd118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x1dd11c: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dd11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd120: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dd120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dd124: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DD124u;
    SET_GPR_U32(ctx, 31, 0x1DD12Cu);
    ctx->pc = 0x1DD128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD124u;
            // 0x1dd128: 0x2465004b  addiu       $a1, $v1, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD12Cu; }
        if (ctx->pc != 0x1DD12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD12Cu; }
        if (ctx->pc != 0x1DD12Cu) { return; }
    }
    ctx->pc = 0x1DD12Cu;
    // 0x1dd12c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dd12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd130: 0x3c02c170  lui         $v0, 0xC170
    ctx->pc = 0x1dd130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49520 << 16));
    // 0x1dd134: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dd134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd138: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dd138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dd13c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DD13Cu;
    SET_GPR_U32(ctx, 31, 0x1DD144u);
    ctx->pc = 0x1DD140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD13Cu;
            // 0x1dd140: 0x2465004b  addiu       $a1, $v1, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD144u; }
        if (ctx->pc != 0x1DD144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD144u; }
        if (ctx->pc != 0x1DD144u) { return; }
    }
    ctx->pc = 0x1DD144u;
    // 0x1dd144: 0x10000732  b           . + 4 + (0x732 << 2)
    ctx->pc = 0x1DD144u;
    {
        const bool branch_taken_0x1dd144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd144) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DD14Cu;
    // 0x1dd14c: 0x0  nop
    ctx->pc = 0x1dd14cu;
    // NOP
label_1dd150:
    // 0x1dd150: 0xc065d00  jal         func_197400
    ctx->pc = 0x1DD150u;
    SET_GPR_U32(ctx, 31, 0x1DD158u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD158u; }
        if (ctx->pc != 0x1DD158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD158u; }
        if (ctx->pc != 0x1DD158u) { return; }
    }
    ctx->pc = 0x1DD158u;
    // 0x1dd158: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dd158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd15c: 0x144300f6  bne         $v0, $v1, . + 4 + (0xF6 << 2)
    ctx->pc = 0x1DD15Cu;
    {
        const bool branch_taken_0x1dd15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dd15c) {
            ctx->pc = 0x1DD538u;
            goto label_1dd538;
        }
    }
    ctx->pc = 0x1DD164u;
    // 0x1dd164: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1dd164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1dd168: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1dd168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1dd16c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1dd16cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1dd170: 0x0  nop
    ctx->pc = 0x1dd170u;
    // NOP
    // 0x1dd174: 0x0  nop
    ctx->pc = 0x1dd174u;
    // NOP
    // 0x1dd178: 0x1010  mfhi        $v0
    ctx->pc = 0x1dd178u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1dd17c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1DD17Cu;
    {
        const bool branch_taken_0x1dd17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd17c) {
            ctx->pc = 0x1DD228u;
            goto label_1dd228;
        }
    }
    ctx->pc = 0x1DD184u;
    // 0x1dd184: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dd184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd188: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd18c: 0x2464ff88  addiu       $a0, $v1, -0x78
    ctx->pc = 0x1dd18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967176));
    // 0x1dd190: 0xc06560c  jal         func_195830
    ctx->pc = 0x1DD190u;
    SET_GPR_U32(ctx, 31, 0x1DD198u);
    ctx->pc = 0x1DD194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD190u;
            // 0x1dd194: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD198u; }
        if (ctx->pc != 0x1DD198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD198u; }
        if (ctx->pc != 0x1DD198u) { return; }
    }
    ctx->pc = 0x1DD198u;
    // 0x1dd198: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dd198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd19c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd1a0: 0x2464ff79  addiu       $a0, $v1, -0x87
    ctx->pc = 0x1dd1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967161));
    // 0x1dd1a4: 0xc06560c  jal         func_195830
    ctx->pc = 0x1DD1A4u;
    SET_GPR_U32(ctx, 31, 0x1DD1ACu);
    ctx->pc = 0x1DD1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD1A4u;
            // 0x1dd1a8: 0x24450032  addiu       $a1, $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD1ACu; }
        if (ctx->pc != 0x1DD1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD1ACu; }
        if (ctx->pc != 0x1DD1ACu) { return; }
    }
    ctx->pc = 0x1DD1ACu;
    // 0x1dd1ac: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dd1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd1b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd1b4: 0x2464ff8d  addiu       $a0, $v1, -0x73
    ctx->pc = 0x1dd1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967181));
    // 0x1dd1b8: 0xc06560c  jal         func_195830
    ctx->pc = 0x1DD1B8u;
    SET_GPR_U32(ctx, 31, 0x1DD1C0u);
    ctx->pc = 0x1DD1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD1B8u;
            // 0x1dd1bc: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD1C0u; }
        if (ctx->pc != 0x1DD1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD1C0u; }
        if (ctx->pc != 0x1DD1C0u) { return; }
    }
    ctx->pc = 0x1DD1C0u;
    // 0x1dd1c0: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dd1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd1c4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd1c8: 0x2464ff7e  addiu       $a0, $v1, -0x82
    ctx->pc = 0x1dd1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967166));
    // 0x1dd1cc: 0xc06560c  jal         func_195830
    ctx->pc = 0x1DD1CCu;
    SET_GPR_U32(ctx, 31, 0x1DD1D4u);
    ctx->pc = 0x1DD1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD1CCu;
            // 0x1dd1d0: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD1D4u; }
        if (ctx->pc != 0x1DD1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD1D4u; }
        if (ctx->pc != 0x1DD1D4u) { return; }
    }
    ctx->pc = 0x1DD1D4u;
    // 0x1dd1d4: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dd1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd1d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd1dc: 0x24640078  addiu       $a0, $v1, 0x78
    ctx->pc = 0x1dd1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x1dd1e0: 0xc06560c  jal         func_195830
    ctx->pc = 0x1DD1E0u;
    SET_GPR_U32(ctx, 31, 0x1DD1E8u);
    ctx->pc = 0x1DD1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD1E0u;
            // 0x1dd1e4: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD1E8u; }
        if (ctx->pc != 0x1DD1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD1E8u; }
        if (ctx->pc != 0x1DD1E8u) { return; }
    }
    ctx->pc = 0x1DD1E8u;
    // 0x1dd1e8: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dd1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd1ec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd1f0: 0x24640087  addiu       $a0, $v1, 0x87
    ctx->pc = 0x1dd1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 135));
    // 0x1dd1f4: 0xc06560c  jal         func_195830
    ctx->pc = 0x1DD1F4u;
    SET_GPR_U32(ctx, 31, 0x1DD1FCu);
    ctx->pc = 0x1DD1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD1F4u;
            // 0x1dd1f8: 0x24450032  addiu       $a1, $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD1FCu; }
        if (ctx->pc != 0x1DD1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD1FCu; }
        if (ctx->pc != 0x1DD1FCu) { return; }
    }
    ctx->pc = 0x1DD1FCu;
    // 0x1dd1fc: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dd1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd200: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd204: 0x24640073  addiu       $a0, $v1, 0x73
    ctx->pc = 0x1dd204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 115));
    // 0x1dd208: 0xc06560c  jal         func_195830
    ctx->pc = 0x1DD208u;
    SET_GPR_U32(ctx, 31, 0x1DD210u);
    ctx->pc = 0x1DD20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD208u;
            // 0x1dd20c: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD210u; }
        if (ctx->pc != 0x1DD210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD210u; }
        if (ctx->pc != 0x1DD210u) { return; }
    }
    ctx->pc = 0x1DD210u;
    // 0x1dd210: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dd210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd214: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd218: 0x24640082  addiu       $a0, $v1, 0x82
    ctx->pc = 0x1dd218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 130));
    // 0x1dd21c: 0xc06560c  jal         func_195830
    ctx->pc = 0x1DD21Cu;
    SET_GPR_U32(ctx, 31, 0x1DD224u);
    ctx->pc = 0x1DD220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD21Cu;
            // 0x1dd220: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD224u; }
        if (ctx->pc != 0x1DD224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD224u; }
        if (ctx->pc != 0x1DD224u) { return; }
    }
    ctx->pc = 0x1DD224u;
    // 0x1dd224: 0x0  nop
    ctx->pc = 0x1dd224u;
    // NOP
label_1dd228:
    // 0x1dd228: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1dd228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1dd22c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1dd22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1dd230: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1dd230u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1dd234: 0x0  nop
    ctx->pc = 0x1dd234u;
    // NOP
    // 0x1dd238: 0x0  nop
    ctx->pc = 0x1dd238u;
    // NOP
    // 0x1dd23c: 0x1010  mfhi        $v0
    ctx->pc = 0x1dd23cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1dd240: 0x14400095  bnez        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x1DD240u;
    {
        const bool branch_taken_0x1dd240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd240) {
            ctx->pc = 0x1DD498u;
            goto label_1dd498;
        }
    }
    ctx->pc = 0x1DD248u;
    // 0x1dd248: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1dd248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd24c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dd24cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd250: 0x0  nop
    ctx->pc = 0x1dd250u;
    // NOP
    // 0x1dd254: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dd254u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd258: 0x4501008f  bc1t        . + 4 + (0x8F << 2)
    ctx->pc = 0x1DD258u;
    {
        const bool branch_taken_0x1dd258 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD258u;
            // 0x1dd25c: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd258) {
            ctx->pc = 0x1DD498u;
            goto label_1dd498;
        }
    }
    ctx->pc = 0x1DD260u;
    // 0x1dd260: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1dd260u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1dd264: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd268: 0x0  nop
    ctx->pc = 0x1dd268u;
    // NOP
    // 0x1dd26c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dd26cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd270: 0x45000089  bc1f        . + 4 + (0x89 << 2)
    ctx->pc = 0x1DD270u;
    {
        const bool branch_taken_0x1dd270 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd270) {
            ctx->pc = 0x1DD498u;
            goto label_1dd498;
        }
    }
    ctx->pc = 0x1DD278u;
    // 0x1dd278: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1dd278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd27c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd280: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1dd280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1dd284: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1dd284u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1dd288: 0x2442004b  addiu       $v0, $v0, 0x4B
    ctx->pc = 0x1dd288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
    // 0x1dd28c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd28cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd290: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DD290u;
    SET_GPR_U32(ctx, 31, 0x1DD298u);
    ctx->pc = 0x1DD294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD290u;
            // 0x1dd294: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD298u; }
        if (ctx->pc != 0x1DD298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD298u; }
        if (ctx->pc != 0x1DD298u) { return; }
    }
    ctx->pc = 0x1DD298u;
    // 0x1dd298: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DD298u;
    SET_GPR_U32(ctx, 31, 0x1DD2A0u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD2A0u; }
        if (ctx->pc != 0x1DD2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD2A0u; }
        if (ctx->pc != 0x1DD2A0u) { return; }
    }
    ctx->pc = 0x1DD2A0u;
    // 0x1dd2a0: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dd2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dd2a4: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dd2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dd2a8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dd2a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dd2ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dd2acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd2b0: 0x0  nop
    ctx->pc = 0x1dd2b0u;
    // NOP
    // 0x1dd2b4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dd2b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dd2b8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DD2B8u;
    SET_GPR_U32(ctx, 31, 0x1DD2C0u);
    ctx->pc = 0x1DD2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD2B8u;
            // 0x1dd2bc: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD2C0u; }
        if (ctx->pc != 0x1DD2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD2C0u; }
        if (ctx->pc != 0x1DD2C0u) { return; }
    }
    ctx->pc = 0x1DD2C0u;
    // 0x1dd2c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd2c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dd2c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dd2c8: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dd2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd2cc: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dd2ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dd2d0: 0xc065254  jal         func_194950
    ctx->pc = 0x1DD2D0u;
    SET_GPR_U32(ctx, 31, 0x1DD2D8u);
    ctx->pc = 0x1DD2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD2D0u;
            // 0x1dd2d4: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD2D8u; }
        if (ctx->pc != 0x1DD2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD2D8u; }
        if (ctx->pc != 0x1DD2D8u) { return; }
    }
    ctx->pc = 0x1DD2D8u;
    // 0x1dd2d8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DD2D8u;
    SET_GPR_U32(ctx, 31, 0x1DD2E0u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD2E0u; }
        if (ctx->pc != 0x1DD2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD2E0u; }
        if (ctx->pc != 0x1DD2E0u) { return; }
    }
    ctx->pc = 0x1DD2E0u;
    // 0x1dd2e0: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dd2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dd2e4: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dd2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dd2e8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dd2e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dd2ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dd2ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd2f0: 0x0  nop
    ctx->pc = 0x1dd2f0u;
    // NOP
    // 0x1dd2f4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dd2f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dd2f8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DD2F8u;
    SET_GPR_U32(ctx, 31, 0x1DD300u);
    ctx->pc = 0x1DD2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD2F8u;
            // 0x1dd2fc: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD300u; }
        if (ctx->pc != 0x1DD300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD300u; }
        if (ctx->pc != 0x1DD300u) { return; }
    }
    ctx->pc = 0x1DD300u;
    // 0x1dd300: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd304: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dd304u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dd308: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dd308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd30c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dd30cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dd310: 0xc065254  jal         func_194950
    ctx->pc = 0x1DD310u;
    SET_GPR_U32(ctx, 31, 0x1DD318u);
    ctx->pc = 0x1DD314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD310u;
            // 0x1dd314: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD318u; }
        if (ctx->pc != 0x1DD318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD318u; }
        if (ctx->pc != 0x1DD318u) { return; }
    }
    ctx->pc = 0x1DD318u;
    // 0x1dd318: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DD318u;
    SET_GPR_U32(ctx, 31, 0x1DD320u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD320u; }
        if (ctx->pc != 0x1DD320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD320u; }
        if (ctx->pc != 0x1DD320u) { return; }
    }
    ctx->pc = 0x1DD320u;
    // 0x1dd320: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dd320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dd324: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dd324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dd328: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dd328u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dd32c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dd32cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd330: 0x0  nop
    ctx->pc = 0x1dd330u;
    // NOP
    // 0x1dd334: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dd334u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dd338: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DD338u;
    SET_GPR_U32(ctx, 31, 0x1DD340u);
    ctx->pc = 0x1DD33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD338u;
            // 0x1dd33c: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD340u; }
        if (ctx->pc != 0x1DD340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD340u; }
        if (ctx->pc != 0x1DD340u) { return; }
    }
    ctx->pc = 0x1DD340u;
    // 0x1dd340: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd344: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dd344u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dd348: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dd348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd34c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dd34cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dd350: 0xc065254  jal         func_194950
    ctx->pc = 0x1DD350u;
    SET_GPR_U32(ctx, 31, 0x1DD358u);
    ctx->pc = 0x1DD354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD350u;
            // 0x1dd354: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD358u; }
        if (ctx->pc != 0x1DD358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD358u; }
        if (ctx->pc != 0x1DD358u) { return; }
    }
    ctx->pc = 0x1DD358u;
    // 0x1dd358: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DD358u;
    SET_GPR_U32(ctx, 31, 0x1DD360u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD360u; }
        if (ctx->pc != 0x1DD360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD360u; }
        if (ctx->pc != 0x1DD360u) { return; }
    }
    ctx->pc = 0x1DD360u;
    // 0x1dd360: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dd360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dd364: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dd364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dd368: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dd368u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dd36c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dd36cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd370: 0x0  nop
    ctx->pc = 0x1dd370u;
    // NOP
    // 0x1dd374: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dd374u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dd378: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DD378u;
    SET_GPR_U32(ctx, 31, 0x1DD380u);
    ctx->pc = 0x1DD37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD378u;
            // 0x1dd37c: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD380u; }
        if (ctx->pc != 0x1DD380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD380u; }
        if (ctx->pc != 0x1DD380u) { return; }
    }
    ctx->pc = 0x1DD380u;
    // 0x1dd380: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd384: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dd384u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dd388: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dd388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd38c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dd38cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dd390: 0xc065254  jal         func_194950
    ctx->pc = 0x1DD390u;
    SET_GPR_U32(ctx, 31, 0x1DD398u);
    ctx->pc = 0x1DD394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD390u;
            // 0x1dd394: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD398u; }
        if (ctx->pc != 0x1DD398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD398u; }
        if (ctx->pc != 0x1DD398u) { return; }
    }
    ctx->pc = 0x1DD398u;
    // 0x1dd398: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DD398u;
    SET_GPR_U32(ctx, 31, 0x1DD3A0u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD3A0u; }
        if (ctx->pc != 0x1DD3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD3A0u; }
        if (ctx->pc != 0x1DD3A0u) { return; }
    }
    ctx->pc = 0x1DD3A0u;
    // 0x1dd3a0: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dd3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dd3a4: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dd3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dd3a8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dd3a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dd3ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dd3acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd3b0: 0x0  nop
    ctx->pc = 0x1dd3b0u;
    // NOP
    // 0x1dd3b4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dd3b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dd3b8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DD3B8u;
    SET_GPR_U32(ctx, 31, 0x1DD3C0u);
    ctx->pc = 0x1DD3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD3B8u;
            // 0x1dd3bc: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD3C0u; }
        if (ctx->pc != 0x1DD3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD3C0u; }
        if (ctx->pc != 0x1DD3C0u) { return; }
    }
    ctx->pc = 0x1DD3C0u;
    // 0x1dd3c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd3c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dd3c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dd3c8: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dd3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd3cc: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dd3ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dd3d0: 0xc065254  jal         func_194950
    ctx->pc = 0x1DD3D0u;
    SET_GPR_U32(ctx, 31, 0x1DD3D8u);
    ctx->pc = 0x1DD3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD3D0u;
            // 0x1dd3d4: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD3D8u; }
        if (ctx->pc != 0x1DD3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD3D8u; }
        if (ctx->pc != 0x1DD3D8u) { return; }
    }
    ctx->pc = 0x1DD3D8u;
    // 0x1dd3d8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DD3D8u;
    SET_GPR_U32(ctx, 31, 0x1DD3E0u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD3E0u; }
        if (ctx->pc != 0x1DD3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD3E0u; }
        if (ctx->pc != 0x1DD3E0u) { return; }
    }
    ctx->pc = 0x1DD3E0u;
    // 0x1dd3e0: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dd3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dd3e4: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dd3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dd3e8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dd3e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dd3ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dd3ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd3f0: 0x0  nop
    ctx->pc = 0x1dd3f0u;
    // NOP
    // 0x1dd3f4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dd3f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dd3f8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DD3F8u;
    SET_GPR_U32(ctx, 31, 0x1DD400u);
    ctx->pc = 0x1DD3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD3F8u;
            // 0x1dd3fc: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD400u; }
        if (ctx->pc != 0x1DD400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD400u; }
        if (ctx->pc != 0x1DD400u) { return; }
    }
    ctx->pc = 0x1DD400u;
    // 0x1dd400: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd404: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dd404u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dd408: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dd408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd40c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dd40cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dd410: 0xc065254  jal         func_194950
    ctx->pc = 0x1DD410u;
    SET_GPR_U32(ctx, 31, 0x1DD418u);
    ctx->pc = 0x1DD414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD410u;
            // 0x1dd414: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD418u; }
        if (ctx->pc != 0x1DD418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD418u; }
        if (ctx->pc != 0x1DD418u) { return; }
    }
    ctx->pc = 0x1DD418u;
    // 0x1dd418: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DD418u;
    SET_GPR_U32(ctx, 31, 0x1DD420u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD420u; }
        if (ctx->pc != 0x1DD420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD420u; }
        if (ctx->pc != 0x1DD420u) { return; }
    }
    ctx->pc = 0x1DD420u;
    // 0x1dd420: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dd420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dd424: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dd424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dd428: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dd428u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dd42c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dd42cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd430: 0x0  nop
    ctx->pc = 0x1dd430u;
    // NOP
    // 0x1dd434: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dd434u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dd438: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DD438u;
    SET_GPR_U32(ctx, 31, 0x1DD440u);
    ctx->pc = 0x1DD43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD438u;
            // 0x1dd43c: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD440u; }
        if (ctx->pc != 0x1DD440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD440u; }
        if (ctx->pc != 0x1DD440u) { return; }
    }
    ctx->pc = 0x1DD440u;
    // 0x1dd440: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd444: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dd444u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dd448: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dd448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd44c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dd44cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dd450: 0xc065254  jal         func_194950
    ctx->pc = 0x1DD450u;
    SET_GPR_U32(ctx, 31, 0x1DD458u);
    ctx->pc = 0x1DD454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD450u;
            // 0x1dd454: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD458u; }
        if (ctx->pc != 0x1DD458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD458u; }
        if (ctx->pc != 0x1DD458u) { return; }
    }
    ctx->pc = 0x1DD458u;
    // 0x1dd458: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DD458u;
    SET_GPR_U32(ctx, 31, 0x1DD460u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD460u; }
        if (ctx->pc != 0x1DD460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD460u; }
        if (ctx->pc != 0x1DD460u) { return; }
    }
    ctx->pc = 0x1DD460u;
    // 0x1dd460: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dd460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dd464: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dd464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dd468: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dd468u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dd46c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dd46cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd470: 0x0  nop
    ctx->pc = 0x1dd470u;
    // NOP
    // 0x1dd474: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dd474u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dd478: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DD478u;
    SET_GPR_U32(ctx, 31, 0x1DD480u);
    ctx->pc = 0x1DD47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD478u;
            // 0x1dd47c: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD480u; }
        if (ctx->pc != 0x1DD480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD480u; }
        if (ctx->pc != 0x1DD480u) { return; }
    }
    ctx->pc = 0x1DD480u;
    // 0x1dd480: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd484: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dd484u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dd488: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dd488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd48c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dd48cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dd490: 0xc065254  jal         func_194950
    ctx->pc = 0x1DD490u;
    SET_GPR_U32(ctx, 31, 0x1DD498u);
    ctx->pc = 0x1DD494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD490u;
            // 0x1dd494: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD498u; }
        if (ctx->pc != 0x1DD498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD498u; }
        if (ctx->pc != 0x1DD498u) { return; }
    }
    ctx->pc = 0x1DD498u;
label_1dd498:
    // 0x1dd498: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1dd498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1dd49c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD49Cu;
    {
        const bool branch_taken_0x1dd49c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DD4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD49Cu;
            // 0x1dd4a0: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd49c) {
            ctx->pc = 0x1DD4B0u;
            goto label_1dd4b0;
        }
    }
    ctx->pc = 0x1DD4A4u;
    // 0x1dd4a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DD4A4u;
    {
        const bool branch_taken_0x1dd4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd4a4) {
            ctx->pc = 0x1DD4B0u;
            goto label_1dd4b0;
        }
    }
    ctx->pc = 0x1DD4ACu;
    // 0x1dd4ac: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1dd4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_1dd4b0:
    // 0x1dd4b0: 0x14400657  bnez        $v0, . + 4 + (0x657 << 2)
    ctx->pc = 0x1DD4B0u;
    {
        const bool branch_taken_0x1dd4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd4b0) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DD4B8u;
    // 0x1dd4b8: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1dd4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd4bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dd4bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd4c0: 0x0  nop
    ctx->pc = 0x1dd4c0u;
    // NOP
    // 0x1dd4c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dd4c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd4c8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1DD4C8u;
    {
        const bool branch_taken_0x1dd4c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD4C8u;
            // 0x1dd4cc: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd4c8) {
            ctx->pc = 0x1DD4E8u;
            goto label_1dd4e8;
        }
    }
    ctx->pc = 0x1DD4D0u;
    // 0x1dd4d0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1dd4d0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1dd4d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd4d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd4d8: 0x0  nop
    ctx->pc = 0x1dd4d8u;
    // NOP
    // 0x1dd4dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dd4dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd4e0: 0x4501064b  bc1t        . + 4 + (0x64B << 2)
    ctx->pc = 0x1DD4E0u;
    {
        const bool branch_taken_0x1dd4e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd4e0) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DD4E8u;
label_1dd4e8:
    // 0x1dd4e8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd4ec: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dd4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd4f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dd4f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dd4f4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DD4F4u;
    SET_GPR_U32(ctx, 31, 0x1DD4FCu);
    ctx->pc = 0x1DD4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD4F4u;
            // 0x1dd4f8: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD4FCu; }
        if (ctx->pc != 0x1DD4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD4FCu; }
        if (ctx->pc != 0x1DD4FCu) { return; }
    }
    ctx->pc = 0x1DD4FCu;
    // 0x1dd4fc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dd4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd500: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x1dd500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x1dd504: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dd504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd508: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dd508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dd50c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DD50Cu;
    SET_GPR_U32(ctx, 31, 0x1DD514u);
    ctx->pc = 0x1DD510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD50Cu;
            // 0x1dd510: 0x2465004b  addiu       $a1, $v1, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD514u; }
        if (ctx->pc != 0x1DD514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD514u; }
        if (ctx->pc != 0x1DD514u) { return; }
    }
    ctx->pc = 0x1DD514u;
    // 0x1dd514: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dd514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd518: 0x3c02c170  lui         $v0, 0xC170
    ctx->pc = 0x1dd518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49520 << 16));
    // 0x1dd51c: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dd51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd520: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dd520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dd524: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DD524u;
    SET_GPR_U32(ctx, 31, 0x1DD52Cu);
    ctx->pc = 0x1DD528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD524u;
            // 0x1dd528: 0x2465004b  addiu       $a1, $v1, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD52Cu; }
        if (ctx->pc != 0x1DD52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD52Cu; }
        if (ctx->pc != 0x1DD52Cu) { return; }
    }
    ctx->pc = 0x1DD52Cu;
    // 0x1dd52c: 0x10000638  b           . + 4 + (0x638 << 2)
    ctx->pc = 0x1DD52Cu;
    {
        const bool branch_taken_0x1dd52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd52c) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DD534u;
    // 0x1dd534: 0x0  nop
    ctx->pc = 0x1dd534u;
    // NOP
label_1dd538:
    // 0x1dd538: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1dd538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1dd53c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD53Cu;
    {
        const bool branch_taken_0x1dd53c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DD540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD53Cu;
            // 0x1dd540: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd53c) {
            ctx->pc = 0x1DD550u;
            goto label_1dd550;
        }
    }
    ctx->pc = 0x1DD544u;
    // 0x1dd544: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DD544u;
    {
        const bool branch_taken_0x1dd544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd544) {
            ctx->pc = 0x1DD550u;
            goto label_1dd550;
        }
    }
    ctx->pc = 0x1DD54Cu;
    // 0x1dd54c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1dd54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_1dd550:
    // 0x1dd550: 0x1440062f  bnez        $v0, . + 4 + (0x62F << 2)
    ctx->pc = 0x1DD550u;
    {
        const bool branch_taken_0x1dd550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd550) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DD558u;
    // 0x1dd558: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1dd558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd55c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dd55cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd560: 0x0  nop
    ctx->pc = 0x1dd560u;
    // NOP
    // 0x1dd564: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dd564u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd568: 0x45010051  bc1t        . + 4 + (0x51 << 2)
    ctx->pc = 0x1DD568u;
    {
        const bool branch_taken_0x1dd568 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD568u;
            // 0x1dd56c: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd568) {
            ctx->pc = 0x1DD6B0u;
            goto label_1dd6b0;
        }
    }
    ctx->pc = 0x1DD570u;
    // 0x1dd570: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1dd570u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1dd574: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd578: 0x0  nop
    ctx->pc = 0x1dd578u;
    // NOP
    // 0x1dd57c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dd57cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd580: 0x4500004b  bc1f        . + 4 + (0x4B << 2)
    ctx->pc = 0x1DD580u;
    {
        const bool branch_taken_0x1dd580 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd580) {
            ctx->pc = 0x1DD6B0u;
            goto label_1dd6b0;
        }
    }
    ctx->pc = 0x1DD588u;
    // 0x1dd588: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1dd588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd58c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd590: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1dd590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1dd594: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1dd594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1dd598: 0x2442004b  addiu       $v0, $v0, 0x4B
    ctx->pc = 0x1dd598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
    // 0x1dd59c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd59cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd5a0: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DD5A0u;
    SET_GPR_U32(ctx, 31, 0x1DD5A8u);
    ctx->pc = 0x1DD5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD5A0u;
            // 0x1dd5a4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD5A8u; }
        if (ctx->pc != 0x1DD5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD5A8u; }
        if (ctx->pc != 0x1DD5A8u) { return; }
    }
    ctx->pc = 0x1DD5A8u;
    // 0x1dd5a8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DD5A8u;
    SET_GPR_U32(ctx, 31, 0x1DD5B0u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD5B0u; }
        if (ctx->pc != 0x1DD5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD5B0u; }
        if (ctx->pc != 0x1DD5B0u) { return; }
    }
    ctx->pc = 0x1DD5B0u;
    // 0x1dd5b0: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dd5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dd5b4: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dd5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dd5b8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dd5b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dd5bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dd5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd5c0: 0x0  nop
    ctx->pc = 0x1dd5c0u;
    // NOP
    // 0x1dd5c4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dd5c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dd5c8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DD5C8u;
    SET_GPR_U32(ctx, 31, 0x1DD5D0u);
    ctx->pc = 0x1DD5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD5C8u;
            // 0x1dd5cc: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD5D0u; }
        if (ctx->pc != 0x1DD5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD5D0u; }
        if (ctx->pc != 0x1DD5D0u) { return; }
    }
    ctx->pc = 0x1DD5D0u;
    // 0x1dd5d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd5d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dd5d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dd5d8: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dd5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd5dc: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dd5dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dd5e0: 0xc065254  jal         func_194950
    ctx->pc = 0x1DD5E0u;
    SET_GPR_U32(ctx, 31, 0x1DD5E8u);
    ctx->pc = 0x1DD5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD5E0u;
            // 0x1dd5e4: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD5E8u; }
        if (ctx->pc != 0x1DD5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD5E8u; }
        if (ctx->pc != 0x1DD5E8u) { return; }
    }
    ctx->pc = 0x1DD5E8u;
    // 0x1dd5e8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DD5E8u;
    SET_GPR_U32(ctx, 31, 0x1DD5F0u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD5F0u; }
        if (ctx->pc != 0x1DD5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD5F0u; }
        if (ctx->pc != 0x1DD5F0u) { return; }
    }
    ctx->pc = 0x1DD5F0u;
    // 0x1dd5f0: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dd5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dd5f4: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dd5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dd5f8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dd5f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dd5fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dd5fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd600: 0x0  nop
    ctx->pc = 0x1dd600u;
    // NOP
    // 0x1dd604: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dd604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dd608: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DD608u;
    SET_GPR_U32(ctx, 31, 0x1DD610u);
    ctx->pc = 0x1DD60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD608u;
            // 0x1dd60c: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD610u; }
        if (ctx->pc != 0x1DD610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD610u; }
        if (ctx->pc != 0x1DD610u) { return; }
    }
    ctx->pc = 0x1DD610u;
    // 0x1dd610: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd614: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dd614u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dd618: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dd618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd61c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dd61cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dd620: 0xc065254  jal         func_194950
    ctx->pc = 0x1DD620u;
    SET_GPR_U32(ctx, 31, 0x1DD628u);
    ctx->pc = 0x1DD624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD620u;
            // 0x1dd624: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD628u; }
        if (ctx->pc != 0x1DD628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD628u; }
        if (ctx->pc != 0x1DD628u) { return; }
    }
    ctx->pc = 0x1DD628u;
    // 0x1dd628: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DD628u;
    SET_GPR_U32(ctx, 31, 0x1DD630u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD630u; }
        if (ctx->pc != 0x1DD630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD630u; }
        if (ctx->pc != 0x1DD630u) { return; }
    }
    ctx->pc = 0x1DD630u;
    // 0x1dd630: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dd630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dd634: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dd634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dd638: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dd638u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dd63c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dd63cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd640: 0x0  nop
    ctx->pc = 0x1dd640u;
    // NOP
    // 0x1dd644: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dd644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dd648: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DD648u;
    SET_GPR_U32(ctx, 31, 0x1DD650u);
    ctx->pc = 0x1DD64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD648u;
            // 0x1dd64c: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD650u; }
        if (ctx->pc != 0x1DD650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD650u; }
        if (ctx->pc != 0x1DD650u) { return; }
    }
    ctx->pc = 0x1DD650u;
    // 0x1dd650: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd654: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dd654u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dd658: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dd658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd65c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dd65cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dd660: 0xc065254  jal         func_194950
    ctx->pc = 0x1DD660u;
    SET_GPR_U32(ctx, 31, 0x1DD668u);
    ctx->pc = 0x1DD664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD660u;
            // 0x1dd664: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD668u; }
        if (ctx->pc != 0x1DD668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD668u; }
        if (ctx->pc != 0x1DD668u) { return; }
    }
    ctx->pc = 0x1DD668u;
    // 0x1dd668: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DD668u;
    SET_GPR_U32(ctx, 31, 0x1DD670u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD670u; }
        if (ctx->pc != 0x1DD670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD670u; }
        if (ctx->pc != 0x1DD670u) { return; }
    }
    ctx->pc = 0x1DD670u;
    // 0x1dd670: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1dd670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1dd674: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1dd674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1dd678: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1dd678u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dd67c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dd67cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd680: 0x0  nop
    ctx->pc = 0x1dd680u;
    // NOP
    // 0x1dd684: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dd684u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dd688: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1DD688u;
    SET_GPR_U32(ctx, 31, 0x1DD690u);
    ctx->pc = 0x1DD68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD688u;
            // 0x1dd68c: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD690u; }
        if (ctx->pc != 0x1DD690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD690u; }
        if (ctx->pc != 0x1DD690u) { return; }
    }
    ctx->pc = 0x1DD690u;
    // 0x1dd690: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd694: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dd694u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dd698: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dd698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd69c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dd69cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dd6a0: 0xc065254  jal         func_194950
    ctx->pc = 0x1DD6A0u;
    SET_GPR_U32(ctx, 31, 0x1DD6A8u);
    ctx->pc = 0x1DD6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD6A0u;
            // 0x1dd6a4: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD6A8u; }
        if (ctx->pc != 0x1DD6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD6A8u; }
        if (ctx->pc != 0x1DD6A8u) { return; }
    }
    ctx->pc = 0x1DD6A8u;
    // 0x1dd6a8: 0x100005d9  b           . + 4 + (0x5D9 << 2)
    ctx->pc = 0x1DD6A8u;
    {
        const bool branch_taken_0x1dd6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd6a8) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DD6B0u;
label_1dd6b0:
    // 0x1dd6b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd6b4: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dd6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd6b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dd6b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dd6bc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DD6BCu;
    SET_GPR_U32(ctx, 31, 0x1DD6C4u);
    ctx->pc = 0x1DD6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD6BCu;
            // 0x1dd6c0: 0x2445004b  addiu       $a1, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD6C4u; }
        if (ctx->pc != 0x1DD6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD6C4u; }
        if (ctx->pc != 0x1DD6C4u) { return; }
    }
    ctx->pc = 0x1DD6C4u;
    // 0x1dd6c4: 0x100005d2  b           . + 4 + (0x5D2 << 2)
    ctx->pc = 0x1DD6C4u;
    {
        const bool branch_taken_0x1dd6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd6c4) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DD6CCu;
    // 0x1dd6cc: 0x0  nop
    ctx->pc = 0x1dd6ccu;
    // NOP
label_1dd6d0:
    // 0x1dd6d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dd6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dd6d4: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x1dd6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x1dd6d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd6d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd6dc: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1dd6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd6e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dd6e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd6e4: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1DD6E4u;
    {
        const bool branch_taken_0x1dd6e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd6e4) {
            ctx->pc = 0x1DD710u;
            goto label_1dd710;
        }
    }
    ctx->pc = 0x1DD6ECu;
    // 0x1dd6ec: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1dd6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd6f0: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1dd6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x1dd6f4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1dd6f4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1dd6f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd6f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd6fc: 0x0  nop
    ctx->pc = 0x1dd6fcu;
    // NOP
    // 0x1dd700: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1dd700u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1dd704: 0x100005c2  b           . + 4 + (0x5C2 << 2)
    ctx->pc = 0x1DD704u;
    {
        const bool branch_taken_0x1dd704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD704u;
            // 0x1dd708: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd704) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DD70Cu;
    // 0x1dd70c: 0x0  nop
    ctx->pc = 0x1dd70cu;
    // NOP
label_1dd710:
    // 0x1dd710: 0x3c05c2a0  lui         $a1, 0xC2A0
    ctx->pc = 0x1dd710u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49824 << 16));
    // 0x1dd714: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x1dd714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1dd718: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dd718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dd71c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1dd71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dd720: 0x3c033f59  lui         $v1, 0x3F59
    ctx->pc = 0x1dd720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16217 << 16));
    // 0x1dd724: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1dd724u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1dd728: 0xac850124  sw          $a1, 0x124($a0)
    ctx->pc = 0x1dd728u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 5));
    // 0x1dd72c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1dd72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1dd730: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1dd730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1dd734: 0x100005b6  b           . + 4 + (0x5B6 << 2)
    ctx->pc = 0x1DD734u;
    {
        const bool branch_taken_0x1dd734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD734u;
            // 0x1dd738: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd734) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DD73Cu;
    // 0x1dd73c: 0x0  nop
    ctx->pc = 0x1dd73cu;
    // NOP
label_1dd740:
    // 0x1dd740: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1dd740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dd744: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1dd744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1dd748: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1dd748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dd74c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1dd74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1dd750: 0xc077de0  jal         func_1DF780
    ctx->pc = 0x1DD750u;
    SET_GPR_U32(ctx, 31, 0x1DD758u);
    ctx->pc = 0x1DD754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD750u;
            // 0x1dd754: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF780u;
    if (runtime->hasFunction(0x1DF780u)) {
        auto targetFn = runtime->lookupFunction(0x1DF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD758u; }
        if (ctx->pc != 0x1DD758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1df780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD758u; }
        if (ctx->pc != 0x1DD758u) { return; }
    }
    ctx->pc = 0x1DD758u;
    // 0x1dd758: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dd758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dd75c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1dd75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1dd760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd764: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1dd764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd768: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dd768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd76c: 0x450001d6  bc1f        . + 4 + (0x1D6 << 2)
    ctx->pc = 0x1DD76Cu;
    {
        const bool branch_taken_0x1dd76c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD76Cu;
            // 0x1dd770: 0x24640120  addiu       $a0, $v1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd76c) {
            ctx->pc = 0x1DDEC8u;
            goto label_1ddec8;
        }
    }
    ctx->pc = 0x1DD774u;
    // 0x1dd774: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1dd774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dd778: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1dd778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1dd77c: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1dd77cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1dd780: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1dd780u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd784: 0x3c023bb4  lui         $v0, 0x3BB4
    ctx->pc = 0x1dd784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15284 << 16));
    // 0x1dd788: 0x34423958  ori         $v0, $v0, 0x3958
    ctx->pc = 0x1dd788u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)14680u)));
    // 0x1dd78c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd78cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd790: 0x0  nop
    ctx->pc = 0x1dd790u;
    // NOP
    // 0x1dd794: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1dd794u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1dd798: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x1dd798u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1dd79c: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1dd79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd7a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1dd7a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1dd7a4: 0xc065d00  jal         func_197400
    ctx->pc = 0x1DD7A4u;
    SET_GPR_U32(ctx, 31, 0x1DD7ACu);
    ctx->pc = 0x1DD7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD7A4u;
            // 0x1dd7a8: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD7ACu; }
        if (ctx->pc != 0x1DD7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD7ACu; }
        if (ctx->pc != 0x1DD7ACu) { return; }
    }
    ctx->pc = 0x1DD7ACu;
    // 0x1dd7ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1dd7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dd7b0: 0x14430097  bne         $v0, $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x1DD7B0u;
    {
        const bool branch_taken_0x1dd7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dd7b0) {
            ctx->pc = 0x1DDA10u;
            goto label_1dda10;
        }
    }
    ctx->pc = 0x1DD7B8u;
    // 0x1dd7b8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1dd7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1dd7bc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1dd7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1dd7c0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1dd7c0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1dd7c4: 0x0  nop
    ctx->pc = 0x1dd7c4u;
    // NOP
    // 0x1dd7c8: 0x0  nop
    ctx->pc = 0x1dd7c8u;
    // NOP
    // 0x1dd7cc: 0x1010  mfhi        $v0
    ctx->pc = 0x1dd7ccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1dd7d0: 0x1440058f  bnez        $v0, . + 4 + (0x58F << 2)
    ctx->pc = 0x1DD7D0u;
    {
        const bool branch_taken_0x1dd7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD7D0u;
            // 0x1dd7d4: 0x3072000f  andi        $s2, $v1, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 18, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd7d0) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DD7D8u;
    // 0x1dd7d8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD7D8u;
    {
        const bool branch_taken_0x1dd7d8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1dd7d8) {
            ctx->pc = 0x1DD7ECu;
            goto label_1dd7ec;
        }
    }
    ctx->pc = 0x1DD7E0u;
    // 0x1dd7e0: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DD7E0u;
    {
        const bool branch_taken_0x1dd7e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd7e0) {
            ctx->pc = 0x1DD7ECu;
            goto label_1dd7ec;
        }
    }
    ctx->pc = 0x1DD7E8u;
    // 0x1dd7e8: 0x2652fff0  addiu       $s2, $s2, -0x10
    ctx->pc = 0x1dd7e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
label_1dd7ec:
    // 0x1dd7ec: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dd7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd7f0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd7f4: 0x2464ff92  addiu       $a0, $v1, -0x6E
    ctx->pc = 0x1dd7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967186));
    // 0x1dd7f8: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1DD7F8u;
    SET_GPR_U32(ctx, 31, 0x1DD800u);
    ctx->pc = 0x1DD7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD7F8u;
            // 0x1dd7fc: 0x2445008c  addiu       $a1, $v0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD800u; }
        if (ctx->pc != 0x1DD800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD800u; }
        if (ctx->pc != 0x1DD800u) { return; }
    }
    ctx->pc = 0x1DD800u;
    // 0x1dd800: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dd800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd804: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1dd804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1dd808: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dd808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd80c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dd80cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dd810: 0x2646000a  addiu       $a2, $s2, 0xA
    ctx->pc = 0x1dd810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
    // 0x1dd814: 0x2484ff92  addiu       $a0, $a0, -0x6E
    ctx->pc = 0x1dd814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967186));
    // 0x1dd818: 0xc065480  jal         func_195200
    ctx->pc = 0x1DD818u;
    SET_GPR_U32(ctx, 31, 0x1DD820u);
    ctx->pc = 0x1DD81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD818u;
            // 0x1dd81c: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD820u; }
        if (ctx->pc != 0x1DD820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD820u; }
        if (ctx->pc != 0x1DD820u) { return; }
    }
    ctx->pc = 0x1DD820u;
    // 0x1dd820: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dd820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd824: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x1dd824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1dd828: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dd828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd82c: 0x528823  subu        $s1, $v0, $s2
    ctx->pc = 0x1dd82cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1dd830: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1dd830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1dd834: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1dd834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd838: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dd838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dd83c: 0x2484ff92  addiu       $a0, $a0, -0x6E
    ctx->pc = 0x1dd83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967186));
    // 0x1dd840: 0xc065480  jal         func_195200
    ctx->pc = 0x1DD840u;
    SET_GPR_U32(ctx, 31, 0x1DD848u);
    ctx->pc = 0x1DD844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD840u;
            // 0x1dd844: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD848u; }
        if (ctx->pc != 0x1DD848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD848u; }
        if (ctx->pc != 0x1DD848u) { return; }
    }
    ctx->pc = 0x1DD848u;
    // 0x1dd848: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dd848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd84c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd850: 0x2464006e  addiu       $a0, $v1, 0x6E
    ctx->pc = 0x1dd850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
    // 0x1dd854: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1DD854u;
    SET_GPR_U32(ctx, 31, 0x1DD85Cu);
    ctx->pc = 0x1DD858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD854u;
            // 0x1dd858: 0x2445008c  addiu       $a1, $v0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD85Cu; }
        if (ctx->pc != 0x1DD85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD85Cu; }
        if (ctx->pc != 0x1DD85Cu) { return; }
    }
    ctx->pc = 0x1DD85Cu;
    // 0x1dd85c: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dd85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd860: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1dd860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1dd864: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dd864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd868: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dd868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dd86c: 0x2646000a  addiu       $a2, $s2, 0xA
    ctx->pc = 0x1dd86cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
    // 0x1dd870: 0x2484006e  addiu       $a0, $a0, 0x6E
    ctx->pc = 0x1dd870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 110));
    // 0x1dd874: 0xc065480  jal         func_195200
    ctx->pc = 0x1DD874u;
    SET_GPR_U32(ctx, 31, 0x1DD87Cu);
    ctx->pc = 0x1DD878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD874u;
            // 0x1dd878: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD87Cu; }
        if (ctx->pc != 0x1DD87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD87Cu; }
        if (ctx->pc != 0x1DD87Cu) { return; }
    }
    ctx->pc = 0x1DD87Cu;
    // 0x1dd87c: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dd87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd880: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1dd880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1dd884: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dd884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd888: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dd888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dd88c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1dd88cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd890: 0x2484006e  addiu       $a0, $a0, 0x6E
    ctx->pc = 0x1dd890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 110));
    // 0x1dd894: 0xc065480  jal         func_195200
    ctx->pc = 0x1DD894u;
    SET_GPR_U32(ctx, 31, 0x1DD89Cu);
    ctx->pc = 0x1DD898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD894u;
            // 0x1dd898: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD89Cu; }
        if (ctx->pc != 0x1DD89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD89Cu; }
        if (ctx->pc != 0x1DD89Cu) { return; }
    }
    ctx->pc = 0x1DD89Cu;
    // 0x1dd89c: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dd89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd8a0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd8a4: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x1dd8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
    // 0x1dd8a8: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1DD8A8u;
    SET_GPR_U32(ctx, 31, 0x1DD8B0u);
    ctx->pc = 0x1DD8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD8A8u;
            // 0x1dd8ac: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD8B0u; }
        if (ctx->pc != 0x1DD8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD8B0u; }
        if (ctx->pc != 0x1DD8B0u) { return; }
    }
    ctx->pc = 0x1DD8B0u;
    // 0x1dd8b0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dd8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd8b4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1dd8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1dd8b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dd8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd8bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dd8bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dd8c0: 0x26460005  addiu       $a2, $s2, 0x5
    ctx->pc = 0x1dd8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
    // 0x1dd8c4: 0x2484ffd3  addiu       $a0, $a0, -0x2D
    ctx->pc = 0x1dd8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967251));
    // 0x1dd8c8: 0xc065480  jal         func_195200
    ctx->pc = 0x1DD8C8u;
    SET_GPR_U32(ctx, 31, 0x1DD8D0u);
    ctx->pc = 0x1DD8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD8C8u;
            // 0x1dd8cc: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD8D0u; }
        if (ctx->pc != 0x1DD8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD8D0u; }
        if (ctx->pc != 0x1DD8D0u) { return; }
    }
    ctx->pc = 0x1DD8D0u;
    // 0x1dd8d0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dd8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd8d4: 0x24020073  addiu       $v0, $zero, 0x73
    ctx->pc = 0x1dd8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x1dd8d8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dd8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd8dc: 0x528823  subu        $s1, $v0, $s2
    ctx->pc = 0x1dd8dcu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1dd8e0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1dd8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1dd8e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1dd8e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd8e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dd8e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dd8ec: 0x2484ffd3  addiu       $a0, $a0, -0x2D
    ctx->pc = 0x1dd8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967251));
    // 0x1dd8f0: 0xc065480  jal         func_195200
    ctx->pc = 0x1DD8F0u;
    SET_GPR_U32(ctx, 31, 0x1DD8F8u);
    ctx->pc = 0x1DD8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD8F0u;
            // 0x1dd8f4: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD8F8u; }
        if (ctx->pc != 0x1DD8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD8F8u; }
        if (ctx->pc != 0x1DD8F8u) { return; }
    }
    ctx->pc = 0x1DD8F8u;
    // 0x1dd8f8: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dd8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd8fc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd900: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x1dd900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1dd904: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1DD904u;
    SET_GPR_U32(ctx, 31, 0x1DD90Cu);
    ctx->pc = 0x1DD908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD904u;
            // 0x1dd908: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD90Cu; }
        if (ctx->pc != 0x1DD90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD90Cu; }
        if (ctx->pc != 0x1DD90Cu) { return; }
    }
    ctx->pc = 0x1DD90Cu;
    // 0x1dd90c: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dd90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd910: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1dd910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1dd914: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dd914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd918: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dd918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dd91c: 0x26460005  addiu       $a2, $s2, 0x5
    ctx->pc = 0x1dd91cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
    // 0x1dd920: 0x2484002d  addiu       $a0, $a0, 0x2D
    ctx->pc = 0x1dd920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 45));
    // 0x1dd924: 0xc065480  jal         func_195200
    ctx->pc = 0x1DD924u;
    SET_GPR_U32(ctx, 31, 0x1DD92Cu);
    ctx->pc = 0x1DD928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD924u;
            // 0x1dd928: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD92Cu; }
        if (ctx->pc != 0x1DD92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD92Cu; }
        if (ctx->pc != 0x1DD92Cu) { return; }
    }
    ctx->pc = 0x1DD92Cu;
    // 0x1dd92c: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dd92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd930: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1dd930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1dd934: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dd934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd938: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dd938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dd93c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1dd93cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd940: 0x2484002d  addiu       $a0, $a0, 0x2D
    ctx->pc = 0x1dd940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 45));
    // 0x1dd944: 0xc065480  jal         func_195200
    ctx->pc = 0x1DD944u;
    SET_GPR_U32(ctx, 31, 0x1DD94Cu);
    ctx->pc = 0x1DD948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD944u;
            // 0x1dd948: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD94Cu; }
        if (ctx->pc != 0x1DD94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD94Cu; }
        if (ctx->pc != 0x1DD94Cu) { return; }
    }
    ctx->pc = 0x1DD94Cu;
    // 0x1dd94c: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1dd94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd950: 0x2841fc19  slti        $at, $v0, -0x3E7
    ctx->pc = 0x1dd950u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294966297) ? 1 : 0);
    // 0x1dd954: 0x1420052e  bnez        $at, . + 4 + (0x52E << 2)
    ctx->pc = 0x1DD954u;
    {
        const bool branch_taken_0x1dd954 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD954u;
            // 0x1dd958: 0x284103e8  slti        $at, $v0, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd954) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DD95Cu;
    // 0x1dd95c: 0x1020052c  beqz        $at, . + 4 + (0x52C << 2)
    ctx->pc = 0x1DD95Cu;
    {
        const bool branch_taken_0x1dd95c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD95Cu;
            // 0x1dd960: 0x2443ffd3  addiu       $v1, $v0, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967251));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd95c) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DD964u;
    // 0x1dd964: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1dd964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1dd968: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1dd968u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd96c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd970: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1dd970u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1dd974: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1dd974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1dd978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd97c: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DD97Cu;
    SET_GPR_U32(ctx, 31, 0x1DD984u);
    ctx->pc = 0x1DD980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD97Cu;
            // 0x1dd980: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD984u; }
        if (ctx->pc != 0x1DD984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD984u; }
        if (ctx->pc != 0x1DD984u) { return; }
    }
    ctx->pc = 0x1DD984u;
    // 0x1dd984: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dd984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd988: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1dd988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1dd98c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd990: 0x2463002d  addiu       $v1, $v1, 0x2D
    ctx->pc = 0x1dd990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1dd994: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1dd994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1dd998: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1dd998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd99c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd99cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd9a0: 0x0  nop
    ctx->pc = 0x1dd9a0u;
    // NOP
    // 0x1dd9a4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1dd9a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1dd9a8: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DD9A8u;
    SET_GPR_U32(ctx, 31, 0x1DD9B0u);
    ctx->pc = 0x1DD9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD9A8u;
            // 0x1dd9ac: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD9B0u; }
        if (ctx->pc != 0x1DD9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD9B0u; }
        if (ctx->pc != 0x1DD9B0u) { return; }
    }
    ctx->pc = 0x1DD9B0u;
    // 0x1dd9b0: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dd9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd9b4: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1dd9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1dd9b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd9bc: 0x2463ff92  addiu       $v1, $v1, -0x6E
    ctx->pc = 0x1dd9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967186));
    // 0x1dd9c0: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x1dd9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1dd9c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1dd9c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd9c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd9c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd9cc: 0x0  nop
    ctx->pc = 0x1dd9ccu;
    // NOP
    // 0x1dd9d0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1dd9d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1dd9d4: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DD9D4u;
    SET_GPR_U32(ctx, 31, 0x1DD9DCu);
    ctx->pc = 0x1DD9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD9D4u;
            // 0x1dd9d8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD9DCu; }
        if (ctx->pc != 0x1DD9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD9DCu; }
        if (ctx->pc != 0x1DD9DCu) { return; }
    }
    ctx->pc = 0x1DD9DCu;
    // 0x1dd9dc: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dd9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dd9e0: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1dd9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1dd9e4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dd9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd9e8: 0x2463006e  addiu       $v1, $v1, 0x6E
    ctx->pc = 0x1dd9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
    // 0x1dd9ec: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x1dd9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1dd9f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1dd9f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd9f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd9f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd9f8: 0x0  nop
    ctx->pc = 0x1dd9f8u;
    // NOP
    // 0x1dd9fc: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1dd9fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1dda00: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DDA00u;
    SET_GPR_U32(ctx, 31, 0x1DDA08u);
    ctx->pc = 0x1DDA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA00u;
            // 0x1dda04: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA08u; }
        if (ctx->pc != 0x1DDA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA08u; }
        if (ctx->pc != 0x1DDA08u) { return; }
    }
    ctx->pc = 0x1DDA08u;
    // 0x1dda08: 0x10000501  b           . + 4 + (0x501 << 2)
    ctx->pc = 0x1DDA08u;
    {
        const bool branch_taken_0x1dda08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dda08) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DDA10u;
label_1dda10:
    // 0x1dda10: 0xc065d00  jal         func_197400
    ctx->pc = 0x1DDA10u;
    SET_GPR_U32(ctx, 31, 0x1DDA18u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA18u; }
        if (ctx->pc != 0x1DDA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA18u; }
        if (ctx->pc != 0x1DDA18u) { return; }
    }
    ctx->pc = 0x1DDA18u;
    // 0x1dda18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dda18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dda1c: 0x14430098  bne         $v0, $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x1DDA1Cu;
    {
        const bool branch_taken_0x1dda1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dda1c) {
            ctx->pc = 0x1DDC80u;
            goto label_1ddc80;
        }
    }
    ctx->pc = 0x1DDA24u;
    // 0x1dda24: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1dda24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1dda28: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DDA28u;
    {
        const bool branch_taken_0x1dda28 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DDA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA28u;
            // 0x1dda2c: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)7u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda28) {
            ctx->pc = 0x1DDA3Cu;
            goto label_1dda3c;
        }
    }
    ctx->pc = 0x1DDA30u;
    // 0x1dda30: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DDA30u;
    {
        const bool branch_taken_0x1dda30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dda30) {
            ctx->pc = 0x1DDA3Cu;
            goto label_1dda3c;
        }
    }
    ctx->pc = 0x1DDA38u;
    // 0x1dda38: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1dda38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_1dda3c:
    // 0x1dda3c: 0x144004f4  bnez        $v0, . + 4 + (0x4F4 << 2)
    ctx->pc = 0x1DDA3Cu;
    {
        const bool branch_taken_0x1dda3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA3Cu;
            // 0x1dda40: 0x3071000f  andi        $s1, $v1, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda3c) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DDA44u;
    // 0x1dda44: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DDA44u;
    {
        const bool branch_taken_0x1dda44 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1dda44) {
            ctx->pc = 0x1DDA58u;
            goto label_1dda58;
        }
    }
    ctx->pc = 0x1DDA4Cu;
    // 0x1dda4c: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DDA4Cu;
    {
        const bool branch_taken_0x1dda4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dda4c) {
            ctx->pc = 0x1DDA58u;
            goto label_1dda58;
        }
    }
    ctx->pc = 0x1DDA54u;
    // 0x1dda54: 0x2631fff0  addiu       $s1, $s1, -0x10
    ctx->pc = 0x1dda54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_1dda58:
    // 0x1dda58: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dda58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dda5c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dda5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dda60: 0x2464ff92  addiu       $a0, $v1, -0x6E
    ctx->pc = 0x1dda60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967186));
    // 0x1dda64: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1DDA64u;
    SET_GPR_U32(ctx, 31, 0x1DDA6Cu);
    ctx->pc = 0x1DDA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA64u;
            // 0x1dda68: 0x2445008c  addiu       $a1, $v0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA6Cu; }
        if (ctx->pc != 0x1DDA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA6Cu; }
        if (ctx->pc != 0x1DDA6Cu) { return; }
    }
    ctx->pc = 0x1DDA6Cu;
    // 0x1dda6c: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dda6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dda70: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1dda70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1dda74: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dda74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dda78: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dda78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dda7c: 0x2626000a  addiu       $a2, $s1, 0xA
    ctx->pc = 0x1dda7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
    // 0x1dda80: 0x2484ff92  addiu       $a0, $a0, -0x6E
    ctx->pc = 0x1dda80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967186));
    // 0x1dda84: 0xc065480  jal         func_195200
    ctx->pc = 0x1DDA84u;
    SET_GPR_U32(ctx, 31, 0x1DDA8Cu);
    ctx->pc = 0x1DDA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA84u;
            // 0x1dda88: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA8Cu; }
        if (ctx->pc != 0x1DDA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA8Cu; }
        if (ctx->pc != 0x1DDA8Cu) { return; }
    }
    ctx->pc = 0x1DDA8Cu;
    // 0x1dda8c: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dda8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dda90: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x1dda90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1dda94: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dda94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dda98: 0x519023  subu        $s2, $v0, $s1
    ctx->pc = 0x1dda98u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1dda9c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1dda9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1ddaa0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ddaa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddaa4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ddaa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ddaa8: 0x2484ff92  addiu       $a0, $a0, -0x6E
    ctx->pc = 0x1ddaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967186));
    // 0x1ddaac: 0xc065480  jal         func_195200
    ctx->pc = 0x1DDAACu;
    SET_GPR_U32(ctx, 31, 0x1DDAB4u);
    ctx->pc = 0x1DDAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDAACu;
            // 0x1ddab0: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDAB4u; }
        if (ctx->pc != 0x1DDAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDAB4u; }
        if (ctx->pc != 0x1DDAB4u) { return; }
    }
    ctx->pc = 0x1DDAB4u;
    // 0x1ddab4: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1ddab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ddab8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ddab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ddabc: 0x2464006e  addiu       $a0, $v1, 0x6E
    ctx->pc = 0x1ddabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
    // 0x1ddac0: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1DDAC0u;
    SET_GPR_U32(ctx, 31, 0x1DDAC8u);
    ctx->pc = 0x1DDAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDAC0u;
            // 0x1ddac4: 0x2445008c  addiu       $a1, $v0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDAC8u; }
        if (ctx->pc != 0x1DDAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDAC8u; }
        if (ctx->pc != 0x1DDAC8u) { return; }
    }
    ctx->pc = 0x1DDAC8u;
    // 0x1ddac8: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ddac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ddacc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ddaccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1ddad0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ddad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ddad4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ddad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ddad8: 0x2626000a  addiu       $a2, $s1, 0xA
    ctx->pc = 0x1ddad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
    // 0x1ddadc: 0x2484006e  addiu       $a0, $a0, 0x6E
    ctx->pc = 0x1ddadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 110));
    // 0x1ddae0: 0xc065480  jal         func_195200
    ctx->pc = 0x1DDAE0u;
    SET_GPR_U32(ctx, 31, 0x1DDAE8u);
    ctx->pc = 0x1DDAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDAE0u;
            // 0x1ddae4: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDAE8u; }
        if (ctx->pc != 0x1DDAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDAE8u; }
        if (ctx->pc != 0x1DDAE8u) { return; }
    }
    ctx->pc = 0x1DDAE8u;
    // 0x1ddae8: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ddae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ddaec: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ddaecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1ddaf0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ddaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ddaf4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ddaf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ddaf8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ddaf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddafc: 0x2484006e  addiu       $a0, $a0, 0x6E
    ctx->pc = 0x1ddafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 110));
    // 0x1ddb00: 0xc065480  jal         func_195200
    ctx->pc = 0x1DDB00u;
    SET_GPR_U32(ctx, 31, 0x1DDB08u);
    ctx->pc = 0x1DDB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDB00u;
            // 0x1ddb04: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB08u; }
        if (ctx->pc != 0x1DDB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB08u; }
        if (ctx->pc != 0x1DDB08u) { return; }
    }
    ctx->pc = 0x1DDB08u;
    // 0x1ddb08: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1ddb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ddb0c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ddb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ddb10: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x1ddb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
    // 0x1ddb14: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1DDB14u;
    SET_GPR_U32(ctx, 31, 0x1DDB1Cu);
    ctx->pc = 0x1DDB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDB14u;
            // 0x1ddb18: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB1Cu; }
        if (ctx->pc != 0x1DDB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB1Cu; }
        if (ctx->pc != 0x1DDB1Cu) { return; }
    }
    ctx->pc = 0x1DDB1Cu;
    // 0x1ddb1c: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ddb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ddb20: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ddb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1ddb24: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ddb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ddb28: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ddb28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ddb2c: 0x26260005  addiu       $a2, $s1, 0x5
    ctx->pc = 0x1ddb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    // 0x1ddb30: 0x2484ffd3  addiu       $a0, $a0, -0x2D
    ctx->pc = 0x1ddb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967251));
    // 0x1ddb34: 0xc065480  jal         func_195200
    ctx->pc = 0x1DDB34u;
    SET_GPR_U32(ctx, 31, 0x1DDB3Cu);
    ctx->pc = 0x1DDB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDB34u;
            // 0x1ddb38: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB3Cu; }
        if (ctx->pc != 0x1DDB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB3Cu; }
        if (ctx->pc != 0x1DDB3Cu) { return; }
    }
    ctx->pc = 0x1DDB3Cu;
    // 0x1ddb3c: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ddb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ddb40: 0x24020073  addiu       $v0, $zero, 0x73
    ctx->pc = 0x1ddb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x1ddb44: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ddb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ddb48: 0x519023  subu        $s2, $v0, $s1
    ctx->pc = 0x1ddb48u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ddb4c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ddb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1ddb50: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ddb50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddb54: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ddb54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ddb58: 0x2484ffd3  addiu       $a0, $a0, -0x2D
    ctx->pc = 0x1ddb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967251));
    // 0x1ddb5c: 0xc065480  jal         func_195200
    ctx->pc = 0x1DDB5Cu;
    SET_GPR_U32(ctx, 31, 0x1DDB64u);
    ctx->pc = 0x1DDB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDB5Cu;
            // 0x1ddb60: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB64u; }
        if (ctx->pc != 0x1DDB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB64u; }
        if (ctx->pc != 0x1DDB64u) { return; }
    }
    ctx->pc = 0x1DDB64u;
    // 0x1ddb64: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1ddb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ddb68: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ddb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ddb6c: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x1ddb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1ddb70: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1DDB70u;
    SET_GPR_U32(ctx, 31, 0x1DDB78u);
    ctx->pc = 0x1DDB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDB70u;
            // 0x1ddb74: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB78u; }
        if (ctx->pc != 0x1DDB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB78u; }
        if (ctx->pc != 0x1DDB78u) { return; }
    }
    ctx->pc = 0x1DDB78u;
    // 0x1ddb78: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ddb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ddb7c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ddb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1ddb80: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ddb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ddb84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ddb84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ddb88: 0x26260005  addiu       $a2, $s1, 0x5
    ctx->pc = 0x1ddb88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    // 0x1ddb8c: 0x2484002d  addiu       $a0, $a0, 0x2D
    ctx->pc = 0x1ddb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 45));
    // 0x1ddb90: 0xc065480  jal         func_195200
    ctx->pc = 0x1DDB90u;
    SET_GPR_U32(ctx, 31, 0x1DDB98u);
    ctx->pc = 0x1DDB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDB90u;
            // 0x1ddb94: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB98u; }
        if (ctx->pc != 0x1DDB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB98u; }
        if (ctx->pc != 0x1DDB98u) { return; }
    }
    ctx->pc = 0x1DDB98u;
    // 0x1ddb98: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ddb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ddb9c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ddb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1ddba0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ddba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ddba4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ddba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ddba8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ddba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddbac: 0x2484002d  addiu       $a0, $a0, 0x2D
    ctx->pc = 0x1ddbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 45));
    // 0x1ddbb0: 0xc065480  jal         func_195200
    ctx->pc = 0x1DDBB0u;
    SET_GPR_U32(ctx, 31, 0x1DDBB8u);
    ctx->pc = 0x1DDBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDBB0u;
            // 0x1ddbb4: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDBB8u; }
        if (ctx->pc != 0x1DDBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDBB8u; }
        if (ctx->pc != 0x1DDBB8u) { return; }
    }
    ctx->pc = 0x1DDBB8u;
    // 0x1ddbb8: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1ddbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ddbbc: 0x2841fc19  slti        $at, $v0, -0x3E7
    ctx->pc = 0x1ddbbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294966297) ? 1 : 0);
    // 0x1ddbc0: 0x14200493  bnez        $at, . + 4 + (0x493 << 2)
    ctx->pc = 0x1DDBC0u;
    {
        const bool branch_taken_0x1ddbc0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDBC0u;
            // 0x1ddbc4: 0x284103e8  slti        $at, $v0, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddbc0) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DDBC8u;
    // 0x1ddbc8: 0x10200491  beqz        $at, . + 4 + (0x491 << 2)
    ctx->pc = 0x1DDBC8u;
    {
        const bool branch_taken_0x1ddbc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDBC8u;
            // 0x1ddbcc: 0x2443ffd3  addiu       $v1, $v0, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967251));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddbc8) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DDBD0u;
    // 0x1ddbd0: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1ddbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1ddbd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ddbd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddbd8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ddbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ddbdc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1ddbdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ddbe0: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1ddbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1ddbe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ddbe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddbe8: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DDBE8u;
    SET_GPR_U32(ctx, 31, 0x1DDBF0u);
    ctx->pc = 0x1DDBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDBE8u;
            // 0x1ddbec: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDBF0u; }
        if (ctx->pc != 0x1DDBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDBF0u; }
        if (ctx->pc != 0x1DDBF0u) { return; }
    }
    ctx->pc = 0x1DDBF0u;
    // 0x1ddbf0: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1ddbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ddbf4: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1ddbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1ddbf8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ddbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ddbfc: 0x2463002d  addiu       $v1, $v1, 0x2D
    ctx->pc = 0x1ddbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1ddc00: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1ddc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1ddc04: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ddc04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ddc08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ddc08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddc0c: 0x0  nop
    ctx->pc = 0x1ddc0cu;
    // NOP
    // 0x1ddc10: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ddc10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ddc14: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DDC14u;
    SET_GPR_U32(ctx, 31, 0x1DDC1Cu);
    ctx->pc = 0x1DDC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDC14u;
            // 0x1ddc18: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDC1Cu; }
        if (ctx->pc != 0x1DDC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDC1Cu; }
        if (ctx->pc != 0x1DDC1Cu) { return; }
    }
    ctx->pc = 0x1DDC1Cu;
    // 0x1ddc1c: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1ddc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ddc20: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1ddc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1ddc24: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ddc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ddc28: 0x2463ff92  addiu       $v1, $v1, -0x6E
    ctx->pc = 0x1ddc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967186));
    // 0x1ddc2c: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x1ddc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1ddc30: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ddc30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ddc34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ddc34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddc38: 0x0  nop
    ctx->pc = 0x1ddc38u;
    // NOP
    // 0x1ddc3c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ddc3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ddc40: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DDC40u;
    SET_GPR_U32(ctx, 31, 0x1DDC48u);
    ctx->pc = 0x1DDC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDC40u;
            // 0x1ddc44: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDC48u; }
        if (ctx->pc != 0x1DDC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDC48u; }
        if (ctx->pc != 0x1DDC48u) { return; }
    }
    ctx->pc = 0x1DDC48u;
    // 0x1ddc48: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1ddc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ddc4c: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1ddc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1ddc50: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ddc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ddc54: 0x2463006e  addiu       $v1, $v1, 0x6E
    ctx->pc = 0x1ddc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
    // 0x1ddc58: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x1ddc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1ddc5c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ddc5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ddc60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ddc60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddc64: 0x0  nop
    ctx->pc = 0x1ddc64u;
    // NOP
    // 0x1ddc68: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ddc68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ddc6c: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DDC6Cu;
    SET_GPR_U32(ctx, 31, 0x1DDC74u);
    ctx->pc = 0x1DDC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDC6Cu;
            // 0x1ddc70: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDC74u; }
        if (ctx->pc != 0x1DDC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDC74u; }
        if (ctx->pc != 0x1DDC74u) { return; }
    }
    ctx->pc = 0x1DDC74u;
    // 0x1ddc74: 0x10000466  b           . + 4 + (0x466 << 2)
    ctx->pc = 0x1DDC74u;
    {
        const bool branch_taken_0x1ddc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddc74) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DDC7Cu;
    // 0x1ddc7c: 0x0  nop
    ctx->pc = 0x1ddc7cu;
    // NOP
label_1ddc80:
    // 0x1ddc80: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ddc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ddc84: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DDC84u;
    {
        const bool branch_taken_0x1ddc84 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1DDC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDC84u;
            // 0x1ddc88: 0x3052000f  andi        $s2, $v0, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 18, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc84) {
            ctx->pc = 0x1DDC98u;
            goto label_1ddc98;
        }
    }
    ctx->pc = 0x1DDC8Cu;
    // 0x1ddc8c: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DDC8Cu;
    {
        const bool branch_taken_0x1ddc8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddc8c) {
            ctx->pc = 0x1DDC98u;
            goto label_1ddc98;
        }
    }
    ctx->pc = 0x1DDC94u;
    // 0x1ddc94: 0x2652fff0  addiu       $s2, $s2, -0x10
    ctx->pc = 0x1ddc94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
label_1ddc98:
    // 0x1ddc98: 0x1640045d  bnez        $s2, . + 4 + (0x45D << 2)
    ctx->pc = 0x1DDC98u;
    {
        const bool branch_taken_0x1ddc98 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ddc98) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DDCA0u;
    // 0x1ddca0: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1ddca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ddca4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ddca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ddca8: 0x2464ff92  addiu       $a0, $v1, -0x6E
    ctx->pc = 0x1ddca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967186));
    // 0x1ddcac: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1DDCACu;
    SET_GPR_U32(ctx, 31, 0x1DDCB4u);
    ctx->pc = 0x1DDCB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDCACu;
            // 0x1ddcb0: 0x2445008c  addiu       $a1, $v0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDCB4u; }
        if (ctx->pc != 0x1DDCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDCB4u; }
        if (ctx->pc != 0x1DDCB4u) { return; }
    }
    ctx->pc = 0x1DDCB4u;
    // 0x1ddcb4: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ddcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ddcb8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ddcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1ddcbc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ddcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ddcc0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ddcc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ddcc4: 0x2646000a  addiu       $a2, $s2, 0xA
    ctx->pc = 0x1ddcc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
    // 0x1ddcc8: 0x2484ff92  addiu       $a0, $a0, -0x6E
    ctx->pc = 0x1ddcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967186));
    // 0x1ddccc: 0xc065480  jal         func_195200
    ctx->pc = 0x1DDCCCu;
    SET_GPR_U32(ctx, 31, 0x1DDCD4u);
    ctx->pc = 0x1DDCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDCCCu;
            // 0x1ddcd0: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDCD4u; }
        if (ctx->pc != 0x1DDCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDCD4u; }
        if (ctx->pc != 0x1DDCD4u) { return; }
    }
    ctx->pc = 0x1DDCD4u;
    // 0x1ddcd4: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ddcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ddcd8: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x1ddcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1ddcdc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ddcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ddce0: 0x528823  subu        $s1, $v0, $s2
    ctx->pc = 0x1ddce0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ddce4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ddce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1ddce8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ddce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddcec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ddcecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ddcf0: 0x2484ff92  addiu       $a0, $a0, -0x6E
    ctx->pc = 0x1ddcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967186));
    // 0x1ddcf4: 0xc065480  jal         func_195200
    ctx->pc = 0x1DDCF4u;
    SET_GPR_U32(ctx, 31, 0x1DDCFCu);
    ctx->pc = 0x1DDCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDCF4u;
            // 0x1ddcf8: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDCFCu; }
        if (ctx->pc != 0x1DDCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDCFCu; }
        if (ctx->pc != 0x1DDCFCu) { return; }
    }
    ctx->pc = 0x1DDCFCu;
    // 0x1ddcfc: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1ddcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ddd00: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ddd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ddd04: 0x2464006e  addiu       $a0, $v1, 0x6E
    ctx->pc = 0x1ddd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
    // 0x1ddd08: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1DDD08u;
    SET_GPR_U32(ctx, 31, 0x1DDD10u);
    ctx->pc = 0x1DDD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD08u;
            // 0x1ddd0c: 0x2445008c  addiu       $a1, $v0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD10u; }
        if (ctx->pc != 0x1DDD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD10u; }
        if (ctx->pc != 0x1DDD10u) { return; }
    }
    ctx->pc = 0x1DDD10u;
    // 0x1ddd10: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ddd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ddd14: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ddd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1ddd18: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ddd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ddd1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ddd1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ddd20: 0x2646000a  addiu       $a2, $s2, 0xA
    ctx->pc = 0x1ddd20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
    // 0x1ddd24: 0x2484006e  addiu       $a0, $a0, 0x6E
    ctx->pc = 0x1ddd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 110));
    // 0x1ddd28: 0xc065480  jal         func_195200
    ctx->pc = 0x1DDD28u;
    SET_GPR_U32(ctx, 31, 0x1DDD30u);
    ctx->pc = 0x1DDD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD28u;
            // 0x1ddd2c: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD30u; }
        if (ctx->pc != 0x1DDD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD30u; }
        if (ctx->pc != 0x1DDD30u) { return; }
    }
    ctx->pc = 0x1DDD30u;
    // 0x1ddd30: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ddd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ddd34: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ddd34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1ddd38: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ddd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ddd3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ddd3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ddd40: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ddd40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddd44: 0x2484006e  addiu       $a0, $a0, 0x6E
    ctx->pc = 0x1ddd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 110));
    // 0x1ddd48: 0xc065480  jal         func_195200
    ctx->pc = 0x1DDD48u;
    SET_GPR_U32(ctx, 31, 0x1DDD50u);
    ctx->pc = 0x1DDD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD48u;
            // 0x1ddd4c: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD50u; }
        if (ctx->pc != 0x1DDD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD50u; }
        if (ctx->pc != 0x1DDD50u) { return; }
    }
    ctx->pc = 0x1DDD50u;
    // 0x1ddd50: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1ddd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ddd54: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ddd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ddd58: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x1ddd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
    // 0x1ddd5c: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1DDD5Cu;
    SET_GPR_U32(ctx, 31, 0x1DDD64u);
    ctx->pc = 0x1DDD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD5Cu;
            // 0x1ddd60: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD64u; }
        if (ctx->pc != 0x1DDD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD64u; }
        if (ctx->pc != 0x1DDD64u) { return; }
    }
    ctx->pc = 0x1DDD64u;
    // 0x1ddd64: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ddd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ddd68: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ddd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1ddd6c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ddd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ddd70: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ddd70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ddd74: 0x26460005  addiu       $a2, $s2, 0x5
    ctx->pc = 0x1ddd74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
    // 0x1ddd78: 0x2484ffd3  addiu       $a0, $a0, -0x2D
    ctx->pc = 0x1ddd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967251));
    // 0x1ddd7c: 0xc065480  jal         func_195200
    ctx->pc = 0x1DDD7Cu;
    SET_GPR_U32(ctx, 31, 0x1DDD84u);
    ctx->pc = 0x1DDD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD7Cu;
            // 0x1ddd80: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD84u; }
        if (ctx->pc != 0x1DDD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD84u; }
        if (ctx->pc != 0x1DDD84u) { return; }
    }
    ctx->pc = 0x1DDD84u;
    // 0x1ddd84: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ddd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ddd88: 0x24020073  addiu       $v0, $zero, 0x73
    ctx->pc = 0x1ddd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x1ddd8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ddd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ddd90: 0x528823  subu        $s1, $v0, $s2
    ctx->pc = 0x1ddd90u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ddd94: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ddd94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1ddd98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ddd98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddd9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ddd9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ddda0: 0x2484ffd3  addiu       $a0, $a0, -0x2D
    ctx->pc = 0x1ddda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967251));
    // 0x1ddda4: 0xc065480  jal         func_195200
    ctx->pc = 0x1DDDA4u;
    SET_GPR_U32(ctx, 31, 0x1DDDACu);
    ctx->pc = 0x1DDDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDDA4u;
            // 0x1ddda8: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDDACu; }
        if (ctx->pc != 0x1DDDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDDACu; }
        if (ctx->pc != 0x1DDDACu) { return; }
    }
    ctx->pc = 0x1DDDACu;
    // 0x1dddac: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dddacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dddb0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dddb4: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x1dddb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1dddb8: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1DDDB8u;
    SET_GPR_U32(ctx, 31, 0x1DDDC0u);
    ctx->pc = 0x1DDDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDDB8u;
            // 0x1dddbc: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDDC0u; }
        if (ctx->pc != 0x1DDDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDDC0u; }
        if (ctx->pc != 0x1DDDC0u) { return; }
    }
    ctx->pc = 0x1DDDC0u;
    // 0x1dddc0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1dddc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dddc4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1dddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1dddc8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dddcc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dddccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dddd0: 0x26460005  addiu       $a2, $s2, 0x5
    ctx->pc = 0x1dddd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
    // 0x1dddd4: 0x2484002d  addiu       $a0, $a0, 0x2D
    ctx->pc = 0x1dddd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 45));
    // 0x1dddd8: 0xc065480  jal         func_195200
    ctx->pc = 0x1DDDD8u;
    SET_GPR_U32(ctx, 31, 0x1DDDE0u);
    ctx->pc = 0x1DDDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDDD8u;
            // 0x1ddddc: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDDE0u; }
        if (ctx->pc != 0x1DDDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDDE0u; }
        if (ctx->pc != 0x1DDDE0u) { return; }
    }
    ctx->pc = 0x1DDDE0u;
    // 0x1ddde0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ddde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ddde4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ddde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1ddde8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ddde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dddec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dddecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dddf0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1dddf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dddf4: 0x2484002d  addiu       $a0, $a0, 0x2D
    ctx->pc = 0x1dddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 45));
    // 0x1dddf8: 0xc065480  jal         func_195200
    ctx->pc = 0x1DDDF8u;
    SET_GPR_U32(ctx, 31, 0x1DDE00u);
    ctx->pc = 0x1DDDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDDF8u;
            // 0x1dddfc: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDE00u; }
        if (ctx->pc != 0x1DDE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDE00u; }
        if (ctx->pc != 0x1DDE00u) { return; }
    }
    ctx->pc = 0x1DDE00u;
    // 0x1dde00: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1dde00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dde04: 0x2841fc19  slti        $at, $v0, -0x3E7
    ctx->pc = 0x1dde04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294966297) ? 1 : 0);
    // 0x1dde08: 0x14200401  bnez        $at, . + 4 + (0x401 << 2)
    ctx->pc = 0x1DDE08u;
    {
        const bool branch_taken_0x1dde08 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDE08u;
            // 0x1dde0c: 0x284103e8  slti        $at, $v0, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde08) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DDE10u;
    // 0x1dde10: 0x102003ff  beqz        $at, . + 4 + (0x3FF << 2)
    ctx->pc = 0x1DDE10u;
    {
        const bool branch_taken_0x1dde10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDE10u;
            // 0x1dde14: 0x2443ffd3  addiu       $v1, $v0, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967251));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde10) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DDE18u;
    // 0x1dde18: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1dde18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1dde1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1dde1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dde20: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dde20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dde24: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1dde24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1dde28: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1dde28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1dde2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dde2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dde30: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DDE30u;
    SET_GPR_U32(ctx, 31, 0x1DDE38u);
    ctx->pc = 0x1DDE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDE30u;
            // 0x1dde34: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDE38u; }
        if (ctx->pc != 0x1DDE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDE38u; }
        if (ctx->pc != 0x1DDE38u) { return; }
    }
    ctx->pc = 0x1DDE38u;
    // 0x1dde38: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dde38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dde3c: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1dde3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1dde40: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dde40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dde44: 0x2463002d  addiu       $v1, $v1, 0x2D
    ctx->pc = 0x1dde44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1dde48: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1dde48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1dde4c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1dde4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dde50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dde50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dde54: 0x0  nop
    ctx->pc = 0x1dde54u;
    // NOP
    // 0x1dde58: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1dde58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1dde5c: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DDE5Cu;
    SET_GPR_U32(ctx, 31, 0x1DDE64u);
    ctx->pc = 0x1DDE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDE5Cu;
            // 0x1dde60: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDE64u; }
        if (ctx->pc != 0x1DDE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDE64u; }
        if (ctx->pc != 0x1DDE64u) { return; }
    }
    ctx->pc = 0x1DDE64u;
    // 0x1dde64: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dde64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dde68: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1dde68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1dde6c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dde6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dde70: 0x2463ff92  addiu       $v1, $v1, -0x6E
    ctx->pc = 0x1dde70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967186));
    // 0x1dde74: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x1dde74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1dde78: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1dde78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dde7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dde7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dde80: 0x0  nop
    ctx->pc = 0x1dde80u;
    // NOP
    // 0x1dde84: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1dde84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1dde88: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DDE88u;
    SET_GPR_U32(ctx, 31, 0x1DDE90u);
    ctx->pc = 0x1DDE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDE88u;
            // 0x1dde8c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDE90u; }
        if (ctx->pc != 0x1DDE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDE90u; }
        if (ctx->pc != 0x1DDE90u) { return; }
    }
    ctx->pc = 0x1DDE90u;
    // 0x1dde90: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1dde90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1dde94: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1dde94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1dde98: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dde98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dde9c: 0x2463006e  addiu       $v1, $v1, 0x6E
    ctx->pc = 0x1dde9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
    // 0x1ddea0: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x1ddea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1ddea4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ddea4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ddea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ddea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddeac: 0x0  nop
    ctx->pc = 0x1ddeacu;
    // NOP
    // 0x1ddeb0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ddeb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ddeb4: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DDEB4u;
    SET_GPR_U32(ctx, 31, 0x1DDEBCu);
    ctx->pc = 0x1DDEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDEB4u;
            // 0x1ddeb8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDEBCu; }
        if (ctx->pc != 0x1DDEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDEBCu; }
        if (ctx->pc != 0x1DDEBCu) { return; }
    }
    ctx->pc = 0x1DDEBCu;
    // 0x1ddebc: 0x100003d4  b           . + 4 + (0x3D4 << 2)
    ctx->pc = 0x1DDEBCu;
    {
        const bool branch_taken_0x1ddebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddebc) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DDEC4u;
    // 0x1ddec4: 0x0  nop
    ctx->pc = 0x1ddec4u;
    // NOP
label_1ddec8:
    // 0x1ddec8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ddec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ddecc: 0x1642000a  bne         $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1DDECCu;
    {
        const bool branch_taken_0x1ddecc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ddecc) {
            ctx->pc = 0x1DDEF8u;
            goto label_1ddef8;
        }
    }
    ctx->pc = 0x1DDED4u;
    // 0x1dded4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1dded4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1dded8: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x1dded8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x1ddedc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ddedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ddee0: 0x3c04c2c8  lui         $a0, 0xC2C8
    ctx->pc = 0x1ddee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49864 << 16));
    // 0x1ddee4: 0xac640124  sw          $a0, 0x124($v1)
    ctx->pc = 0x1ddee4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 292), GPR_U32(ctx, 4));
    // 0x1ddee8: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1ddee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1ddeec: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1ddeecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1ddef0: 0x100003c7  b           . + 4 + (0x3C7 << 2)
    ctx->pc = 0x1DDEF0u;
    {
        const bool branch_taken_0x1ddef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDEF0u;
            // 0x1ddef4: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddef0) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DDEF8u;
label_1ddef8:
    // 0x1ddef8: 0x3c033f59  lui         $v1, 0x3F59
    ctx->pc = 0x1ddef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16217 << 16));
    // 0x1ddefc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1ddefcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1ddf00: 0x3c05c2a0  lui         $a1, 0xC2A0
    ctx->pc = 0x1ddf00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49824 << 16));
    // 0x1ddf04: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ddf04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ddf08: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1ddf08u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1ddf0c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1ddf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ddf10: 0xac850124  sw          $a1, 0x124($a0)
    ctx->pc = 0x1ddf10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 5));
    // 0x1ddf14: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1ddf14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1ddf18: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1ddf18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1ddf1c: 0x100003bc  b           . + 4 + (0x3BC << 2)
    ctx->pc = 0x1DDF1Cu;
    {
        const bool branch_taken_0x1ddf1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDF1Cu;
            // 0x1ddf20: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddf1c) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DDF24u;
    // 0x1ddf24: 0x0  nop
    ctx->pc = 0x1ddf24u;
    // NOP
label_1ddf28:
    // 0x1ddf28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ddf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ddf2c: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1ddf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1ddf30: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1ddf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ddf34: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1ddf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ddf38: 0xc077de0  jal         func_1DF780
    ctx->pc = 0x1DDF38u;
    SET_GPR_U32(ctx, 31, 0x1DDF40u);
    ctx->pc = 0x1DDF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDF38u;
            // 0x1ddf3c: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF780u;
    if (runtime->hasFunction(0x1DF780u)) {
        auto targetFn = runtime->lookupFunction(0x1DF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDF40u; }
        if (ctx->pc != 0x1DDF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1df780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDF40u; }
        if (ctx->pc != 0x1DDF40u) { return; }
    }
    ctx->pc = 0x1DDF40u;
    // 0x1ddf40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ddf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ddf44: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x1ddf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x1ddf48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ddf48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddf4c: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1ddf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ddf50: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ddf50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ddf54: 0x450101da  bc1t        . + 4 + (0x1DA << 2)
    ctx->pc = 0x1DDF54u;
    {
        const bool branch_taken_0x1ddf54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DDF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDF54u;
            // 0x1ddf58: 0x24620120  addiu       $v0, $v1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddf54) {
            ctx->pc = 0x1DE6C0u;
            goto label_1de6c0;
        }
    }
    ctx->pc = 0x1DDF5Cu;
    // 0x1ddf5c: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1ddf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ddf60: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1ddf60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1ddf64: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1ddf64u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1ddf68: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ddf68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ddf6c: 0x3c023bb4  lui         $v0, 0x3BB4
    ctx->pc = 0x1ddf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15284 << 16));
    // 0x1ddf70: 0x34423958  ori         $v0, $v0, 0x3958
    ctx->pc = 0x1ddf70u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)14680u)));
    // 0x1ddf74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ddf74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddf78: 0x0  nop
    ctx->pc = 0x1ddf78u;
    // NOP
    // 0x1ddf7c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1ddf7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1ddf80: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x1ddf80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1ddf84: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1ddf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ddf88: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ddf88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ddf8c: 0xc065d00  jal         func_197400
    ctx->pc = 0x1DDF8Cu;
    SET_GPR_U32(ctx, 31, 0x1DDF94u);
    ctx->pc = 0x1DDF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDF8Cu;
            // 0x1ddf90: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDF94u; }
        if (ctx->pc != 0x1DDF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDF94u; }
        if (ctx->pc != 0x1DDF94u) { return; }
    }
    ctx->pc = 0x1DDF94u;
    // 0x1ddf94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ddf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ddf98: 0x14430097  bne         $v0, $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x1DDF98u;
    {
        const bool branch_taken_0x1ddf98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ddf98) {
            ctx->pc = 0x1DE1F8u;
            goto label_1de1f8;
        }
    }
    ctx->pc = 0x1DDFA0u;
    // 0x1ddfa0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ddfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ddfa4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ddfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ddfa8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1ddfa8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ddfac: 0x0  nop
    ctx->pc = 0x1ddfacu;
    // NOP
    // 0x1ddfb0: 0x0  nop
    ctx->pc = 0x1ddfb0u;
    // NOP
    // 0x1ddfb4: 0x1010  mfhi        $v0
    ctx->pc = 0x1ddfb4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ddfb8: 0x14400395  bnez        $v0, . + 4 + (0x395 << 2)
    ctx->pc = 0x1DDFB8u;
    {
        const bool branch_taken_0x1ddfb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDFB8u;
            // 0x1ddfbc: 0x3071000f  andi        $s1, $v1, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddfb8) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DDFC0u;
    // 0x1ddfc0: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DDFC0u;
    {
        const bool branch_taken_0x1ddfc0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1ddfc0) {
            ctx->pc = 0x1DDFD4u;
            goto label_1ddfd4;
        }
    }
    ctx->pc = 0x1DDFC8u;
    // 0x1ddfc8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DDFC8u;
    {
        const bool branch_taken_0x1ddfc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddfc8) {
            ctx->pc = 0x1DDFD4u;
            goto label_1ddfd4;
        }
    }
    ctx->pc = 0x1DDFD0u;
    // 0x1ddfd0: 0x2631fff0  addiu       $s1, $s1, -0x10
    ctx->pc = 0x1ddfd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_1ddfd4:
    // 0x1ddfd4: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1ddfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ddfd8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ddfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ddfdc: 0x2464ff92  addiu       $a0, $v1, -0x6E
    ctx->pc = 0x1ddfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967186));
    // 0x1ddfe0: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1DDFE0u;
    SET_GPR_U32(ctx, 31, 0x1DDFE8u);
    ctx->pc = 0x1DDFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDFE0u;
            // 0x1ddfe4: 0x2445008c  addiu       $a1, $v0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDFE8u; }
        if (ctx->pc != 0x1DDFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDFE8u; }
        if (ctx->pc != 0x1DDFE8u) { return; }
    }
    ctx->pc = 0x1DDFE8u;
    // 0x1ddfe8: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ddfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ddfec: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ddfecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1ddff0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ddff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ddff4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ddff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ddff8: 0x2626000a  addiu       $a2, $s1, 0xA
    ctx->pc = 0x1ddff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
    // 0x1ddffc: 0x2484ff92  addiu       $a0, $a0, -0x6E
    ctx->pc = 0x1ddffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967186));
    // 0x1de000: 0xc065480  jal         func_195200
    ctx->pc = 0x1DE000u;
    SET_GPR_U32(ctx, 31, 0x1DE008u);
    ctx->pc = 0x1DE004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE000u;
            // 0x1de004: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE008u; }
        if (ctx->pc != 0x1DE008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE008u; }
        if (ctx->pc != 0x1DE008u) { return; }
    }
    ctx->pc = 0x1DE008u;
    // 0x1de008: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1de008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de00c: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x1de00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1de010: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1de010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de014: 0x519023  subu        $s2, $v0, $s1
    ctx->pc = 0x1de014u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1de018: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1de018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1de01c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1de01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de020: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1de020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1de024: 0x2484ff92  addiu       $a0, $a0, -0x6E
    ctx->pc = 0x1de024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967186));
    // 0x1de028: 0xc065480  jal         func_195200
    ctx->pc = 0x1DE028u;
    SET_GPR_U32(ctx, 31, 0x1DE030u);
    ctx->pc = 0x1DE02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE028u;
            // 0x1de02c: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE030u; }
        if (ctx->pc != 0x1DE030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE030u; }
        if (ctx->pc != 0x1DE030u) { return; }
    }
    ctx->pc = 0x1DE030u;
    // 0x1de030: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1de030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de034: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1de034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de038: 0x2464006e  addiu       $a0, $v1, 0x6E
    ctx->pc = 0x1de038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
    // 0x1de03c: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1DE03Cu;
    SET_GPR_U32(ctx, 31, 0x1DE044u);
    ctx->pc = 0x1DE040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE03Cu;
            // 0x1de040: 0x2445008c  addiu       $a1, $v0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE044u; }
        if (ctx->pc != 0x1DE044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE044u; }
        if (ctx->pc != 0x1DE044u) { return; }
    }
    ctx->pc = 0x1DE044u;
    // 0x1de044: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1de044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de048: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1de048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1de04c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1de04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de050: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1de050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1de054: 0x2626000a  addiu       $a2, $s1, 0xA
    ctx->pc = 0x1de054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
    // 0x1de058: 0x2484006e  addiu       $a0, $a0, 0x6E
    ctx->pc = 0x1de058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 110));
    // 0x1de05c: 0xc065480  jal         func_195200
    ctx->pc = 0x1DE05Cu;
    SET_GPR_U32(ctx, 31, 0x1DE064u);
    ctx->pc = 0x1DE060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE05Cu;
            // 0x1de060: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE064u; }
        if (ctx->pc != 0x1DE064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE064u; }
        if (ctx->pc != 0x1DE064u) { return; }
    }
    ctx->pc = 0x1DE064u;
    // 0x1de064: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1de064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de068: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1de068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1de06c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1de06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de070: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1de070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1de074: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1de074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de078: 0x2484006e  addiu       $a0, $a0, 0x6E
    ctx->pc = 0x1de078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 110));
    // 0x1de07c: 0xc065480  jal         func_195200
    ctx->pc = 0x1DE07Cu;
    SET_GPR_U32(ctx, 31, 0x1DE084u);
    ctx->pc = 0x1DE080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE07Cu;
            // 0x1de080: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE084u; }
        if (ctx->pc != 0x1DE084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE084u; }
        if (ctx->pc != 0x1DE084u) { return; }
    }
    ctx->pc = 0x1DE084u;
    // 0x1de084: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1de084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de088: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1de088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de08c: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x1de08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
    // 0x1de090: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1DE090u;
    SET_GPR_U32(ctx, 31, 0x1DE098u);
    ctx->pc = 0x1DE094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE090u;
            // 0x1de094: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE098u; }
        if (ctx->pc != 0x1DE098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE098u; }
        if (ctx->pc != 0x1DE098u) { return; }
    }
    ctx->pc = 0x1DE098u;
    // 0x1de098: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1de098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de09c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1de09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1de0a0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1de0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de0a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1de0a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1de0a8: 0x26260005  addiu       $a2, $s1, 0x5
    ctx->pc = 0x1de0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    // 0x1de0ac: 0x2484ffd3  addiu       $a0, $a0, -0x2D
    ctx->pc = 0x1de0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967251));
    // 0x1de0b0: 0xc065480  jal         func_195200
    ctx->pc = 0x1DE0B0u;
    SET_GPR_U32(ctx, 31, 0x1DE0B8u);
    ctx->pc = 0x1DE0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE0B0u;
            // 0x1de0b4: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE0B8u; }
        if (ctx->pc != 0x1DE0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE0B8u; }
        if (ctx->pc != 0x1DE0B8u) { return; }
    }
    ctx->pc = 0x1DE0B8u;
    // 0x1de0b8: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1de0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de0bc: 0x24020073  addiu       $v0, $zero, 0x73
    ctx->pc = 0x1de0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x1de0c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1de0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de0c4: 0x519023  subu        $s2, $v0, $s1
    ctx->pc = 0x1de0c4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1de0c8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1de0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1de0cc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1de0ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de0d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1de0d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1de0d4: 0x2484ffd3  addiu       $a0, $a0, -0x2D
    ctx->pc = 0x1de0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967251));
    // 0x1de0d8: 0xc065480  jal         func_195200
    ctx->pc = 0x1DE0D8u;
    SET_GPR_U32(ctx, 31, 0x1DE0E0u);
    ctx->pc = 0x1DE0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE0D8u;
            // 0x1de0dc: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE0E0u; }
        if (ctx->pc != 0x1DE0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE0E0u; }
        if (ctx->pc != 0x1DE0E0u) { return; }
    }
    ctx->pc = 0x1DE0E0u;
    // 0x1de0e0: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1de0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de0e4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1de0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de0e8: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x1de0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1de0ec: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1DE0ECu;
    SET_GPR_U32(ctx, 31, 0x1DE0F4u);
    ctx->pc = 0x1DE0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE0ECu;
            // 0x1de0f0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE0F4u; }
        if (ctx->pc != 0x1DE0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE0F4u; }
        if (ctx->pc != 0x1DE0F4u) { return; }
    }
    ctx->pc = 0x1DE0F4u;
    // 0x1de0f4: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1de0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de0f8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1de0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1de0fc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1de0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de100: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1de100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1de104: 0x26260005  addiu       $a2, $s1, 0x5
    ctx->pc = 0x1de104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    // 0x1de108: 0x2484002d  addiu       $a0, $a0, 0x2D
    ctx->pc = 0x1de108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 45));
    // 0x1de10c: 0xc065480  jal         func_195200
    ctx->pc = 0x1DE10Cu;
    SET_GPR_U32(ctx, 31, 0x1DE114u);
    ctx->pc = 0x1DE110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE10Cu;
            // 0x1de110: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE114u; }
        if (ctx->pc != 0x1DE114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE114u; }
        if (ctx->pc != 0x1DE114u) { return; }
    }
    ctx->pc = 0x1DE114u;
    // 0x1de114: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1de114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de118: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1de118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1de11c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1de11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de120: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1de120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1de124: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1de124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de128: 0x2484002d  addiu       $a0, $a0, 0x2D
    ctx->pc = 0x1de128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 45));
    // 0x1de12c: 0xc065480  jal         func_195200
    ctx->pc = 0x1DE12Cu;
    SET_GPR_U32(ctx, 31, 0x1DE134u);
    ctx->pc = 0x1DE130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE12Cu;
            // 0x1de130: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE134u; }
        if (ctx->pc != 0x1DE134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE134u; }
        if (ctx->pc != 0x1DE134u) { return; }
    }
    ctx->pc = 0x1DE134u;
    // 0x1de134: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1de134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de138: 0x2841fc19  slti        $at, $v0, -0x3E7
    ctx->pc = 0x1de138u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294966297) ? 1 : 0);
    // 0x1de13c: 0x14200334  bnez        $at, . + 4 + (0x334 << 2)
    ctx->pc = 0x1DE13Cu;
    {
        const bool branch_taken_0x1de13c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE13Cu;
            // 0x1de140: 0x284103e8  slti        $at, $v0, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de13c) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DE144u;
    // 0x1de144: 0x10200332  beqz        $at, . + 4 + (0x332 << 2)
    ctx->pc = 0x1DE144u;
    {
        const bool branch_taken_0x1de144 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE144u;
            // 0x1de148: 0x2443ffd3  addiu       $v1, $v0, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967251));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de144) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DE14Cu;
    // 0x1de14c: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1de14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1de150: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1de150u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de154: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1de154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de158: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1de158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1de15c: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1de15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1de160: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de164: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DE164u;
    SET_GPR_U32(ctx, 31, 0x1DE16Cu);
    ctx->pc = 0x1DE168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE164u;
            // 0x1de168: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE16Cu; }
        if (ctx->pc != 0x1DE16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE16Cu; }
        if (ctx->pc != 0x1DE16Cu) { return; }
    }
    ctx->pc = 0x1DE16Cu;
    // 0x1de16c: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1de16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de170: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1de170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1de174: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1de174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de178: 0x2463002d  addiu       $v1, $v1, 0x2D
    ctx->pc = 0x1de178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1de17c: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1de17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1de180: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1de180u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1de184: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de188: 0x0  nop
    ctx->pc = 0x1de188u;
    // NOP
    // 0x1de18c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1de18cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1de190: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DE190u;
    SET_GPR_U32(ctx, 31, 0x1DE198u);
    ctx->pc = 0x1DE194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE190u;
            // 0x1de194: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE198u; }
        if (ctx->pc != 0x1DE198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE198u; }
        if (ctx->pc != 0x1DE198u) { return; }
    }
    ctx->pc = 0x1DE198u;
    // 0x1de198: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1de198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de19c: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1de19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1de1a0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1de1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de1a4: 0x2463ff92  addiu       $v1, $v1, -0x6E
    ctx->pc = 0x1de1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967186));
    // 0x1de1a8: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x1de1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1de1ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1de1acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1de1b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de1b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de1b4: 0x0  nop
    ctx->pc = 0x1de1b4u;
    // NOP
    // 0x1de1b8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1de1b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1de1bc: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DE1BCu;
    SET_GPR_U32(ctx, 31, 0x1DE1C4u);
    ctx->pc = 0x1DE1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE1BCu;
            // 0x1de1c0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE1C4u; }
        if (ctx->pc != 0x1DE1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE1C4u; }
        if (ctx->pc != 0x1DE1C4u) { return; }
    }
    ctx->pc = 0x1DE1C4u;
    // 0x1de1c4: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1de1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de1c8: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1de1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1de1cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1de1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de1d0: 0x2463006e  addiu       $v1, $v1, 0x6E
    ctx->pc = 0x1de1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
    // 0x1de1d4: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x1de1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1de1d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1de1d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1de1dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de1dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de1e0: 0x0  nop
    ctx->pc = 0x1de1e0u;
    // NOP
    // 0x1de1e4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1de1e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1de1e8: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DE1E8u;
    SET_GPR_U32(ctx, 31, 0x1DE1F0u);
    ctx->pc = 0x1DE1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE1E8u;
            // 0x1de1ec: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE1F0u; }
        if (ctx->pc != 0x1DE1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE1F0u; }
        if (ctx->pc != 0x1DE1F0u) { return; }
    }
    ctx->pc = 0x1DE1F0u;
    // 0x1de1f0: 0x10000307  b           . + 4 + (0x307 << 2)
    ctx->pc = 0x1DE1F0u;
    {
        const bool branch_taken_0x1de1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de1f0) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DE1F8u;
label_1de1f8:
    // 0x1de1f8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1DE1F8u;
    SET_GPR_U32(ctx, 31, 0x1DE200u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE200u; }
        if (ctx->pc != 0x1DE200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE200u; }
        if (ctx->pc != 0x1DE200u) { return; }
    }
    ctx->pc = 0x1DE200u;
    // 0x1de200: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1de200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de204: 0x14430098  bne         $v0, $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x1DE204u;
    {
        const bool branch_taken_0x1de204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1de204) {
            ctx->pc = 0x1DE468u;
            goto label_1de468;
        }
    }
    ctx->pc = 0x1DE20Cu;
    // 0x1de20c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1de20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1de210: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1de210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1de214: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1de214u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1de218: 0x0  nop
    ctx->pc = 0x1de218u;
    // NOP
    // 0x1de21c: 0x0  nop
    ctx->pc = 0x1de21cu;
    // NOP
    // 0x1de220: 0x1010  mfhi        $v0
    ctx->pc = 0x1de220u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1de224: 0x144002fa  bnez        $v0, . + 4 + (0x2FA << 2)
    ctx->pc = 0x1DE224u;
    {
        const bool branch_taken_0x1de224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE224u;
            // 0x1de228: 0x3071000f  andi        $s1, $v1, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de224) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DE22Cu;
    // 0x1de22c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE22Cu;
    {
        const bool branch_taken_0x1de22c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1de22c) {
            ctx->pc = 0x1DE240u;
            goto label_1de240;
        }
    }
    ctx->pc = 0x1DE234u;
    // 0x1de234: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DE234u;
    {
        const bool branch_taken_0x1de234 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de234) {
            ctx->pc = 0x1DE240u;
            goto label_1de240;
        }
    }
    ctx->pc = 0x1DE23Cu;
    // 0x1de23c: 0x2631fff0  addiu       $s1, $s1, -0x10
    ctx->pc = 0x1de23cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_1de240:
    // 0x1de240: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1de240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de244: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1de244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de248: 0x2464ff92  addiu       $a0, $v1, -0x6E
    ctx->pc = 0x1de248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967186));
    // 0x1de24c: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1DE24Cu;
    SET_GPR_U32(ctx, 31, 0x1DE254u);
    ctx->pc = 0x1DE250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE24Cu;
            // 0x1de250: 0x2445008c  addiu       $a1, $v0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE254u; }
        if (ctx->pc != 0x1DE254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE254u; }
        if (ctx->pc != 0x1DE254u) { return; }
    }
    ctx->pc = 0x1DE254u;
    // 0x1de254: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1de254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de258: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1de258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1de25c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1de25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de260: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1de260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1de264: 0x2626000a  addiu       $a2, $s1, 0xA
    ctx->pc = 0x1de264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
    // 0x1de268: 0x2484ff92  addiu       $a0, $a0, -0x6E
    ctx->pc = 0x1de268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967186));
    // 0x1de26c: 0xc065480  jal         func_195200
    ctx->pc = 0x1DE26Cu;
    SET_GPR_U32(ctx, 31, 0x1DE274u);
    ctx->pc = 0x1DE270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE26Cu;
            // 0x1de270: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE274u; }
        if (ctx->pc != 0x1DE274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE274u; }
        if (ctx->pc != 0x1DE274u) { return; }
    }
    ctx->pc = 0x1DE274u;
    // 0x1de274: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1de274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de278: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x1de278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1de27c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1de27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de280: 0x519023  subu        $s2, $v0, $s1
    ctx->pc = 0x1de280u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1de284: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1de284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1de288: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1de288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de28c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1de28cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1de290: 0x2484ff92  addiu       $a0, $a0, -0x6E
    ctx->pc = 0x1de290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967186));
    // 0x1de294: 0xc065480  jal         func_195200
    ctx->pc = 0x1DE294u;
    SET_GPR_U32(ctx, 31, 0x1DE29Cu);
    ctx->pc = 0x1DE298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE294u;
            // 0x1de298: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE29Cu; }
        if (ctx->pc != 0x1DE29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE29Cu; }
        if (ctx->pc != 0x1DE29Cu) { return; }
    }
    ctx->pc = 0x1DE29Cu;
    // 0x1de29c: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1de29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de2a0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1de2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de2a4: 0x2464006e  addiu       $a0, $v1, 0x6E
    ctx->pc = 0x1de2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
    // 0x1de2a8: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1DE2A8u;
    SET_GPR_U32(ctx, 31, 0x1DE2B0u);
    ctx->pc = 0x1DE2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE2A8u;
            // 0x1de2ac: 0x2445008c  addiu       $a1, $v0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE2B0u; }
        if (ctx->pc != 0x1DE2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE2B0u; }
        if (ctx->pc != 0x1DE2B0u) { return; }
    }
    ctx->pc = 0x1DE2B0u;
    // 0x1de2b0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1de2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de2b4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1de2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1de2b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1de2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de2bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1de2bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1de2c0: 0x2626000a  addiu       $a2, $s1, 0xA
    ctx->pc = 0x1de2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
    // 0x1de2c4: 0x2484006e  addiu       $a0, $a0, 0x6E
    ctx->pc = 0x1de2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 110));
    // 0x1de2c8: 0xc065480  jal         func_195200
    ctx->pc = 0x1DE2C8u;
    SET_GPR_U32(ctx, 31, 0x1DE2D0u);
    ctx->pc = 0x1DE2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE2C8u;
            // 0x1de2cc: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE2D0u; }
        if (ctx->pc != 0x1DE2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE2D0u; }
        if (ctx->pc != 0x1DE2D0u) { return; }
    }
    ctx->pc = 0x1DE2D0u;
    // 0x1de2d0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1de2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de2d4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1de2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1de2d8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1de2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de2dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1de2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1de2e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1de2e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de2e4: 0x2484006e  addiu       $a0, $a0, 0x6E
    ctx->pc = 0x1de2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 110));
    // 0x1de2e8: 0xc065480  jal         func_195200
    ctx->pc = 0x1DE2E8u;
    SET_GPR_U32(ctx, 31, 0x1DE2F0u);
    ctx->pc = 0x1DE2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE2E8u;
            // 0x1de2ec: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE2F0u; }
        if (ctx->pc != 0x1DE2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE2F0u; }
        if (ctx->pc != 0x1DE2F0u) { return; }
    }
    ctx->pc = 0x1DE2F0u;
    // 0x1de2f0: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1de2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de2f4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1de2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de2f8: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x1de2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
    // 0x1de2fc: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1DE2FCu;
    SET_GPR_U32(ctx, 31, 0x1DE304u);
    ctx->pc = 0x1DE300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE2FCu;
            // 0x1de300: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE304u; }
        if (ctx->pc != 0x1DE304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE304u; }
        if (ctx->pc != 0x1DE304u) { return; }
    }
    ctx->pc = 0x1DE304u;
    // 0x1de304: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1de304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de308: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1de308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1de30c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1de30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de310: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1de310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1de314: 0x26260005  addiu       $a2, $s1, 0x5
    ctx->pc = 0x1de314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    // 0x1de318: 0x2484ffd3  addiu       $a0, $a0, -0x2D
    ctx->pc = 0x1de318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967251));
    // 0x1de31c: 0xc065480  jal         func_195200
    ctx->pc = 0x1DE31Cu;
    SET_GPR_U32(ctx, 31, 0x1DE324u);
    ctx->pc = 0x1DE320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE31Cu;
            // 0x1de320: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE324u; }
        if (ctx->pc != 0x1DE324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE324u; }
        if (ctx->pc != 0x1DE324u) { return; }
    }
    ctx->pc = 0x1DE324u;
    // 0x1de324: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1de324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de328: 0x24020073  addiu       $v0, $zero, 0x73
    ctx->pc = 0x1de328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x1de32c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1de32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de330: 0x519023  subu        $s2, $v0, $s1
    ctx->pc = 0x1de330u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1de334: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1de334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1de338: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1de338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de33c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1de33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1de340: 0x2484ffd3  addiu       $a0, $a0, -0x2D
    ctx->pc = 0x1de340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967251));
    // 0x1de344: 0xc065480  jal         func_195200
    ctx->pc = 0x1DE344u;
    SET_GPR_U32(ctx, 31, 0x1DE34Cu);
    ctx->pc = 0x1DE348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE344u;
            // 0x1de348: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE34Cu; }
        if (ctx->pc != 0x1DE34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE34Cu; }
        if (ctx->pc != 0x1DE34Cu) { return; }
    }
    ctx->pc = 0x1DE34Cu;
    // 0x1de34c: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1de34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de350: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1de350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de354: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x1de354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1de358: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1DE358u;
    SET_GPR_U32(ctx, 31, 0x1DE360u);
    ctx->pc = 0x1DE35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE358u;
            // 0x1de35c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE360u; }
        if (ctx->pc != 0x1DE360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE360u; }
        if (ctx->pc != 0x1DE360u) { return; }
    }
    ctx->pc = 0x1DE360u;
    // 0x1de360: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1de360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de364: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1de364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1de368: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1de368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de36c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1de36cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1de370: 0x26260005  addiu       $a2, $s1, 0x5
    ctx->pc = 0x1de370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    // 0x1de374: 0x2484002d  addiu       $a0, $a0, 0x2D
    ctx->pc = 0x1de374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 45));
    // 0x1de378: 0xc065480  jal         func_195200
    ctx->pc = 0x1DE378u;
    SET_GPR_U32(ctx, 31, 0x1DE380u);
    ctx->pc = 0x1DE37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE378u;
            // 0x1de37c: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE380u; }
        if (ctx->pc != 0x1DE380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE380u; }
        if (ctx->pc != 0x1DE380u) { return; }
    }
    ctx->pc = 0x1DE380u;
    // 0x1de380: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1de380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de384: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1de384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1de388: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1de388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de38c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1de38cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1de390: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1de390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de394: 0x2484002d  addiu       $a0, $a0, 0x2D
    ctx->pc = 0x1de394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 45));
    // 0x1de398: 0xc065480  jal         func_195200
    ctx->pc = 0x1DE398u;
    SET_GPR_U32(ctx, 31, 0x1DE3A0u);
    ctx->pc = 0x1DE39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE398u;
            // 0x1de39c: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE3A0u; }
        if (ctx->pc != 0x1DE3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE3A0u; }
        if (ctx->pc != 0x1DE3A0u) { return; }
    }
    ctx->pc = 0x1DE3A0u;
    // 0x1de3a0: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1de3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de3a4: 0x2841fc19  slti        $at, $v0, -0x3E7
    ctx->pc = 0x1de3a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294966297) ? 1 : 0);
    // 0x1de3a8: 0x14200299  bnez        $at, . + 4 + (0x299 << 2)
    ctx->pc = 0x1DE3A8u;
    {
        const bool branch_taken_0x1de3a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE3A8u;
            // 0x1de3ac: 0x284103e8  slti        $at, $v0, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de3a8) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DE3B0u;
    // 0x1de3b0: 0x10200297  beqz        $at, . + 4 + (0x297 << 2)
    ctx->pc = 0x1DE3B0u;
    {
        const bool branch_taken_0x1de3b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE3B0u;
            // 0x1de3b4: 0x2443ffd3  addiu       $v1, $v0, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967251));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de3b0) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DE3B8u;
    // 0x1de3b8: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1de3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1de3bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1de3bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de3c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1de3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de3c4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1de3c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1de3c8: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1de3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1de3cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de3ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de3d0: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DE3D0u;
    SET_GPR_U32(ctx, 31, 0x1DE3D8u);
    ctx->pc = 0x1DE3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE3D0u;
            // 0x1de3d4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE3D8u; }
        if (ctx->pc != 0x1DE3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE3D8u; }
        if (ctx->pc != 0x1DE3D8u) { return; }
    }
    ctx->pc = 0x1DE3D8u;
    // 0x1de3d8: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1de3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de3dc: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1de3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1de3e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1de3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de3e4: 0x2463002d  addiu       $v1, $v1, 0x2D
    ctx->pc = 0x1de3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1de3e8: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1de3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1de3ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1de3ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1de3f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de3f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de3f4: 0x0  nop
    ctx->pc = 0x1de3f4u;
    // NOP
    // 0x1de3f8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1de3f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1de3fc: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DE3FCu;
    SET_GPR_U32(ctx, 31, 0x1DE404u);
    ctx->pc = 0x1DE400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE3FCu;
            // 0x1de400: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE404u; }
        if (ctx->pc != 0x1DE404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE404u; }
        if (ctx->pc != 0x1DE404u) { return; }
    }
    ctx->pc = 0x1DE404u;
    // 0x1de404: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1de404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de408: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1de408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1de40c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1de40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de410: 0x2463ff92  addiu       $v1, $v1, -0x6E
    ctx->pc = 0x1de410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967186));
    // 0x1de414: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x1de414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1de418: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1de418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1de41c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de41cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de420: 0x0  nop
    ctx->pc = 0x1de420u;
    // NOP
    // 0x1de424: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1de424u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1de428: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DE428u;
    SET_GPR_U32(ctx, 31, 0x1DE430u);
    ctx->pc = 0x1DE42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE428u;
            // 0x1de42c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE430u; }
        if (ctx->pc != 0x1DE430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE430u; }
        if (ctx->pc != 0x1DE430u) { return; }
    }
    ctx->pc = 0x1DE430u;
    // 0x1de430: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1de430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de434: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1de434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1de438: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1de438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de43c: 0x2463006e  addiu       $v1, $v1, 0x6E
    ctx->pc = 0x1de43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
    // 0x1de440: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x1de440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1de444: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1de444u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1de448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de44c: 0x0  nop
    ctx->pc = 0x1de44cu;
    // NOP
    // 0x1de450: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1de450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1de454: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DE454u;
    SET_GPR_U32(ctx, 31, 0x1DE45Cu);
    ctx->pc = 0x1DE458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE454u;
            // 0x1de458: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE45Cu; }
        if (ctx->pc != 0x1DE45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE45Cu; }
        if (ctx->pc != 0x1DE45Cu) { return; }
    }
    ctx->pc = 0x1DE45Cu;
    // 0x1de45c: 0x1000026c  b           . + 4 + (0x26C << 2)
    ctx->pc = 0x1DE45Cu;
    {
        const bool branch_taken_0x1de45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de45c) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DE464u;
    // 0x1de464: 0x0  nop
    ctx->pc = 0x1de464u;
    // NOP
label_1de468:
    // 0x1de468: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1de468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1de46c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1de46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1de470: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1de470u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1de474: 0x0  nop
    ctx->pc = 0x1de474u;
    // NOP
    // 0x1de478: 0x0  nop
    ctx->pc = 0x1de478u;
    // NOP
    // 0x1de47c: 0x1010  mfhi        $v0
    ctx->pc = 0x1de47cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1de480: 0x14400263  bnez        $v0, . + 4 + (0x263 << 2)
    ctx->pc = 0x1DE480u;
    {
        const bool branch_taken_0x1de480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE480u;
            // 0x1de484: 0x3071000f  andi        $s1, $v1, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de480) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DE488u;
    // 0x1de488: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE488u;
    {
        const bool branch_taken_0x1de488 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1de488) {
            ctx->pc = 0x1DE49Cu;
            goto label_1de49c;
        }
    }
    ctx->pc = 0x1DE490u;
    // 0x1de490: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DE490u;
    {
        const bool branch_taken_0x1de490 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de490) {
            ctx->pc = 0x1DE49Cu;
            goto label_1de49c;
        }
    }
    ctx->pc = 0x1DE498u;
    // 0x1de498: 0x2631fff0  addiu       $s1, $s1, -0x10
    ctx->pc = 0x1de498u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_1de49c:
    // 0x1de49c: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1de49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de4a0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1de4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de4a4: 0x2464ff92  addiu       $a0, $v1, -0x6E
    ctx->pc = 0x1de4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967186));
    // 0x1de4a8: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1DE4A8u;
    SET_GPR_U32(ctx, 31, 0x1DE4B0u);
    ctx->pc = 0x1DE4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE4A8u;
            // 0x1de4ac: 0x2445008c  addiu       $a1, $v0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE4B0u; }
        if (ctx->pc != 0x1DE4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE4B0u; }
        if (ctx->pc != 0x1DE4B0u) { return; }
    }
    ctx->pc = 0x1DE4B0u;
    // 0x1de4b0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1de4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de4b4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1de4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1de4b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1de4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de4bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1de4bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1de4c0: 0x2626000a  addiu       $a2, $s1, 0xA
    ctx->pc = 0x1de4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
    // 0x1de4c4: 0x2484ff92  addiu       $a0, $a0, -0x6E
    ctx->pc = 0x1de4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967186));
    // 0x1de4c8: 0xc065480  jal         func_195200
    ctx->pc = 0x1DE4C8u;
    SET_GPR_U32(ctx, 31, 0x1DE4D0u);
    ctx->pc = 0x1DE4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE4C8u;
            // 0x1de4cc: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE4D0u; }
        if (ctx->pc != 0x1DE4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE4D0u; }
        if (ctx->pc != 0x1DE4D0u) { return; }
    }
    ctx->pc = 0x1DE4D0u;
    // 0x1de4d0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1de4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de4d4: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x1de4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1de4d8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1de4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de4dc: 0x519023  subu        $s2, $v0, $s1
    ctx->pc = 0x1de4dcu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1de4e0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1de4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1de4e4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1de4e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de4e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1de4e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1de4ec: 0x2484ff92  addiu       $a0, $a0, -0x6E
    ctx->pc = 0x1de4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967186));
    // 0x1de4f0: 0xc065480  jal         func_195200
    ctx->pc = 0x1DE4F0u;
    SET_GPR_U32(ctx, 31, 0x1DE4F8u);
    ctx->pc = 0x1DE4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE4F0u;
            // 0x1de4f4: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE4F8u; }
        if (ctx->pc != 0x1DE4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE4F8u; }
        if (ctx->pc != 0x1DE4F8u) { return; }
    }
    ctx->pc = 0x1DE4F8u;
    // 0x1de4f8: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1de4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de4fc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1de4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de500: 0x2464006e  addiu       $a0, $v1, 0x6E
    ctx->pc = 0x1de500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
    // 0x1de504: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1DE504u;
    SET_GPR_U32(ctx, 31, 0x1DE50Cu);
    ctx->pc = 0x1DE508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE504u;
            // 0x1de508: 0x2445008c  addiu       $a1, $v0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE50Cu; }
        if (ctx->pc != 0x1DE50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE50Cu; }
        if (ctx->pc != 0x1DE50Cu) { return; }
    }
    ctx->pc = 0x1DE50Cu;
    // 0x1de50c: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1de50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de510: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1de510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1de514: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1de514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de518: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1de518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1de51c: 0x2626000a  addiu       $a2, $s1, 0xA
    ctx->pc = 0x1de51cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
    // 0x1de520: 0x2484006e  addiu       $a0, $a0, 0x6E
    ctx->pc = 0x1de520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 110));
    // 0x1de524: 0xc065480  jal         func_195200
    ctx->pc = 0x1DE524u;
    SET_GPR_U32(ctx, 31, 0x1DE52Cu);
    ctx->pc = 0x1DE528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE524u;
            // 0x1de528: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE52Cu; }
        if (ctx->pc != 0x1DE52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE52Cu; }
        if (ctx->pc != 0x1DE52Cu) { return; }
    }
    ctx->pc = 0x1DE52Cu;
    // 0x1de52c: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1de52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de530: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1de530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1de534: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1de534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de538: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1de538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1de53c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1de53cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de540: 0x2484006e  addiu       $a0, $a0, 0x6E
    ctx->pc = 0x1de540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 110));
    // 0x1de544: 0xc065480  jal         func_195200
    ctx->pc = 0x1DE544u;
    SET_GPR_U32(ctx, 31, 0x1DE54Cu);
    ctx->pc = 0x1DE548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE544u;
            // 0x1de548: 0x2465008c  addiu       $a1, $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE54Cu; }
        if (ctx->pc != 0x1DE54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE54Cu; }
        if (ctx->pc != 0x1DE54Cu) { return; }
    }
    ctx->pc = 0x1DE54Cu;
    // 0x1de54c: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1de54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de550: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1de550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de554: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x1de554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
    // 0x1de558: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1DE558u;
    SET_GPR_U32(ctx, 31, 0x1DE560u);
    ctx->pc = 0x1DE55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE558u;
            // 0x1de55c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE560u; }
        if (ctx->pc != 0x1DE560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE560u; }
        if (ctx->pc != 0x1DE560u) { return; }
    }
    ctx->pc = 0x1DE560u;
    // 0x1de560: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1de560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de564: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1de564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1de568: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1de568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de56c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1de56cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1de570: 0x26260005  addiu       $a2, $s1, 0x5
    ctx->pc = 0x1de570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    // 0x1de574: 0x2484ffd3  addiu       $a0, $a0, -0x2D
    ctx->pc = 0x1de574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967251));
    // 0x1de578: 0xc065480  jal         func_195200
    ctx->pc = 0x1DE578u;
    SET_GPR_U32(ctx, 31, 0x1DE580u);
    ctx->pc = 0x1DE57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE578u;
            // 0x1de57c: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE580u; }
        if (ctx->pc != 0x1DE580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE580u; }
        if (ctx->pc != 0x1DE580u) { return; }
    }
    ctx->pc = 0x1DE580u;
    // 0x1de580: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1de580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de584: 0x24020073  addiu       $v0, $zero, 0x73
    ctx->pc = 0x1de584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x1de588: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1de588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de58c: 0x519023  subu        $s2, $v0, $s1
    ctx->pc = 0x1de58cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1de590: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1de590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1de594: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1de594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de598: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1de598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1de59c: 0x2484ffd3  addiu       $a0, $a0, -0x2D
    ctx->pc = 0x1de59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967251));
    // 0x1de5a0: 0xc065480  jal         func_195200
    ctx->pc = 0x1DE5A0u;
    SET_GPR_U32(ctx, 31, 0x1DE5A8u);
    ctx->pc = 0x1DE5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE5A0u;
            // 0x1de5a4: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE5A8u; }
        if (ctx->pc != 0x1DE5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE5A8u; }
        if (ctx->pc != 0x1DE5A8u) { return; }
    }
    ctx->pc = 0x1DE5A8u;
    // 0x1de5a8: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1de5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de5ac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1de5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de5b0: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x1de5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1de5b4: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1DE5B4u;
    SET_GPR_U32(ctx, 31, 0x1DE5BCu);
    ctx->pc = 0x1DE5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE5B4u;
            // 0x1de5b8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE5BCu; }
        if (ctx->pc != 0x1DE5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE5BCu; }
        if (ctx->pc != 0x1DE5BCu) { return; }
    }
    ctx->pc = 0x1DE5BCu;
    // 0x1de5bc: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1de5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de5c0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1de5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1de5c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1de5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de5c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1de5c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1de5cc: 0x26260005  addiu       $a2, $s1, 0x5
    ctx->pc = 0x1de5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    // 0x1de5d0: 0x2484002d  addiu       $a0, $a0, 0x2D
    ctx->pc = 0x1de5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 45));
    // 0x1de5d4: 0xc065480  jal         func_195200
    ctx->pc = 0x1DE5D4u;
    SET_GPR_U32(ctx, 31, 0x1DE5DCu);
    ctx->pc = 0x1DE5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE5D4u;
            // 0x1de5d8: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE5DCu; }
        if (ctx->pc != 0x1DE5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE5DCu; }
        if (ctx->pc != 0x1DE5DCu) { return; }
    }
    ctx->pc = 0x1DE5DCu;
    // 0x1de5dc: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1de5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de5e0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1de5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1de5e4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1de5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de5e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1de5e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1de5ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1de5ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de5f0: 0x2484002d  addiu       $a0, $a0, 0x2D
    ctx->pc = 0x1de5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 45));
    // 0x1de5f4: 0xc065480  jal         func_195200
    ctx->pc = 0x1DE5F4u;
    SET_GPR_U32(ctx, 31, 0x1DE5FCu);
    ctx->pc = 0x1DE5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE5F4u;
            // 0x1de5f8: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE5FCu; }
        if (ctx->pc != 0x1DE5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE5FCu; }
        if (ctx->pc != 0x1DE5FCu) { return; }
    }
    ctx->pc = 0x1DE5FCu;
    // 0x1de5fc: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1de5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de600: 0x2841fc19  slti        $at, $v0, -0x3E7
    ctx->pc = 0x1de600u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294966297) ? 1 : 0);
    // 0x1de604: 0x14200202  bnez        $at, . + 4 + (0x202 << 2)
    ctx->pc = 0x1DE604u;
    {
        const bool branch_taken_0x1de604 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE604u;
            // 0x1de608: 0x284103e8  slti        $at, $v0, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de604) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DE60Cu;
    // 0x1de60c: 0x10200200  beqz        $at, . + 4 + (0x200 << 2)
    ctx->pc = 0x1DE60Cu;
    {
        const bool branch_taken_0x1de60c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE60Cu;
            // 0x1de610: 0x2443ffd3  addiu       $v1, $v0, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967251));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de60c) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DE614u;
    // 0x1de614: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1de614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1de618: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1de618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de61c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1de61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de620: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1de620u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1de624: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1de624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1de628: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de62c: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DE62Cu;
    SET_GPR_U32(ctx, 31, 0x1DE634u);
    ctx->pc = 0x1DE630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE62Cu;
            // 0x1de630: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE634u; }
        if (ctx->pc != 0x1DE634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE634u; }
        if (ctx->pc != 0x1DE634u) { return; }
    }
    ctx->pc = 0x1DE634u;
    // 0x1de634: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1de634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de638: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1de638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1de63c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1de63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de640: 0x2463002d  addiu       $v1, $v1, 0x2D
    ctx->pc = 0x1de640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1de644: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1de644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1de648: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1de648u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1de64c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de64cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de650: 0x0  nop
    ctx->pc = 0x1de650u;
    // NOP
    // 0x1de654: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1de654u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1de658: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DE658u;
    SET_GPR_U32(ctx, 31, 0x1DE660u);
    ctx->pc = 0x1DE65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE658u;
            // 0x1de65c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE660u; }
        if (ctx->pc != 0x1DE660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE660u; }
        if (ctx->pc != 0x1DE660u) { return; }
    }
    ctx->pc = 0x1DE660u;
    // 0x1de660: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1de660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de664: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1de664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1de668: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1de668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de66c: 0x2463ff92  addiu       $v1, $v1, -0x6E
    ctx->pc = 0x1de66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967186));
    // 0x1de670: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x1de670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1de674: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1de674u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1de678: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de67c: 0x0  nop
    ctx->pc = 0x1de67cu;
    // NOP
    // 0x1de680: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1de680u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1de684: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DE684u;
    SET_GPR_U32(ctx, 31, 0x1DE68Cu);
    ctx->pc = 0x1DE688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE684u;
            // 0x1de688: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE68Cu; }
        if (ctx->pc != 0x1DE68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE68Cu; }
        if (ctx->pc != 0x1DE68Cu) { return; }
    }
    ctx->pc = 0x1DE68Cu;
    // 0x1de68c: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1de68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de690: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1de690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1de694: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1de694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de698: 0x2463006e  addiu       $v1, $v1, 0x6E
    ctx->pc = 0x1de698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
    // 0x1de69c: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x1de69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1de6a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1de6a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1de6a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de6a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de6a8: 0x0  nop
    ctx->pc = 0x1de6a8u;
    // NOP
    // 0x1de6ac: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1de6acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1de6b0: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DE6B0u;
    SET_GPR_U32(ctx, 31, 0x1DE6B8u);
    ctx->pc = 0x1DE6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE6B0u;
            // 0x1de6b4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE6B8u; }
        if (ctx->pc != 0x1DE6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE6B8u; }
        if (ctx->pc != 0x1DE6B8u) { return; }
    }
    ctx->pc = 0x1DE6B8u;
    // 0x1de6b8: 0x100001d5  b           . + 4 + (0x1D5 << 2)
    ctx->pc = 0x1DE6B8u;
    {
        const bool branch_taken_0x1de6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de6b8) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DE6C0u;
label_1de6c0:
    // 0x1de6c0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1de6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1de6c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1de6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1de6c8: 0x3c04c2c8  lui         $a0, 0xC2C8
    ctx->pc = 0x1de6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49864 << 16));
    // 0x1de6cc: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x1de6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x1de6d0: 0xac640124  sw          $a0, 0x124($v1)
    ctx->pc = 0x1de6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 292), GPR_U32(ctx, 4));
    // 0x1de6d4: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1de6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1de6d8: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1de6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1de6dc: 0x100001cc  b           . + 4 + (0x1CC << 2)
    ctx->pc = 0x1DE6DCu;
    {
        const bool branch_taken_0x1de6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE6DCu;
            // 0x1de6e0: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de6dc) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DE6E4u;
    // 0x1de6e4: 0x0  nop
    ctx->pc = 0x1de6e4u;
    // NOP
label_1de6e8:
    // 0x1de6e8: 0xc0656b4  jal         func_195AD0
    ctx->pc = 0x1DE6E8u;
    SET_GPR_U32(ctx, 31, 0x1DE6F0u);
    ctx->pc = 0x195AD0u;
    if (runtime->hasFunction(0x195AD0u)) {
        auto targetFn = runtime->lookupFunction(0x195AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE6F0u; }
        if (ctx->pc != 0x1DE6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotBloadCastDead2_0x195ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE6F0u; }
        if (ctx->pc != 0x1DE6F0u) { return; }
    }
    ctx->pc = 0x1DE6F0u;
    // 0x1de6f0: 0xc05b978  jal         func_16E5E0
    ctx->pc = 0x1DE6F0u;
    SET_GPR_U32(ctx, 31, 0x1DE6F8u);
    ctx->pc = 0x1DE6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE6F0u;
            // 0x1de6f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E5E0u;
    if (runtime->hasFunction(0x16E5E0u)) {
        auto targetFn = runtime->lookupFunction(0x16E5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE6F8u; }
        if (ctx->pc != 0x1DE6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Hp0_0x16e5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE6F8u; }
        if (ctx->pc != 0x1DE6F8u) { return; }
    }
    ctx->pc = 0x1DE6F8u;
    // 0x1de6f8: 0xc05b9cc  jal         func_16E730
    ctx->pc = 0x1DE6F8u;
    SET_GPR_U32(ctx, 31, 0x1DE700u);
    ctx->pc = 0x1DE6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE6F8u;
            // 0x1de6fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E730u;
    if (runtime->hasFunction(0x16E730u)) {
        auto targetFn = runtime->lookupFunction(0x16E730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE700u; }
        if (ctx->pc != 0x1DE700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_All_Hp0_0x16e730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE700u; }
        if (ctx->pc != 0x1DE700u) { return; }
    }
    ctx->pc = 0x1DE700u;
    // 0x1de700: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1de700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de704: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1de704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x1de708: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1de708u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
    // 0x1de70c: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1de70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1de710: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1de710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1de714: 0x0  nop
    ctx->pc = 0x1de714u;
    // NOP
    // 0x1de718: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1de718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1de71c: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1de71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1de720: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1de720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de724: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1de724u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1de728: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1de728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1de72c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1de72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1de730: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1de730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1de734: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1de734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1de738: 0xc077de0  jal         func_1DF780
    ctx->pc = 0x1DE738u;
    SET_GPR_U32(ctx, 31, 0x1DE740u);
    ctx->pc = 0x1DE73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE738u;
            // 0x1de73c: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF780u;
    if (runtime->hasFunction(0x1DF780u)) {
        auto targetFn = runtime->lookupFunction(0x1DF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE740u; }
        if (ctx->pc != 0x1DE740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1df780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE740u; }
        if (ctx->pc != 0x1DE740u) { return; }
    }
    ctx->pc = 0x1DE740u;
    // 0x1de740: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1de740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1de744: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1de744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1de748: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1de748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1de74c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1de74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1de750: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1de750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1de754: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1de754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1de758: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1de758u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1de75c: 0x0  nop
    ctx->pc = 0x1de75cu;
    // NOP
    // 0x1de760: 0x0  nop
    ctx->pc = 0x1de760u;
    // NOP
    // 0x1de764: 0x1010  mfhi        $v0
    ctx->pc = 0x1de764u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1de768: 0x14400089  bnez        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x1DE768u;
    {
        const bool branch_taken_0x1de768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de768) {
            ctx->pc = 0x1DE990u;
            goto label_1de990;
        }
    }
    ctx->pc = 0x1DE770u;
    // 0x1de770: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1DE770u;
    SET_GPR_U32(ctx, 31, 0x1DE778u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE778u; }
        if (ctx->pc != 0x1DE778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE778u; }
        if (ctx->pc != 0x1DE778u) { return; }
    }
    ctx->pc = 0x1DE778u;
    // 0x1de778: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1de778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1de77c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1de77cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1de780: 0x0  nop
    ctx->pc = 0x1de780u;
    // NOP
    // 0x1de784: 0x0  nop
    ctx->pc = 0x1de784u;
    // NOP
    // 0x1de788: 0x8810  mfhi        $s1
    ctx->pc = 0x1de788u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x1de78c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1DE78Cu;
    SET_GPR_U32(ctx, 31, 0x1DE794u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE794u; }
        if (ctx->pc != 0x1DE794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE794u; }
        if (ctx->pc != 0x1DE794u) { return; }
    }
    ctx->pc = 0x1DE794u;
    // 0x1de794: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x1de794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1de798: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1de798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1de79c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1de79cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1de7a0: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1de7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de7a4: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1de7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de7a8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1de7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1de7ac: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1de7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1de7b0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1de7b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1de7b4: 0x9010  mfhi        $s2
    ctx->pc = 0x1de7b4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x1de7b8: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1de7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1de7bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1de7bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1de7c0: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1de7c0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1de7c4: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x1de7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1de7c8: 0x2465ffe7  addiu       $a1, $v1, -0x19
    ctx->pc = 0x1de7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
    // 0x1de7cc: 0x2444ff60  addiu       $a0, $v0, -0xA0
    ctx->pc = 0x1de7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967136));
    // 0x1de7d0: 0xc053740  jal         func_14DD00
    ctx->pc = 0x1DE7D0u;
    SET_GPR_U32(ctx, 31, 0x1DE7D8u);
    ctx->pc = 0x1DE7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE7D0u;
            // 0x1de7d4: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE7D8u; }
        if (ctx->pc != 0x1DE7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE7D8u; }
        if (ctx->pc != 0x1DE7D8u) { return; }
    }
    ctx->pc = 0x1DE7D8u;
    // 0x1de7d8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1de7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1de7dc: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1de7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1de7e0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1de7e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1de7e4: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x1de7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1de7e8: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1de7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de7ec: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1de7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1de7f0: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1de7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1de7f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1de7f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1de7f8: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1de7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de7fc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1de7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1de800: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1de800u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1de804: 0x24620064  addiu       $v0, $v1, 0x64
    ctx->pc = 0x1de804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1de808: 0x522823  subu        $a1, $v0, $s2
    ctx->pc = 0x1de808u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1de80c: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1DE80Cu;
    SET_GPR_U32(ctx, 31, 0x1DE814u);
    ctx->pc = 0x1DE810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE80Cu;
            // 0x1de810: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE814u; }
        if (ctx->pc != 0x1DE814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE814u; }
        if (ctx->pc != 0x1DE814u) { return; }
    }
    ctx->pc = 0x1DE814u;
    // 0x1de814: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1de814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1de818: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1de818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1de81c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1de81cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1de820: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x1de820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1de824: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1de824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de828: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1de828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1de82c: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1de82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1de830: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1de830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1de834: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1de834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de838: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x1de838u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1de83c: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1de83cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1de840: 0x24620064  addiu       $v0, $v1, 0x64
    ctx->pc = 0x1de840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1de844: 0x522823  subu        $a1, $v0, $s2
    ctx->pc = 0x1de844u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1de848: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1DE848u;
    SET_GPR_U32(ctx, 31, 0x1DE850u);
    ctx->pc = 0x1DE84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE848u;
            // 0x1de84c: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE850u; }
        if (ctx->pc != 0x1DE850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE850u; }
        if (ctx->pc != 0x1DE850u) { return; }
    }
    ctx->pc = 0x1DE850u;
    // 0x1de850: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1de850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1de854: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x1de854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1de858: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1de858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1de85c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1de85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1de860: 0x2463ff60  addiu       $v1, $v1, -0xA0
    ctx->pc = 0x1de860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
    // 0x1de864: 0x2442ffe7  addiu       $v0, $v0, -0x19
    ctx->pc = 0x1de864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
    // 0x1de868: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1de868u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1de86c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de86cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de870: 0x0  nop
    ctx->pc = 0x1de870u;
    // NOP
    // 0x1de874: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1de874u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1de878: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DE878u;
    SET_GPR_U32(ctx, 31, 0x1DE880u);
    ctx->pc = 0x1DE87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE878u;
            // 0x1de87c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE880u; }
        if (ctx->pc != 0x1DE880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE880u; }
        if (ctx->pc != 0x1DE880u) { return; }
    }
    ctx->pc = 0x1DE880u;
    // 0x1de880: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1DE880u;
    SET_GPR_U32(ctx, 31, 0x1DE888u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE888u; }
        if (ctx->pc != 0x1DE888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE888u; }
        if (ctx->pc != 0x1DE888u) { return; }
    }
    ctx->pc = 0x1DE888u;
    // 0x1de888: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1de888u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1de88c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1DE88Cu;
    {
        const bool branch_taken_0x1de88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de88c) {
            ctx->pc = 0x1DE8C8u;
            goto label_1de8c8;
        }
    }
    ctx->pc = 0x1DE894u;
    // 0x1de894: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1de894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1de898: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1de898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1de89c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1de89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1de8a0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1de8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1de8a4: 0x2463ff60  addiu       $v1, $v1, -0xA0
    ctx->pc = 0x1de8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
    // 0x1de8a8: 0x2442ffe7  addiu       $v0, $v0, -0x19
    ctx->pc = 0x1de8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
    // 0x1de8ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1de8acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1de8b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de8b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de8b4: 0x0  nop
    ctx->pc = 0x1de8b4u;
    // NOP
    // 0x1de8b8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1de8b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1de8bc: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DE8BCu;
    SET_GPR_U32(ctx, 31, 0x1DE8C4u);
    ctx->pc = 0x1DE8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE8BCu;
            // 0x1de8c0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE8C4u; }
        if (ctx->pc != 0x1DE8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE8C4u; }
        if (ctx->pc != 0x1DE8C4u) { return; }
    }
    ctx->pc = 0x1DE8C4u;
    // 0x1de8c4: 0x0  nop
    ctx->pc = 0x1de8c4u;
    // NOP
label_1de8c8:
    // 0x1de8c8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1DE8C8u;
    SET_GPR_U32(ctx, 31, 0x1DE8D0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE8D0u; }
        if (ctx->pc != 0x1DE8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE8D0u; }
        if (ctx->pc != 0x1DE8D0u) { return; }
    }
    ctx->pc = 0x1DE8D0u;
    // 0x1de8d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1de8d0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1de8d4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1DE8D4u;
    {
        const bool branch_taken_0x1de8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de8d4) {
            ctx->pc = 0x1DE910u;
            goto label_1de910;
        }
    }
    ctx->pc = 0x1DE8DCu;
    // 0x1de8dc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1de8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1de8e0: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1de8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1de8e4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1de8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1de8e8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1de8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1de8ec: 0x2463ff60  addiu       $v1, $v1, -0xA0
    ctx->pc = 0x1de8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
    // 0x1de8f0: 0x2442ffe7  addiu       $v0, $v0, -0x19
    ctx->pc = 0x1de8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
    // 0x1de8f4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1de8f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1de8f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de8f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de8fc: 0x0  nop
    ctx->pc = 0x1de8fcu;
    // NOP
    // 0x1de900: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1de900u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1de904: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DE904u;
    SET_GPR_U32(ctx, 31, 0x1DE90Cu);
    ctx->pc = 0x1DE908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE904u;
            // 0x1de908: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE90Cu; }
        if (ctx->pc != 0x1DE90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE90Cu; }
        if (ctx->pc != 0x1DE90Cu) { return; }
    }
    ctx->pc = 0x1DE90Cu;
    // 0x1de90c: 0x0  nop
    ctx->pc = 0x1de90cu;
    // NOP
label_1de910:
    // 0x1de910: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1de910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1de914: 0x2841005a  slti        $at, $v0, 0x5A
    ctx->pc = 0x1de914u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x1de918: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x1DE918u;
    {
        const bool branch_taken_0x1de918 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE918u;
            // 0x1de91c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de918) {
            ctx->pc = 0x1DE990u;
            goto label_1de990;
        }
    }
    ctx->pc = 0x1DE920u;
    // 0x1de920: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1DE920u;
    SET_GPR_U32(ctx, 31, 0x1DE928u);
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE928u; }
        if (ctx->pc != 0x1DE928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE928u; }
        if (ctx->pc != 0x1DE928u) { return; }
    }
    ctx->pc = 0x1DE928u;
    // 0x1de928: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DE928u;
    {
        const bool branch_taken_0x1de928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de928) {
            ctx->pc = 0x1DE958u;
            goto label_1de958;
        }
    }
    ctx->pc = 0x1DE930u;
    // 0x1de930: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1DE930u;
    SET_GPR_U32(ctx, 31, 0x1DE938u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE938u; }
        if (ctx->pc != 0x1DE938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE938u; }
        if (ctx->pc != 0x1DE938u) { return; }
    }
    ctx->pc = 0x1DE938u;
    // 0x1de938: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1de938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1de93c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1de93cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1de940: 0x0  nop
    ctx->pc = 0x1de940u;
    // NOP
    // 0x1de944: 0x0  nop
    ctx->pc = 0x1de944u;
    // NOP
    // 0x1de948: 0x2810  mfhi        $a1
    ctx->pc = 0x1de948u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1de94c: 0xc055124  jal         func_154490
    ctx->pc = 0x1DE94Cu;
    SET_GPR_U32(ctx, 31, 0x1DE954u);
    ctx->pc = 0x1DE950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE94Cu;
            // 0x1de950: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE954u; }
        if (ctx->pc != 0x1DE954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE954u; }
        if (ctx->pc != 0x1DE954u) { return; }
    }
    ctx->pc = 0x1DE954u;
    // 0x1de954: 0x0  nop
    ctx->pc = 0x1de954u;
    // NOP
label_1de958:
    // 0x1de958: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1DE958u;
    SET_GPR_U32(ctx, 31, 0x1DE960u);
    ctx->pc = 0x1DE95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE958u;
            // 0x1de95c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE960u; }
        if (ctx->pc != 0x1DE960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE960u; }
        if (ctx->pc != 0x1DE960u) { return; }
    }
    ctx->pc = 0x1DE960u;
    // 0x1de960: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DE960u;
    {
        const bool branch_taken_0x1de960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de960) {
            ctx->pc = 0x1DE990u;
            goto label_1de990;
        }
    }
    ctx->pc = 0x1DE968u;
    // 0x1de968: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1DE968u;
    SET_GPR_U32(ctx, 31, 0x1DE970u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE970u; }
        if (ctx->pc != 0x1DE970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE970u; }
        if (ctx->pc != 0x1DE970u) { return; }
    }
    ctx->pc = 0x1DE970u;
    // 0x1de970: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1de970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1de974: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1de974u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1de978: 0x0  nop
    ctx->pc = 0x1de978u;
    // NOP
    // 0x1de97c: 0x0  nop
    ctx->pc = 0x1de97cu;
    // NOP
    // 0x1de980: 0x2810  mfhi        $a1
    ctx->pc = 0x1de980u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1de984: 0xc055124  jal         func_154490
    ctx->pc = 0x1DE984u;
    SET_GPR_U32(ctx, 31, 0x1DE98Cu);
    ctx->pc = 0x1DE988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE984u;
            // 0x1de988: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE98Cu; }
        if (ctx->pc != 0x1DE98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE98Cu; }
        if (ctx->pc != 0x1DE98Cu) { return; }
    }
    ctx->pc = 0x1DE98Cu;
    // 0x1de98c: 0x0  nop
    ctx->pc = 0x1de98cu;
    // NOP
label_1de990:
    // 0x1de990: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1de990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1de994: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1de994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1de998: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DE998u;
    {
        const bool branch_taken_0x1de998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DE99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE998u;
            // 0x1de99c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de998) {
            ctx->pc = 0x1DE9E0u;
            goto label_1de9e0;
        }
    }
    ctx->pc = 0x1DE9A0u;
    // 0x1de9a0: 0xc060718  jal         func_181C60
    ctx->pc = 0x1DE9A0u;
    SET_GPR_U32(ctx, 31, 0x1DE9A8u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE9A8u; }
        if (ctx->pc != 0x1DE9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE9A8u; }
        if (ctx->pc != 0x1DE9A8u) { return; }
    }
    ctx->pc = 0x1DE9A8u;
    // 0x1de9a8: 0xc05d110  jal         func_174440
    ctx->pc = 0x1DE9A8u;
    SET_GPR_U32(ctx, 31, 0x1DE9B0u);
    ctx->pc = 0x1DE9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE9A8u;
            // 0x1de9ac: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE9B0u; }
        if (ctx->pc != 0x1DE9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE9B0u; }
        if (ctx->pc != 0x1DE9B0u) { return; }
    }
    ctx->pc = 0x1DE9B0u;
    // 0x1de9b0: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1DE9B0u;
    SET_GPR_U32(ctx, 31, 0x1DE9B8u);
    ctx->pc = 0x1DE9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE9B0u;
            // 0x1de9b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE9B8u; }
        if (ctx->pc != 0x1DE9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE9B8u; }
        if (ctx->pc != 0x1DE9B8u) { return; }
    }
    ctx->pc = 0x1DE9B8u;
    // 0x1de9b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE9B8u;
    {
        const bool branch_taken_0x1de9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE9B8u;
            // 0x1de9bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de9b8) {
            ctx->pc = 0x1DE9C8u;
            goto label_1de9c8;
        }
    }
    ctx->pc = 0x1DE9C0u;
    // 0x1de9c0: 0xc055124  jal         func_154490
    ctx->pc = 0x1DE9C0u;
    SET_GPR_U32(ctx, 31, 0x1DE9C8u);
    ctx->pc = 0x1DE9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE9C0u;
            // 0x1de9c4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE9C8u; }
        if (ctx->pc != 0x1DE9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE9C8u; }
        if (ctx->pc != 0x1DE9C8u) { return; }
    }
    ctx->pc = 0x1DE9C8u;
label_1de9c8:
    // 0x1de9c8: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1DE9C8u;
    SET_GPR_U32(ctx, 31, 0x1DE9D0u);
    ctx->pc = 0x1DE9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE9C8u;
            // 0x1de9cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE9D0u; }
        if (ctx->pc != 0x1DE9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE9D0u; }
        if (ctx->pc != 0x1DE9D0u) { return; }
    }
    ctx->pc = 0x1DE9D0u;
    // 0x1de9d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE9D0u;
    {
        const bool branch_taken_0x1de9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE9D0u;
            // 0x1de9d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de9d0) {
            ctx->pc = 0x1DE9E0u;
            goto label_1de9e0;
        }
    }
    ctx->pc = 0x1DE9D8u;
    // 0x1de9d8: 0xc055124  jal         func_154490
    ctx->pc = 0x1DE9D8u;
    SET_GPR_U32(ctx, 31, 0x1DE9E0u);
    ctx->pc = 0x1DE9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE9D8u;
            // 0x1de9dc: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE9E0u; }
        if (ctx->pc != 0x1DE9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE9E0u; }
        if (ctx->pc != 0x1DE9E0u) { return; }
    }
    ctx->pc = 0x1DE9E0u;
label_1de9e0:
    // 0x1de9e0: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1de9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1de9e4: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1de9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1de9e8: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1DE9E8u;
    {
        const bool branch_taken_0x1de9e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DE9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE9E8u;
            // 0x1de9ec: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de9e8) {
            ctx->pc = 0x1DEA58u;
            goto label_1dea58;
        }
    }
    ctx->pc = 0x1DE9F0u;
    // 0x1de9f0: 0xc060718  jal         func_181C60
    ctx->pc = 0x1DE9F0u;
    SET_GPR_U32(ctx, 31, 0x1DE9F8u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE9F8u; }
        if (ctx->pc != 0x1DE9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE9F8u; }
        if (ctx->pc != 0x1DE9F8u) { return; }
    }
    ctx->pc = 0x1DE9F8u;
    // 0x1de9f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1de9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1de9fc: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1de9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dea00: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1dea00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dea04: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1dea04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1dea08: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1dea08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1dea0c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1dea0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1dea10: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1dea10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1dea14: 0xc06fc9c  jal         func_1BF270
    ctx->pc = 0x1DEA14u;
    SET_GPR_U32(ctx, 31, 0x1DEA1Cu);
    ctx->pc = 0x1DEA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA14u;
            // 0x1dea18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF270u;
    if (runtime->hasFunction(0x1BF270u)) {
        auto targetFn = runtime->lookupFunction(0x1BF270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA1Cu; }
        if (ctx->pc != 0x1DEA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn_Pika_0x1bf270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA1Cu; }
        if (ctx->pc != 0x1DEA1Cu) { return; }
    }
    ctx->pc = 0x1DEA1Cu;
    // 0x1dea1c: 0xc05d110  jal         func_174440
    ctx->pc = 0x1DEA1Cu;
    SET_GPR_U32(ctx, 31, 0x1DEA24u);
    ctx->pc = 0x1DEA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA1Cu;
            // 0x1dea20: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA24u; }
        if (ctx->pc != 0x1DEA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA24u; }
        if (ctx->pc != 0x1DEA24u) { return; }
    }
    ctx->pc = 0x1DEA24u;
    // 0x1dea24: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1DEA24u;
    SET_GPR_U32(ctx, 31, 0x1DEA2Cu);
    ctx->pc = 0x1DEA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA24u;
            // 0x1dea28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA2Cu; }
        if (ctx->pc != 0x1DEA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA2Cu; }
        if (ctx->pc != 0x1DEA2Cu) { return; }
    }
    ctx->pc = 0x1DEA2Cu;
    // 0x1dea2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DEA2Cu;
    {
        const bool branch_taken_0x1dea2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA2Cu;
            // 0x1dea30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea2c) {
            ctx->pc = 0x1DEA40u;
            goto label_1dea40;
        }
    }
    ctx->pc = 0x1DEA34u;
    // 0x1dea34: 0xc055124  jal         func_154490
    ctx->pc = 0x1DEA34u;
    SET_GPR_U32(ctx, 31, 0x1DEA3Cu);
    ctx->pc = 0x1DEA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA34u;
            // 0x1dea38: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA3Cu; }
        if (ctx->pc != 0x1DEA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA3Cu; }
        if (ctx->pc != 0x1DEA3Cu) { return; }
    }
    ctx->pc = 0x1DEA3Cu;
    // 0x1dea3c: 0x0  nop
    ctx->pc = 0x1dea3cu;
    // NOP
label_1dea40:
    // 0x1dea40: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1DEA40u;
    SET_GPR_U32(ctx, 31, 0x1DEA48u);
    ctx->pc = 0x1DEA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA40u;
            // 0x1dea44: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA48u; }
        if (ctx->pc != 0x1DEA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA48u; }
        if (ctx->pc != 0x1DEA48u) { return; }
    }
    ctx->pc = 0x1DEA48u;
    // 0x1dea48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DEA48u;
    {
        const bool branch_taken_0x1dea48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA48u;
            // 0x1dea4c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea48) {
            ctx->pc = 0x1DEA58u;
            goto label_1dea58;
        }
    }
    ctx->pc = 0x1DEA50u;
    // 0x1dea50: 0xc055124  jal         func_154490
    ctx->pc = 0x1DEA50u;
    SET_GPR_U32(ctx, 31, 0x1DEA58u);
    ctx->pc = 0x1DEA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA50u;
            // 0x1dea54: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA58u; }
        if (ctx->pc != 0x1DEA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA58u; }
        if (ctx->pc != 0x1DEA58u) { return; }
    }
    ctx->pc = 0x1DEA58u;
label_1dea58:
    // 0x1dea58: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1dea58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1dea5c: 0x240200aa  addiu       $v0, $zero, 0xAA
    ctx->pc = 0x1dea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x1dea60: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DEA60u;
    {
        const bool branch_taken_0x1dea60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DEA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA60u;
            // 0x1dea64: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea60) {
            ctx->pc = 0x1DEAA8u;
            goto label_1deaa8;
        }
    }
    ctx->pc = 0x1DEA68u;
    // 0x1dea68: 0xc060718  jal         func_181C60
    ctx->pc = 0x1DEA68u;
    SET_GPR_U32(ctx, 31, 0x1DEA70u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA70u; }
        if (ctx->pc != 0x1DEA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA70u; }
        if (ctx->pc != 0x1DEA70u) { return; }
    }
    ctx->pc = 0x1DEA70u;
    // 0x1dea70: 0xc05d110  jal         func_174440
    ctx->pc = 0x1DEA70u;
    SET_GPR_U32(ctx, 31, 0x1DEA78u);
    ctx->pc = 0x1DEA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA70u;
            // 0x1dea74: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA78u; }
        if (ctx->pc != 0x1DEA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA78u; }
        if (ctx->pc != 0x1DEA78u) { return; }
    }
    ctx->pc = 0x1DEA78u;
    // 0x1dea78: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1DEA78u;
    SET_GPR_U32(ctx, 31, 0x1DEA80u);
    ctx->pc = 0x1DEA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA78u;
            // 0x1dea7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA80u; }
        if (ctx->pc != 0x1DEA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA80u; }
        if (ctx->pc != 0x1DEA80u) { return; }
    }
    ctx->pc = 0x1DEA80u;
    // 0x1dea80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DEA80u;
    {
        const bool branch_taken_0x1dea80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA80u;
            // 0x1dea84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea80) {
            ctx->pc = 0x1DEA90u;
            goto label_1dea90;
        }
    }
    ctx->pc = 0x1DEA88u;
    // 0x1dea88: 0xc055124  jal         func_154490
    ctx->pc = 0x1DEA88u;
    SET_GPR_U32(ctx, 31, 0x1DEA90u);
    ctx->pc = 0x1DEA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA88u;
            // 0x1dea8c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA90u; }
        if (ctx->pc != 0x1DEA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA90u; }
        if (ctx->pc != 0x1DEA90u) { return; }
    }
    ctx->pc = 0x1DEA90u;
label_1dea90:
    // 0x1dea90: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1DEA90u;
    SET_GPR_U32(ctx, 31, 0x1DEA98u);
    ctx->pc = 0x1DEA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA90u;
            // 0x1dea94: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA98u; }
        if (ctx->pc != 0x1DEA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA98u; }
        if (ctx->pc != 0x1DEA98u) { return; }
    }
    ctx->pc = 0x1DEA98u;
    // 0x1dea98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DEA98u;
    {
        const bool branch_taken_0x1dea98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA98u;
            // 0x1dea9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea98) {
            ctx->pc = 0x1DEAA8u;
            goto label_1deaa8;
        }
    }
    ctx->pc = 0x1DEAA0u;
    // 0x1deaa0: 0xc055124  jal         func_154490
    ctx->pc = 0x1DEAA0u;
    SET_GPR_U32(ctx, 31, 0x1DEAA8u);
    ctx->pc = 0x1DEAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEAA0u;
            // 0x1deaa4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEAA8u; }
        if (ctx->pc != 0x1DEAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEAA8u; }
        if (ctx->pc != 0x1DEAA8u) { return; }
    }
    ctx->pc = 0x1DEAA8u;
label_1deaa8:
    // 0x1deaa8: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1deaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1deaac: 0x240200af  addiu       $v0, $zero, 0xAF
    ctx->pc = 0x1deaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
    // 0x1deab0: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1DEAB0u;
    {
        const bool branch_taken_0x1deab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DEAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEAB0u;
            // 0x1deab4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deab0) {
            ctx->pc = 0x1DEB20u;
            goto label_1deb20;
        }
    }
    ctx->pc = 0x1DEAB8u;
    // 0x1deab8: 0xc060718  jal         func_181C60
    ctx->pc = 0x1DEAB8u;
    SET_GPR_U32(ctx, 31, 0x1DEAC0u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEAC0u; }
        if (ctx->pc != 0x1DEAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEAC0u; }
        if (ctx->pc != 0x1DEAC0u) { return; }
    }
    ctx->pc = 0x1DEAC0u;
    // 0x1deac0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1deac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1deac4: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1deac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1deac8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1deac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1deacc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1deaccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1dead0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1dead0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1dead4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1dead4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1dead8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1dead8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1deadc: 0xc06fc9c  jal         func_1BF270
    ctx->pc = 0x1DEADCu;
    SET_GPR_U32(ctx, 31, 0x1DEAE4u);
    ctx->pc = 0x1DEAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEADCu;
            // 0x1deae0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF270u;
    if (runtime->hasFunction(0x1BF270u)) {
        auto targetFn = runtime->lookupFunction(0x1BF270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEAE4u; }
        if (ctx->pc != 0x1DEAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn_Pika_0x1bf270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEAE4u; }
        if (ctx->pc != 0x1DEAE4u) { return; }
    }
    ctx->pc = 0x1DEAE4u;
    // 0x1deae4: 0xc05d110  jal         func_174440
    ctx->pc = 0x1DEAE4u;
    SET_GPR_U32(ctx, 31, 0x1DEAECu);
    ctx->pc = 0x1DEAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEAE4u;
            // 0x1deae8: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEAECu; }
        if (ctx->pc != 0x1DEAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEAECu; }
        if (ctx->pc != 0x1DEAECu) { return; }
    }
    ctx->pc = 0x1DEAECu;
    // 0x1deaec: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1DEAECu;
    SET_GPR_U32(ctx, 31, 0x1DEAF4u);
    ctx->pc = 0x1DEAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEAECu;
            // 0x1deaf0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEAF4u; }
        if (ctx->pc != 0x1DEAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEAF4u; }
        if (ctx->pc != 0x1DEAF4u) { return; }
    }
    ctx->pc = 0x1DEAF4u;
    // 0x1deaf4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DEAF4u;
    {
        const bool branch_taken_0x1deaf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEAF4u;
            // 0x1deaf8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deaf4) {
            ctx->pc = 0x1DEB08u;
            goto label_1deb08;
        }
    }
    ctx->pc = 0x1DEAFCu;
    // 0x1deafc: 0xc055124  jal         func_154490
    ctx->pc = 0x1DEAFCu;
    SET_GPR_U32(ctx, 31, 0x1DEB04u);
    ctx->pc = 0x1DEB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEAFCu;
            // 0x1deb00: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB04u; }
        if (ctx->pc != 0x1DEB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB04u; }
        if (ctx->pc != 0x1DEB04u) { return; }
    }
    ctx->pc = 0x1DEB04u;
    // 0x1deb04: 0x0  nop
    ctx->pc = 0x1deb04u;
    // NOP
label_1deb08:
    // 0x1deb08: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1DEB08u;
    SET_GPR_U32(ctx, 31, 0x1DEB10u);
    ctx->pc = 0x1DEB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEB08u;
            // 0x1deb0c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB10u; }
        if (ctx->pc != 0x1DEB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB10u; }
        if (ctx->pc != 0x1DEB10u) { return; }
    }
    ctx->pc = 0x1DEB10u;
    // 0x1deb10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DEB10u;
    {
        const bool branch_taken_0x1deb10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEB10u;
            // 0x1deb14: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb10) {
            ctx->pc = 0x1DEB20u;
            goto label_1deb20;
        }
    }
    ctx->pc = 0x1DEB18u;
    // 0x1deb18: 0xc055124  jal         func_154490
    ctx->pc = 0x1DEB18u;
    SET_GPR_U32(ctx, 31, 0x1DEB20u);
    ctx->pc = 0x1DEB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEB18u;
            // 0x1deb1c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB20u; }
        if (ctx->pc != 0x1DEB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB20u; }
        if (ctx->pc != 0x1DEB20u) { return; }
    }
    ctx->pc = 0x1DEB20u;
label_1deb20:
    // 0x1deb20: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1deb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1deb24: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1deb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1deb28: 0x286100c9  slti        $at, $v1, 0xC9
    ctx->pc = 0x1deb28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x1deb2c: 0x142000b8  bnez        $at, . + 4 + (0xB8 << 2)
    ctx->pc = 0x1DEB2Cu;
    {
        const bool branch_taken_0x1deb2c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEB2Cu;
            // 0x1deb30: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb2c) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DEB34u;
    // 0x1deb34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1deb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1deb38: 0xc060718  jal         func_181C60
    ctx->pc = 0x1DEB38u;
    SET_GPR_U32(ctx, 31, 0x1DEB40u);
    ctx->pc = 0x1DEB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEB38u;
            // 0x1deb3c: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB40u; }
        if (ctx->pc != 0x1DEB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB40u; }
        if (ctx->pc != 0x1DEB40u) { return; }
    }
    ctx->pc = 0x1DEB40u;
    // 0x1deb40: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1deb40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deb44: 0x0  nop
    ctx->pc = 0x1deb44u;
    // NOP
label_1deb48:
    // 0x1deb48: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1DEB48u;
    SET_GPR_U32(ctx, 31, 0x1DEB50u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB50u; }
        if (ctx->pc != 0x1DEB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB50u; }
        if (ctx->pc != 0x1DEB50u) { return; }
    }
    ctx->pc = 0x1DEB50u;
    // 0x1deb50: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x1deb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1deb54: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1deb54u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1deb58: 0x0  nop
    ctx->pc = 0x1deb58u;
    // NOP
    // 0x1deb5c: 0x0  nop
    ctx->pc = 0x1deb5cu;
    // NOP
    // 0x1deb60: 0x9010  mfhi        $s2
    ctx->pc = 0x1deb60u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x1deb64: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1DEB64u;
    SET_GPR_U32(ctx, 31, 0x1DEB6Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB6Cu; }
        if (ctx->pc != 0x1DEB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB6Cu; }
        if (ctx->pc != 0x1DEB6Cu) { return; }
    }
    ctx->pc = 0x1DEB6Cu;
    // 0x1deb6c: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x1deb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1deb70: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1deb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1deb74: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1deb74u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1deb78: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1deb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1deb7c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1deb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1deb80: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1deb80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1deb84: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1deb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1deb88: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1deb88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1deb8c: 0x8810  mfhi        $s1
    ctx->pc = 0x1deb8cu;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x1deb90: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1deb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1deb94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1deb94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1deb98: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1deb98u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1deb9c: 0x248200e0  addiu       $v0, $a0, 0xE0
    ctx->pc = 0x1deb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x1deba0: 0x522023  subu        $a0, $v0, $s2
    ctx->pc = 0x1deba0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1deba4: 0x24620064  addiu       $v0, $v1, 0x64
    ctx->pc = 0x1deba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1deba8: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1deba8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1debac: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1DEBACu;
    SET_GPR_U32(ctx, 31, 0x1DEBB4u);
    ctx->pc = 0x1DEBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEBACu;
            // 0x1debb0: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEBB4u; }
        if (ctx->pc != 0x1DEBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEBB4u; }
        if (ctx->pc != 0x1DEBB4u) { return; }
    }
    ctx->pc = 0x1DEBB4u;
    // 0x1debb4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1debb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1debb8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1debb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1debbc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1debbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1debc0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1debc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1debc4: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1debc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1debc8: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1debc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1debcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1debccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1debd0: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1debd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1debd4: 0x248200e0  addiu       $v0, $a0, 0xE0
    ctx->pc = 0x1debd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x1debd8: 0x522023  subu        $a0, $v0, $s2
    ctx->pc = 0x1debd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1debdc: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1debdcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1debe0: 0x24620064  addiu       $v0, $v1, 0x64
    ctx->pc = 0x1debe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1debe4: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1debe4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1debe8: 0xc053740  jal         func_14DD00
    ctx->pc = 0x1DEBE8u;
    SET_GPR_U32(ctx, 31, 0x1DEBF0u);
    ctx->pc = 0x1DEBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEBE8u;
            // 0x1debec: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEBF0u; }
        if (ctx->pc != 0x1DEBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEBF0u; }
        if (ctx->pc != 0x1DEBF0u) { return; }
    }
    ctx->pc = 0x1DEBF0u;
    // 0x1debf0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1debf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1debf4: 0x2a62003c  slti        $v0, $s3, 0x3C
    ctx->pc = 0x1debf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x1debf8: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1DEBF8u;
    {
        const bool branch_taken_0x1debf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEBF8u;
            // 0x1debfc: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1debf8) {
            ctx->pc = 0x1DEB48u;
            goto label_1deb48;
        }
    }
    ctx->pc = 0x1DEC00u;
    // 0x1dec00: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1dec00u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x1dec04: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1dec04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1dec08: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1dec08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1dec0c: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x1DEC0Cu;
    {
        const bool branch_taken_0x1dec0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEC0Cu;
            // 0x1dec10: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dec0c) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DEC14u;
    // 0x1dec14: 0x0  nop
    ctx->pc = 0x1dec14u;
    // NOP
label_1dec18:
    // 0x1dec18: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1dec18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dec1c: 0x3c034302  lui         $v1, 0x4302
    ctx->pc = 0x1dec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17154 << 16));
    // 0x1dec20: 0xac400120  sw          $zero, 0x120($v0)
    ctx->pc = 0x1dec20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 0));
    // 0x1dec24: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1dec24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1dec28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1dec28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dec2c: 0xac430124  sw          $v1, 0x124($v0)
    ctx->pc = 0x1dec2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 3));
    // 0x1dec30: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1dec30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1dec34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1dec34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dec38: 0xac400114  sw          $zero, 0x114($v0)
    ctx->pc = 0x1dec38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 0));
    // 0x1dec3c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1dec3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1dec40: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1dec40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dec44: 0xac400110  sw          $zero, 0x110($v0)
    ctx->pc = 0x1dec44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 0));
    // 0x1dec48: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1dec48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1dec4c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1dec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1dec50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DEC50u;
    {
        const bool branch_taken_0x1dec50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEC50u;
            // 0x1dec54: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dec50) {
            ctx->pc = 0x1DEC60u;
            goto label_1dec60;
        }
    }
    ctx->pc = 0x1DEC58u;
    // 0x1dec58: 0xc05d110  jal         func_174440
    ctx->pc = 0x1DEC58u;
    SET_GPR_U32(ctx, 31, 0x1DEC60u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEC60u; }
        if (ctx->pc != 0x1DEC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEC60u; }
        if (ctx->pc != 0x1DEC60u) { return; }
    }
    ctx->pc = 0x1DEC60u;
label_1dec60:
    // 0x1dec60: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1dec60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1dec64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dec64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dec68: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DEC68u;
    {
        const bool branch_taken_0x1dec68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DEC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEC68u;
            // 0x1dec6c: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dec68) {
            ctx->pc = 0x1DEC78u;
            goto label_1dec78;
        }
    }
    ctx->pc = 0x1DEC70u;
    // 0x1dec70: 0xc05d110  jal         func_174440
    ctx->pc = 0x1DEC70u;
    SET_GPR_U32(ctx, 31, 0x1DEC78u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEC78u; }
        if (ctx->pc != 0x1DEC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEC78u; }
        if (ctx->pc != 0x1DEC78u) { return; }
    }
    ctx->pc = 0x1DEC78u;
label_1dec78:
    // 0x1dec78: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1dec78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1dec7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dec80: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DEC80u;
    {
        const bool branch_taken_0x1dec80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DEC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEC80u;
            // 0x1dec84: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dec80) {
            ctx->pc = 0x1DEC90u;
            goto label_1dec90;
        }
    }
    ctx->pc = 0x1DEC88u;
    // 0x1dec88: 0xc05d110  jal         func_174440
    ctx->pc = 0x1DEC88u;
    SET_GPR_U32(ctx, 31, 0x1DEC90u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEC90u; }
        if (ctx->pc != 0x1DEC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEC90u; }
        if (ctx->pc != 0x1DEC90u) { return; }
    }
    ctx->pc = 0x1DEC90u;
label_1dec90:
    // 0x1dec90: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1dec90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1dec94: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dec94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dec98: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DEC98u;
    {
        const bool branch_taken_0x1dec98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DEC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEC98u;
            // 0x1dec9c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dec98) {
            ctx->pc = 0x1DECA8u;
            goto label_1deca8;
        }
    }
    ctx->pc = 0x1DECA0u;
    // 0x1deca0: 0xc05d110  jal         func_174440
    ctx->pc = 0x1DECA0u;
    SET_GPR_U32(ctx, 31, 0x1DECA8u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DECA8u; }
        if (ctx->pc != 0x1DECA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DECA8u; }
        if (ctx->pc != 0x1DECA8u) { return; }
    }
    ctx->pc = 0x1DECA8u;
label_1deca8:
    // 0x1deca8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1deca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1decac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1decacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1decb0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DECB0u;
    {
        const bool branch_taken_0x1decb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DECB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DECB0u;
            // 0x1decb4: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1decb0) {
            ctx->pc = 0x1DECC0u;
            goto label_1decc0;
        }
    }
    ctx->pc = 0x1DECB8u;
    // 0x1decb8: 0xc05d110  jal         func_174440
    ctx->pc = 0x1DECB8u;
    SET_GPR_U32(ctx, 31, 0x1DECC0u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DECC0u; }
        if (ctx->pc != 0x1DECC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DECC0u; }
        if (ctx->pc != 0x1DECC0u) { return; }
    }
    ctx->pc = 0x1DECC0u;
label_1decc0:
    // 0x1decc0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1decc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1decc4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1decc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1decc8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DECC8u;
    {
        const bool branch_taken_0x1decc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DECCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DECC8u;
            // 0x1deccc: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1decc8) {
            ctx->pc = 0x1DECD8u;
            goto label_1decd8;
        }
    }
    ctx->pc = 0x1DECD0u;
    // 0x1decd0: 0xc05d110  jal         func_174440
    ctx->pc = 0x1DECD0u;
    SET_GPR_U32(ctx, 31, 0x1DECD8u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DECD8u; }
        if (ctx->pc != 0x1DECD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DECD8u; }
        if (ctx->pc != 0x1DECD8u) { return; }
    }
    ctx->pc = 0x1DECD8u;
label_1decd8:
    // 0x1decd8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1decd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1decdc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1decdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1dece0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DECE0u;
    {
        const bool branch_taken_0x1dece0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DECE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DECE0u;
            // 0x1dece4: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dece0) {
            ctx->pc = 0x1DECF0u;
            goto label_1decf0;
        }
    }
    ctx->pc = 0x1DECE8u;
    // 0x1dece8: 0xc05d110  jal         func_174440
    ctx->pc = 0x1DECE8u;
    SET_GPR_U32(ctx, 31, 0x1DECF0u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DECF0u; }
        if (ctx->pc != 0x1DECF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DECF0u; }
        if (ctx->pc != 0x1DECF0u) { return; }
    }
    ctx->pc = 0x1DECF0u;
label_1decf0:
    // 0x1decf0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1decf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1decf4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1decf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1decf8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DECF8u;
    {
        const bool branch_taken_0x1decf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DECFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DECF8u;
            // 0x1decfc: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1decf8) {
            ctx->pc = 0x1DED08u;
            goto label_1ded08;
        }
    }
    ctx->pc = 0x1DED00u;
    // 0x1ded00: 0xc05d110  jal         func_174440
    ctx->pc = 0x1DED00u;
    SET_GPR_U32(ctx, 31, 0x1DED08u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED08u; }
        if (ctx->pc != 0x1DED08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED08u; }
        if (ctx->pc != 0x1DED08u) { return; }
    }
    ctx->pc = 0x1DED08u;
label_1ded08:
    // 0x1ded08: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ded08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ded0c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1ded0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ded10: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DED10u;
    {
        const bool branch_taken_0x1ded10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DED14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DED10u;
            // 0x1ded14: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded10) {
            ctx->pc = 0x1DED20u;
            goto label_1ded20;
        }
    }
    ctx->pc = 0x1DED18u;
    // 0x1ded18: 0xc05d110  jal         func_174440
    ctx->pc = 0x1DED18u;
    SET_GPR_U32(ctx, 31, 0x1DED20u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED20u; }
        if (ctx->pc != 0x1DED20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED20u; }
        if (ctx->pc != 0x1DED20u) { return; }
    }
    ctx->pc = 0x1DED20u;
label_1ded20:
    // 0x1ded20: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ded20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ded24: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1ded24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ded28: 0x14620039  bne         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1DED28u;
    {
        const bool branch_taken_0x1ded28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ded28) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DED30u;
    // 0x1ded30: 0xc056054  jal         func_158150
    ctx->pc = 0x1DED30u;
    SET_GPR_U32(ctx, 31, 0x1DED38u);
    ctx->pc = 0x158150u;
    if (runtime->hasFunction(0x158150u)) {
        auto targetFn = runtime->lookupFunction(0x158150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED38u; }
        if (ctx->pc != 0x1DED38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RnnyuNo_0x158150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED38u; }
        if (ctx->pc != 0x1DED38u) { return; }
    }
    ctx->pc = 0x1DED38u;
    // 0x1ded38: 0xc05656c  jal         func_1595B0
    ctx->pc = 0x1DED38u;
    SET_GPR_U32(ctx, 31, 0x1DED40u);
    ctx->pc = 0x1595B0u;
    if (runtime->hasFunction(0x1595B0u)) {
        auto targetFn = runtime->lookupFunction(0x1595B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED40u; }
        if (ctx->pc != 0x1DED40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResultStepInit_0x1595b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED40u; }
        if (ctx->pc != 0x1DED40u) { return; }
    }
    ctx->pc = 0x1DED40u;
    // 0x1ded40: 0xc056530  jal         func_1594C0
    ctx->pc = 0x1DED40u;
    SET_GPR_U32(ctx, 31, 0x1DED48u);
    ctx->pc = 0x1DED44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DED40u;
            // 0x1ded44: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1594C0u;
    if (runtime->hasFunction(0x1594C0u)) {
        auto targetFn = runtime->lookupFunction(0x1594C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED48u; }
        if (ctx->pc != 0x1DED48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossResultSet_0x1594c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED48u; }
        if (ctx->pc != 0x1DED48u) { return; }
    }
    ctx->pc = 0x1DED48u;
    // 0x1ded48: 0xc05886c  jal         func_1621B0
    ctx->pc = 0x1DED48u;
    SET_GPR_U32(ctx, 31, 0x1DED50u);
    ctx->pc = 0x1DED4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DED48u;
            // 0x1ded4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1621B0u;
    if (runtime->hasFunction(0x1621B0u)) {
        auto targetFn = runtime->lookupFunction(0x1621B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED50u; }
        if (ctx->pc != 0x1DED50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        bossStateSet_0x1621b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED50u; }
        if (ctx->pc != 0x1DED50u) { return; }
    }
    ctx->pc = 0x1DED50u;
    // 0x1ded50: 0xc05b984  jal         func_16E610
    ctx->pc = 0x1DED50u;
    SET_GPR_U32(ctx, 31, 0x1DED58u);
    ctx->pc = 0x1DED54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DED50u;
            // 0x1ded54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E610u;
    if (runtime->hasFunction(0x16E610u)) {
        auto targetFn = runtime->lookupFunction(0x16E610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED58u; }
        if (ctx->pc != 0x1DED58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Dead_0x16e610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED58u; }
        if (ctx->pc != 0x1DED58u) { return; }
    }
    ctx->pc = 0x1DED58u;
    // 0x1ded58: 0x100001c1  b           . + 4 + (0x1C1 << 2)
    ctx->pc = 0x1DED58u;
    {
        const bool branch_taken_0x1ded58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ded58) {
            ctx->pc = 0x1DF460u;
            goto label_1df460;
        }
    }
    ctx->pc = 0x1DED60u;
label_1ded60:
    // 0x1ded60: 0xc0656b4  jal         func_195AD0
    ctx->pc = 0x1DED60u;
    SET_GPR_U32(ctx, 31, 0x1DED68u);
    ctx->pc = 0x195AD0u;
    if (runtime->hasFunction(0x195AD0u)) {
        auto targetFn = runtime->lookupFunction(0x195AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED68u; }
        if (ctx->pc != 0x1DED68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotBloadCastDead2_0x195ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED68u; }
        if (ctx->pc != 0x1DED68u) { return; }
    }
    ctx->pc = 0x1DED68u;
    // 0x1ded68: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ded68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ded6c: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x1ded6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x1ded70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ded70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ded74: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1ded74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ded78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ded78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ded7c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1DED7Cu;
    {
        const bool branch_taken_0x1ded7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DED80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DED7Cu;
            // 0x1ded80: 0x24620124  addiu       $v0, $v1, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded7c) {
            ctx->pc = 0x1DEDA8u;
            goto label_1deda8;
        }
    }
    ctx->pc = 0x1DED84u;
    // 0x1ded84: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1ded84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ded88: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x1ded88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x1ded8c: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1ded8cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x1ded90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ded90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ded94: 0x0  nop
    ctx->pc = 0x1ded94u;
    // NOP
    // 0x1ded98: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ded98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ded9c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1DED9Cu;
    {
        const bool branch_taken_0x1ded9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DED9Cu;
            // 0x1deda0: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded9c) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DEDA4u;
    // 0x1deda4: 0x0  nop
    ctx->pc = 0x1deda4u;
    // NOP
label_1deda8:
    // 0x1deda8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1deda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1dedac: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1dedacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1dedb0: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1dedb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1dedb4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1dedb4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x1dedb8: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1dedb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1dedbc: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1dedbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1dedc0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1dedc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1dedc4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1DEDC4u;
    {
        const bool branch_taken_0x1dedc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEDC4u;
            // 0x1dedc8: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dedc4) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DEDCCu;
    // 0x1dedcc: 0x0  nop
    ctx->pc = 0x1dedccu;
    // NOP
label_1dedd0:
    // 0x1dedd0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1dedd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1dedd4: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1dedd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1dedd8: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DEDD8u;
    {
        const bool branch_taken_0x1dedd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dedd8) {
            ctx->pc = 0x1DEE10u;
            goto label_1dee10;
        }
    }
    ctx->pc = 0x1DEDE0u;
    // 0x1dede0: 0xc056054  jal         func_158150
    ctx->pc = 0x1DEDE0u;
    SET_GPR_U32(ctx, 31, 0x1DEDE8u);
    ctx->pc = 0x158150u;
    if (runtime->hasFunction(0x158150u)) {
        auto targetFn = runtime->lookupFunction(0x158150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEDE8u; }
        if (ctx->pc != 0x1DEDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RnnyuNo_0x158150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEDE8u; }
        if (ctx->pc != 0x1DEDE8u) { return; }
    }
    ctx->pc = 0x1DEDE8u;
    // 0x1dede8: 0xc05656c  jal         func_1595B0
    ctx->pc = 0x1DEDE8u;
    SET_GPR_U32(ctx, 31, 0x1DEDF0u);
    ctx->pc = 0x1595B0u;
    if (runtime->hasFunction(0x1595B0u)) {
        auto targetFn = runtime->lookupFunction(0x1595B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEDF0u; }
        if (ctx->pc != 0x1DEDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResultStepInit_0x1595b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEDF0u; }
        if (ctx->pc != 0x1DEDF0u) { return; }
    }
    ctx->pc = 0x1DEDF0u;
    // 0x1dedf0: 0xc056530  jal         func_1594C0
    ctx->pc = 0x1DEDF0u;
    SET_GPR_U32(ctx, 31, 0x1DEDF8u);
    ctx->pc = 0x1DEDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEDF0u;
            // 0x1dedf4: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1594C0u;
    if (runtime->hasFunction(0x1594C0u)) {
        auto targetFn = runtime->lookupFunction(0x1594C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEDF8u; }
        if (ctx->pc != 0x1DEDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossResultSet_0x1594c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEDF8u; }
        if (ctx->pc != 0x1DEDF8u) { return; }
    }
    ctx->pc = 0x1DEDF8u;
    // 0x1dedf8: 0xc05886c  jal         func_1621B0
    ctx->pc = 0x1DEDF8u;
    SET_GPR_U32(ctx, 31, 0x1DEE00u);
    ctx->pc = 0x1DEDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEDF8u;
            // 0x1dedfc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1621B0u;
    if (runtime->hasFunction(0x1621B0u)) {
        auto targetFn = runtime->lookupFunction(0x1621B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE00u; }
        if (ctx->pc != 0x1DEE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        bossStateSet_0x1621b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE00u; }
        if (ctx->pc != 0x1DEE00u) { return; }
    }
    ctx->pc = 0x1DEE00u;
    // 0x1dee00: 0xc05b984  jal         func_16E610
    ctx->pc = 0x1DEE00u;
    SET_GPR_U32(ctx, 31, 0x1DEE08u);
    ctx->pc = 0x1DEE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEE00u;
            // 0x1dee04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E610u;
    if (runtime->hasFunction(0x16E610u)) {
        auto targetFn = runtime->lookupFunction(0x16E610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE08u; }
        if (ctx->pc != 0x1DEE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Dead_0x16e610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE08u; }
        if (ctx->pc != 0x1DEE08u) { return; }
    }
    ctx->pc = 0x1DEE08u;
    // 0x1dee08: 0x10000195  b           . + 4 + (0x195 << 2)
    ctx->pc = 0x1DEE08u;
    {
        const bool branch_taken_0x1dee08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dee08) {
            ctx->pc = 0x1DF460u;
            goto label_1df460;
        }
    }
    ctx->pc = 0x1DEE10u;
label_1dee10:
    // 0x1dee10: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x1DEE10u;
    SET_GPR_U32(ctx, 31, 0x1DEE18u);
    ctx->pc = 0x1DEE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEE10u;
            // 0x1dee14: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE18u; }
        if (ctx->pc != 0x1DEE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE18u; }
        if (ctx->pc != 0x1DEE18u) { return; }
    }
    ctx->pc = 0x1DEE18u;
    // 0x1dee18: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1dee18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dee1c: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1dee1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dee20: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x1DEE20u;
    SET_GPR_U32(ctx, 31, 0x1DEE28u);
    ctx->pc = 0x1DEE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEE20u;
            // 0x1dee24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE28u; }
        if (ctx->pc != 0x1DEE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE28u; }
        if (ctx->pc != 0x1DEE28u) { return; }
    }
    ctx->pc = 0x1DEE28u;
    // 0x1dee28: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1dee28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dee2c: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1dee2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dee30: 0xc04b804  jal         func_12E010
    ctx->pc = 0x1DEE30u;
    SET_GPR_U32(ctx, 31, 0x1DEE38u);
    ctx->pc = 0x1DEE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEE30u;
            // 0x1dee34: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE38u; }
        if (ctx->pc != 0x1DEE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE38u; }
        if (ctx->pc != 0x1DEE38u) { return; }
    }
    ctx->pc = 0x1DEE38u;
    // 0x1dee38: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1dee38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dee3c: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1dee3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dee40: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x1DEE40u;
    SET_GPR_U32(ctx, 31, 0x1DEE48u);
    ctx->pc = 0x1DEE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEE40u;
            // 0x1dee44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE48u; }
        if (ctx->pc != 0x1DEE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE48u; }
        if (ctx->pc != 0x1DEE48u) { return; }
    }
    ctx->pc = 0x1DEE48u;
    // 0x1dee48: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1dee48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dee4c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1dee4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dee50: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x1DEE50u;
    SET_GPR_U32(ctx, 31, 0x1DEE58u);
    ctx->pc = 0x1DEE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEE50u;
            // 0x1dee54: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE58u; }
        if (ctx->pc != 0x1DEE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE58u; }
        if (ctx->pc != 0x1DEE58u) { return; }
    }
    ctx->pc = 0x1DEE58u;
    // 0x1dee58: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1dee58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1dee5c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1dee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1dee60: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1dee60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1dee64: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DEE64u;
    {
        const bool branch_taken_0x1dee64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dee64) {
            ctx->pc = 0x1DEEB8u;
            goto label_1deeb8;
        }
    }
    ctx->pc = 0x1DEE6Cu;
    // 0x1dee6c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1dee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1dee70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DEE70u;
    {
        const bool branch_taken_0x1dee70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dee70) {
            ctx->pc = 0x1DEE88u;
            goto label_1dee88;
        }
    }
    ctx->pc = 0x1DEE78u;
    // 0x1dee78: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x1DEE78u;
    SET_GPR_U32(ctx, 31, 0x1DEE80u);
    ctx->pc = 0x1DEE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEE78u;
            // 0x1dee7c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE80u; }
        if (ctx->pc != 0x1DEE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE80u; }
        if (ctx->pc != 0x1DEE80u) { return; }
    }
    ctx->pc = 0x1DEE80u;
    // 0x1dee80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DEE80u;
    {
        const bool branch_taken_0x1dee80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dee80) {
            ctx->pc = 0x1DEE90u;
            goto label_1dee90;
        }
    }
    ctx->pc = 0x1DEE88u;
label_1dee88:
    // 0x1dee88: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1DEE88u;
    SET_GPR_U32(ctx, 31, 0x1DEE90u);
    ctx->pc = 0x1DEE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEE88u;
            // 0x1dee8c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE90u; }
        if (ctx->pc != 0x1DEE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE90u; }
        if (ctx->pc != 0x1DEE90u) { return; }
    }
    ctx->pc = 0x1DEE90u;
label_1dee90:
    // 0x1dee90: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1dee90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1dee94: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DEE94u;
    {
        const bool branch_taken_0x1dee94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dee94) {
            ctx->pc = 0x1DEEA8u;
            goto label_1deea8;
        }
    }
    ctx->pc = 0x1DEE9Cu;
    // 0x1dee9c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1DEE9Cu;
    {
        const bool branch_taken_0x1dee9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEE9Cu;
            // 0x1deea0: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dee9c) {
            ctx->pc = 0x1DEF08u;
            goto label_1def08;
        }
    }
    ctx->pc = 0x1DEEA4u;
    // 0x1deea4: 0x0  nop
    ctx->pc = 0x1deea4u;
    // NOP
label_1deea8:
    // 0x1deea8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1deea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1deeac: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1DEEACu;
    {
        const bool branch_taken_0x1deeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEEACu;
            // 0x1deeb0: 0xae03010c  sw          $v1, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deeac) {
            ctx->pc = 0x1DEF08u;
            goto label_1def08;
        }
    }
    ctx->pc = 0x1DEEB4u;
    // 0x1deeb4: 0x0  nop
    ctx->pc = 0x1deeb4u;
    // NOP
label_1deeb8:
    // 0x1deeb8: 0x286102bc  slti        $at, $v1, 0x2BC
    ctx->pc = 0x1deeb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)700) ? 1 : 0);
    // 0x1deebc: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1DEEBCu;
    {
        const bool branch_taken_0x1deebc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1deebc) {
            ctx->pc = 0x1DEEF8u;
            goto label_1deef8;
        }
    }
    ctx->pc = 0x1DEEC4u;
    // 0x1deec4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1deec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1deec8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1deec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1deecc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1deeccu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1deed0: 0x0  nop
    ctx->pc = 0x1deed0u;
    // NOP
    // 0x1deed4: 0x0  nop
    ctx->pc = 0x1deed4u;
    // NOP
    // 0x1deed8: 0x1010  mfhi        $v0
    ctx->pc = 0x1deed8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1deedc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DEEDCu;
    {
        const bool branch_taken_0x1deedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1deedc) {
            ctx->pc = 0x1DEEF8u;
            goto label_1deef8;
        }
    }
    ctx->pc = 0x1DEEE4u;
    // 0x1deee4: 0xc060500  jal         func_181400
    ctx->pc = 0x1DEEE4u;
    SET_GPR_U32(ctx, 31, 0x1DEEECu);
    ctx->pc = 0x1DEEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEEE4u;
            // 0x1deee8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181400u;
    if (runtime->hasFunction(0x181400u)) {
        auto targetFn = runtime->lookupFunction(0x181400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEEECu; }
        if (ctx->pc != 0x1DEEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRedColor_0x181400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEEECu; }
        if (ctx->pc != 0x1DEEECu) { return; }
    }
    ctx->pc = 0x1DEEECu;
    // 0x1deeec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DEEECu;
    {
        const bool branch_taken_0x1deeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1deeec) {
            ctx->pc = 0x1DEF00u;
            goto label_1def00;
        }
    }
    ctx->pc = 0x1DEEF4u;
    // 0x1deef4: 0x0  nop
    ctx->pc = 0x1deef4u;
    // NOP
label_1deef8:
    // 0x1deef8: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1DEEF8u;
    SET_GPR_U32(ctx, 31, 0x1DEF00u);
    ctx->pc = 0x1DEEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEEF8u;
            // 0x1deefc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEF00u; }
        if (ctx->pc != 0x1DEF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEF00u; }
        if (ctx->pc != 0x1DEF00u) { return; }
    }
    ctx->pc = 0x1DEF00u;
label_1def00:
    // 0x1def00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1def00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1def04: 0xae03010c  sw          $v1, 0x10C($s0)
    ctx->pc = 0x1def04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
label_1def08:
    // 0x1def08: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1def08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1def0c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1def0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1def10: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1def10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1def14: 0x1c80000c  bgtz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DEF14u;
    {
        const bool branch_taken_0x1def14 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x1def14) {
            ctx->pc = 0x1DEF48u;
            goto label_1def48;
        }
    }
    ctx->pc = 0x1DEF1Cu;
    // 0x1def1c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1def1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1def20: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1def20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1def24: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x1def24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1def28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1def28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1def2c: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x1def2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x1def30: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x1def30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1def34: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x1DEF34u;
    SET_GPR_U32(ctx, 31, 0x1DEF3Cu);
    ctx->pc = 0x1DEF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEF34u;
            // 0x1def38: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEF3Cu; }
        if (ctx->pc != 0x1DEF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEF3Cu; }
        if (ctx->pc != 0x1DEF3Cu) { return; }
    }
    ctx->pc = 0x1DEF3Cu;
    // 0x1def3c: 0x10000144  b           . + 4 + (0x144 << 2)
    ctx->pc = 0x1DEF3Cu;
    {
        const bool branch_taken_0x1def3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1def3c) {
            ctx->pc = 0x1DF450u;
            goto label_1df450;
        }
    }
    ctx->pc = 0x1DEF44u;
    // 0x1def44: 0x0  nop
    ctx->pc = 0x1def44u;
    // NOP
label_1def48:
    // 0x1def48: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1def48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1def4c: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DEF4Cu;
    {
        const bool branch_taken_0x1def4c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DEF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEF4Cu;
            // 0x1def50: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1def4c) {
            ctx->pc = 0x1DEF68u;
            goto label_1def68;
        }
    }
    ctx->pc = 0x1DEF54u;
    // 0x1def54: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DEF54u;
    {
        const bool branch_taken_0x1def54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1def54) {
            ctx->pc = 0x1DEF68u;
            goto label_1def68;
        }
    }
    ctx->pc = 0x1DEF5Cu;
    // 0x1def5c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1def5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1def60: 0x1000013b  b           . + 4 + (0x13B << 2)
    ctx->pc = 0x1DEF60u;
    {
        const bool branch_taken_0x1def60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEF60u;
            // 0x1def64: 0xae030028  sw          $v1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1def60) {
            ctx->pc = 0x1DF450u;
            goto label_1df450;
        }
    }
    ctx->pc = 0x1DEF68u;
label_1def68:
    // 0x1def68: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1def68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1def6c: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1def6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1def70: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1def70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1def74: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1def74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1def78: 0x24c6ba00  addiu       $a2, $a2, -0x4600
    ctx->pc = 0x1def78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949376));
    // 0x1def7c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1def7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1def80: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1def80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1def84: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x1def84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x1def88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1def88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1def8c: 0x0  nop
    ctx->pc = 0x1def8cu;
    // NOP
    // 0x1def90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1def90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1def94: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1def94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1def98: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1def98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1def9c: 0x2442ff88  addiu       $v0, $v0, -0x78
    ctx->pc = 0x1def9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967176));
    // 0x1defa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1defa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1defa4: 0x0  nop
    ctx->pc = 0x1defa4u;
    // NOP
    // 0x1defa8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1defa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1defac: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1defacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1defb0: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1defb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1defb4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1defb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1defb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1defb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1defbc: 0x0  nop
    ctx->pc = 0x1defbcu;
    // NOP
    // 0x1defc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1defc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1defc4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1defc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1defc8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1defc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1defcc: 0x2442005a  addiu       $v0, $v0, 0x5A
    ctx->pc = 0x1defccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
    // 0x1defd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1defd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1defd4: 0x0  nop
    ctx->pc = 0x1defd4u;
    // NOP
    // 0x1defd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1defd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1defdc: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1DEFDCu;
    SET_GPR_U32(ctx, 31, 0x1DEFE4u);
    ctx->pc = 0x1DEFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEFDCu;
            // 0x1defe0: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEFE4u; }
        if (ctx->pc != 0x1DEFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEFE4u; }
        if (ctx->pc != 0x1DEFE4u) { return; }
    }
    ctx->pc = 0x1DEFE4u;
    // 0x1defe4: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1defe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1defe8: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1defe8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1defec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1defecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1deff0: 0x2605003c  addiu       $a1, $s0, 0x3C
    ctx->pc = 0x1deff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x1deff4: 0x24c6ba00  addiu       $a2, $a2, -0x4600
    ctx->pc = 0x1deff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949376));
    // 0x1deff8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1deff8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deffc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1deffcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df000: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1df000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x1df004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df008: 0x0  nop
    ctx->pc = 0x1df008u;
    // NOP
    // 0x1df00c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df00cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df010: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x1df010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x1df014: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1df014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1df018: 0x2442005a  addiu       $v0, $v0, 0x5A
    ctx->pc = 0x1df018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
    // 0x1df01c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df01cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df020: 0x0  nop
    ctx->pc = 0x1df020u;
    // NOP
    // 0x1df024: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df024u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df028: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x1df028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x1df02c: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1df02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1df030: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1df030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1df034: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df038: 0x0  nop
    ctx->pc = 0x1df038u;
    // NOP
    // 0x1df03c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df03cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df040: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x1df040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x1df044: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1df044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1df048: 0x24420082  addiu       $v0, $v0, 0x82
    ctx->pc = 0x1df048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 130));
    // 0x1df04c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df04cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df050: 0x0  nop
    ctx->pc = 0x1df050u;
    // NOP
    // 0x1df054: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df054u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df058: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1DF058u;
    SET_GPR_U32(ctx, 31, 0x1DF060u);
    ctx->pc = 0x1DF05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF058u;
            // 0x1df05c: 0xe6000048  swc1        $f0, 0x48($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF060u; }
        if (ctx->pc != 0x1DF060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF060u; }
        if (ctx->pc != 0x1DF060u) { return; }
    }
    ctx->pc = 0x1DF060u;
    // 0x1df060: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1df060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1df064: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1df064u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1df068: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1df068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1df06c: 0x2605004c  addiu       $a1, $s0, 0x4C
    ctx->pc = 0x1df06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x1df070: 0x24c6ba00  addiu       $a2, $a2, -0x4600
    ctx->pc = 0x1df070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949376));
    // 0x1df074: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1df074u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df078: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1df078u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df07c: 0x2442ff94  addiu       $v0, $v0, -0x6C
    ctx->pc = 0x1df07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967188));
    // 0x1df080: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df084: 0x0  nop
    ctx->pc = 0x1df084u;
    // NOP
    // 0x1df088: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df088u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df08c: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x1df08cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x1df090: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1df090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1df094: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x1df094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x1df098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df09c: 0x0  nop
    ctx->pc = 0x1df09cu;
    // NOP
    // 0x1df0a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df0a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df0a4: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1df0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1df0a8: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1df0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1df0ac: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x1df0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x1df0b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df0b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df0b4: 0x0  nop
    ctx->pc = 0x1df0b4u;
    // NOP
    // 0x1df0b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df0b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df0bc: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x1df0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x1df0c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1df0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1df0c4: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1df0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1df0c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df0c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df0cc: 0x0  nop
    ctx->pc = 0x1df0ccu;
    // NOP
    // 0x1df0d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df0d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df0d4: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1DF0D4u;
    SET_GPR_U32(ctx, 31, 0x1DF0DCu);
    ctx->pc = 0x1DF0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF0D4u;
            // 0x1df0d8: 0xe6000058  swc1        $f0, 0x58($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF0DCu; }
        if (ctx->pc != 0x1DF0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF0DCu; }
        if (ctx->pc != 0x1DF0DCu) { return; }
    }
    ctx->pc = 0x1DF0DCu;
    // 0x1df0dc: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1df0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1df0e0: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1df0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1df0e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1df0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1df0e8: 0x2605005c  addiu       $a1, $s0, 0x5C
    ctx->pc = 0x1df0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x1df0ec: 0x24c6ba00  addiu       $a2, $a2, -0x4600
    ctx->pc = 0x1df0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949376));
    // 0x1df0f0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1df0f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df0f4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1df0f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df0f8: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1df0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1df0fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df0fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df100: 0x0  nop
    ctx->pc = 0x1df100u;
    // NOP
    // 0x1df104: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df108: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x1df108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x1df10c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1df10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1df110: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x1df110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x1df114: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df118: 0x0  nop
    ctx->pc = 0x1df118u;
    // NOP
    // 0x1df11c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df11cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df120: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x1df120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x1df124: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1df124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1df128: 0x2442006c  addiu       $v0, $v0, 0x6C
    ctx->pc = 0x1df128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x1df12c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df12cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df130: 0x0  nop
    ctx->pc = 0x1df130u;
    // NOP
    // 0x1df134: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df134u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df138: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x1df138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x1df13c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1df13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1df140: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1df140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1df144: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df148: 0x0  nop
    ctx->pc = 0x1df148u;
    // NOP
    // 0x1df14c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df14cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df150: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1DF150u;
    SET_GPR_U32(ctx, 31, 0x1DF158u);
    ctx->pc = 0x1DF154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF150u;
            // 0x1df154: 0xe6000068  swc1        $f0, 0x68($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF158u; }
        if (ctx->pc != 0x1DF158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF158u; }
        if (ctx->pc != 0x1DF158u) { return; }
    }
    ctx->pc = 0x1DF158u;
    // 0x1df158: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1df158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1df15c: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1df15cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1df160: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1df160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1df164: 0x2605006c  addiu       $a1, $s0, 0x6C
    ctx->pc = 0x1df164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x1df168: 0x24c6ba00  addiu       $a2, $a2, -0x4600
    ctx->pc = 0x1df168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949376));
    // 0x1df16c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1df16cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df170: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1df170u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df174: 0x2442ffbc  addiu       $v0, $v0, -0x44
    ctx->pc = 0x1df174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967228));
    // 0x1df178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df17c: 0x0  nop
    ctx->pc = 0x1df17cu;
    // NOP
    // 0x1df180: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df180u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df184: 0xe600006c  swc1        $f0, 0x6C($s0)
    ctx->pc = 0x1df184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x1df188: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1df188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1df18c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1df18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1df190: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df194: 0x0  nop
    ctx->pc = 0x1df194u;
    // NOP
    // 0x1df198: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df198u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df19c: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1df19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1df1a0: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1df1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1df1a4: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x1df1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x1df1a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df1a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df1ac: 0x0  nop
    ctx->pc = 0x1df1acu;
    // NOP
    // 0x1df1b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df1b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df1b4: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1df1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1df1b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1df1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1df1bc: 0x24420096  addiu       $v0, $v0, 0x96
    ctx->pc = 0x1df1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 150));
    // 0x1df1c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df1c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df1c4: 0x0  nop
    ctx->pc = 0x1df1c4u;
    // NOP
    // 0x1df1c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df1c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df1cc: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1DF1CCu;
    SET_GPR_U32(ctx, 31, 0x1DF1D4u);
    ctx->pc = 0x1DF1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF1CCu;
            // 0x1df1d0: 0xe6000078  swc1        $f0, 0x78($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF1D4u; }
        if (ctx->pc != 0x1DF1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF1D4u; }
        if (ctx->pc != 0x1DF1D4u) { return; }
    }
    ctx->pc = 0x1DF1D4u;
    // 0x1df1d4: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1df1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1df1d8: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1df1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1df1dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1df1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1df1e0: 0x2605007c  addiu       $a1, $s0, 0x7C
    ctx->pc = 0x1df1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
    // 0x1df1e4: 0x24c6ba00  addiu       $a2, $a2, -0x4600
    ctx->pc = 0x1df1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949376));
    // 0x1df1e8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1df1e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df1ec: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1df1ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df1f0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1df1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1df1f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df1f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df1f8: 0x0  nop
    ctx->pc = 0x1df1f8u;
    // NOP
    // 0x1df1fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df1fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df200: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1df200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1df204: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1df204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1df208: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1df208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1df20c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df20cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df210: 0x0  nop
    ctx->pc = 0x1df210u;
    // NOP
    // 0x1df214: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df214u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df218: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1df218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1df21c: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1df21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1df220: 0x24420044  addiu       $v0, $v0, 0x44
    ctx->pc = 0x1df220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x1df224: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df228: 0x0  nop
    ctx->pc = 0x1df228u;
    // NOP
    // 0x1df22c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df22cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df230: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x1df230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x1df234: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1df234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1df238: 0x24420096  addiu       $v0, $v0, 0x96
    ctx->pc = 0x1df238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 150));
    // 0x1df23c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df23cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df240: 0x0  nop
    ctx->pc = 0x1df240u;
    // NOP
    // 0x1df244: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df248: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1DF248u;
    SET_GPR_U32(ctx, 31, 0x1DF250u);
    ctx->pc = 0x1DF24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF248u;
            // 0x1df24c: 0xe6000088  swc1        $f0, 0x88($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF250u; }
        if (ctx->pc != 0x1DF250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF250u; }
        if (ctx->pc != 0x1DF250u) { return; }
    }
    ctx->pc = 0x1DF250u;
    // 0x1df250: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1df250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1df254: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1df254u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1df258: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1df258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1df25c: 0x2605008c  addiu       $a1, $s0, 0x8C
    ctx->pc = 0x1df25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    // 0x1df260: 0x24c6ba00  addiu       $a2, $a2, -0x4600
    ctx->pc = 0x1df260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949376));
    // 0x1df264: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1df264u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df268: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1df268u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df26c: 0x2442ff7e  addiu       $v0, $v0, -0x82
    ctx->pc = 0x1df26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967166));
    // 0x1df270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df274: 0x0  nop
    ctx->pc = 0x1df274u;
    // NOP
    // 0x1df278: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df278u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df27c: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x1df27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x1df280: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1df280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1df284: 0x2442ffd8  addiu       $v0, $v0, -0x28
    ctx->pc = 0x1df284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x1df288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df28c: 0x0  nop
    ctx->pc = 0x1df28cu;
    // NOP
    // 0x1df290: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df290u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df294: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x1df294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x1df298: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1df298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1df29c: 0x2442ff94  addiu       $v0, $v0, -0x6C
    ctx->pc = 0x1df29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967188));
    // 0x1df2a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df2a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df2a4: 0x0  nop
    ctx->pc = 0x1df2a4u;
    // NOP
    // 0x1df2a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df2a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df2ac: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x1df2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x1df2b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1df2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1df2b4: 0x24420082  addiu       $v0, $v0, 0x82
    ctx->pc = 0x1df2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 130));
    // 0x1df2b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df2b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df2bc: 0x0  nop
    ctx->pc = 0x1df2bcu;
    // NOP
    // 0x1df2c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df2c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df2c4: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1DF2C4u;
    SET_GPR_U32(ctx, 31, 0x1DF2CCu);
    ctx->pc = 0x1DF2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF2C4u;
            // 0x1df2c8: 0xe6000098  swc1        $f0, 0x98($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF2CCu; }
        if (ctx->pc != 0x1DF2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF2CCu; }
        if (ctx->pc != 0x1DF2CCu) { return; }
    }
    ctx->pc = 0x1DF2CCu;
    // 0x1df2cc: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1df2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1df2d0: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1df2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1df2d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1df2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1df2d8: 0x2605009c  addiu       $a1, $s0, 0x9C
    ctx->pc = 0x1df2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x1df2dc: 0x24c6ba00  addiu       $a2, $a2, -0x4600
    ctx->pc = 0x1df2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949376));
    // 0x1df2e0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1df2e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df2e4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1df2e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df2e8: 0x2442ff65  addiu       $v0, $v0, -0x9B
    ctx->pc = 0x1df2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967141));
    // 0x1df2ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df2ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df2f0: 0x0  nop
    ctx->pc = 0x1df2f0u;
    // NOP
    // 0x1df2f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df2f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df2f8: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x1df2f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x1df2fc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1df2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1df300: 0x2442ffc4  addiu       $v0, $v0, -0x3C
    ctx->pc = 0x1df300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967236));
    // 0x1df304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df308: 0x0  nop
    ctx->pc = 0x1df308u;
    // NOP
    // 0x1df30c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df30cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df310: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x1df310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x1df314: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1df314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1df318: 0x2442ff7e  addiu       $v0, $v0, -0x82
    ctx->pc = 0x1df318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967166));
    // 0x1df31c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df31cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df320: 0x0  nop
    ctx->pc = 0x1df320u;
    // NOP
    // 0x1df324: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df324u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df328: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x1df328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x1df32c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1df32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1df330: 0x2442005a  addiu       $v0, $v0, 0x5A
    ctx->pc = 0x1df330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
    // 0x1df334: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df338: 0x0  nop
    ctx->pc = 0x1df338u;
    // NOP
    // 0x1df33c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df33cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df340: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1DF340u;
    SET_GPR_U32(ctx, 31, 0x1DF348u);
    ctx->pc = 0x1DF344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF340u;
            // 0x1df344: 0xe60000a8  swc1        $f0, 0xA8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF348u; }
        if (ctx->pc != 0x1DF348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF348u; }
        if (ctx->pc != 0x1DF348u) { return; }
    }
    ctx->pc = 0x1DF348u;
    // 0x1df348: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1df348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1df34c: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1df34cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1df350: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1df350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1df354: 0x260500ac  addiu       $a1, $s0, 0xAC
    ctx->pc = 0x1df354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
    // 0x1df358: 0x24c6ba00  addiu       $a2, $a2, -0x4600
    ctx->pc = 0x1df358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949376));
    // 0x1df35c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1df35cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df360: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1df360u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df364: 0x2442006c  addiu       $v0, $v0, 0x6C
    ctx->pc = 0x1df364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x1df368: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df36c: 0x0  nop
    ctx->pc = 0x1df36cu;
    // NOP
    // 0x1df370: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df370u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df374: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x1df374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x1df378: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1df378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1df37c: 0x2442ffd8  addiu       $v0, $v0, -0x28
    ctx->pc = 0x1df37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x1df380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df384: 0x0  nop
    ctx->pc = 0x1df384u;
    // NOP
    // 0x1df388: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df388u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df38c: 0xe60000b0  swc1        $f0, 0xB0($s0)
    ctx->pc = 0x1df38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x1df390: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1df390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1df394: 0x24420082  addiu       $v0, $v0, 0x82
    ctx->pc = 0x1df394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 130));
    // 0x1df398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df39c: 0x0  nop
    ctx->pc = 0x1df39cu;
    // NOP
    // 0x1df3a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df3a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df3a4: 0xe60000b4  swc1        $f0, 0xB4($s0)
    ctx->pc = 0x1df3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
    // 0x1df3a8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1df3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1df3ac: 0x24420082  addiu       $v0, $v0, 0x82
    ctx->pc = 0x1df3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 130));
    // 0x1df3b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df3b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df3b4: 0x0  nop
    ctx->pc = 0x1df3b4u;
    // NOP
    // 0x1df3b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df3b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df3bc: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1DF3BCu;
    SET_GPR_U32(ctx, 31, 0x1DF3C4u);
    ctx->pc = 0x1DF3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF3BCu;
            // 0x1df3c0: 0xe60000b8  swc1        $f0, 0xB8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF3C4u; }
        if (ctx->pc != 0x1DF3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF3C4u; }
        if (ctx->pc != 0x1DF3C4u) { return; }
    }
    ctx->pc = 0x1DF3C4u;
    // 0x1df3c4: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1df3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1df3c8: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1df3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1df3cc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1df3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1df3d0: 0x260500bc  addiu       $a1, $s0, 0xBC
    ctx->pc = 0x1df3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 188));
    // 0x1df3d4: 0x24c6ba00  addiu       $a2, $a2, -0x4600
    ctx->pc = 0x1df3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949376));
    // 0x1df3d8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1df3d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df3dc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1df3dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df3e0: 0x24420082  addiu       $v0, $v0, 0x82
    ctx->pc = 0x1df3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 130));
    // 0x1df3e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df3e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df3e8: 0x0  nop
    ctx->pc = 0x1df3e8u;
    // NOP
    // 0x1df3ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df3ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df3f0: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x1df3f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
    // 0x1df3f4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1df3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1df3f8: 0x2442ffc4  addiu       $v0, $v0, -0x3C
    ctx->pc = 0x1df3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967236));
    // 0x1df3fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df3fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df400: 0x0  nop
    ctx->pc = 0x1df400u;
    // NOP
    // 0x1df404: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df404u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df408: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x1df408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x1df40c: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1df40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1df410: 0x2442009b  addiu       $v0, $v0, 0x9B
    ctx->pc = 0x1df410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 155));
    // 0x1df414: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df418: 0x0  nop
    ctx->pc = 0x1df418u;
    // NOP
    // 0x1df41c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df41cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df420: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1df420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1df424: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1df424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1df428: 0x2442005a  addiu       $v0, $v0, 0x5A
    ctx->pc = 0x1df428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
    // 0x1df42c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df42cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df430: 0x0  nop
    ctx->pc = 0x1df430u;
    // NOP
    // 0x1df434: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1df434u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1df438: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1DF438u;
    SET_GPR_U32(ctx, 31, 0x1DF440u);
    ctx->pc = 0x1DF43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF438u;
            // 0x1df43c: 0xe60000c8  swc1        $f0, 0xC8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF440u; }
        if (ctx->pc != 0x1DF440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF440u; }
        if (ctx->pc != 0x1DF440u) { return; }
    }
    ctx->pc = 0x1DF440u;
    // 0x1df440: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1df440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1df444: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1df444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1df448: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1df448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1df44c: 0x0  nop
    ctx->pc = 0x1df44cu;
    // NOP
label_1df450:
    // 0x1df450: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1df450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1df454: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1df454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1df458: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1df458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x1df45c: 0x0  nop
    ctx->pc = 0x1df45cu;
    // NOP
label_1df460:
    // 0x1df460: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1df460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1df464: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1df464u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1df468: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1df468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1df46c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1df46cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df470: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1df470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df474: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1df474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df478: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF478u;
            // 0x1df47c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DBD00u: goto label_1dbd00;
            case 0x1DBD38u: goto label_1dbd38;
            case 0x1DBDC0u: goto label_1dbdc0;
            case 0x1DBDF8u: goto label_1dbdf8;
            case 0x1DBE30u: goto label_1dbe30;
            case 0x1DBE68u: goto label_1dbe68;
            case 0x1DBEA8u: goto label_1dbea8;
            case 0x1DBEC0u: goto label_1dbec0;
            case 0x1DBEC8u: goto label_1dbec8;
            case 0x1DBEF0u: goto label_1dbef0;
            case 0x1DBF28u: goto label_1dbf28;
            case 0x1DBF78u: goto label_1dbf78;
            case 0x1DBF88u: goto label_1dbf88;
            case 0x1DBFD8u: goto label_1dbfd8;
            case 0x1DC020u: goto label_1dc020;
            case 0x1DC048u: goto label_1dc048;
            case 0x1DC070u: goto label_1dc070;
            case 0x1DC0D4u: goto label_1dc0d4;
            case 0x1DC110u: goto label_1dc110;
            case 0x1DC138u: goto label_1dc138;
            case 0x1DC148u: goto label_1dc148;
            case 0x1DC280u: goto label_1dc280;
            case 0x1DC2A0u: goto label_1dc2a0;
            case 0x1DC2ECu: goto label_1dc2ec;
            case 0x1DC328u: goto label_1dc328;
            case 0x1DC350u: goto label_1dc350;
            case 0x1DC360u: goto label_1dc360;
            case 0x1DC4D8u: goto label_1dc4d8;
            case 0x1DC4F8u: goto label_1dc4f8;
            case 0x1DC6F0u: goto label_1dc6f0;
            case 0x1DC710u: goto label_1dc710;
            case 0x1DC77Cu: goto label_1dc77c;
            case 0x1DC830u: goto label_1dc830;
            case 0x1DC8C0u: goto label_1dc8c0;
            case 0x1DC8D0u: goto label_1dc8d0;
            case 0x1DC940u: goto label_1dc940;
            case 0x1DC98Cu: goto label_1dc98c;
            case 0x1DCA40u: goto label_1dca40;
            case 0x1DCAD0u: goto label_1dcad0;
            case 0x1DCAE0u: goto label_1dcae0;
            case 0x1DCB50u: goto label_1dcb50;
            case 0x1DCB88u: goto label_1dcb88;
            case 0x1DCC40u: goto label_1dcc40;
            case 0x1DCCD0u: goto label_1dccd0;
            case 0x1DCCE0u: goto label_1dcce0;
            case 0x1DCD50u: goto label_1dcd50;
            case 0x1DCE40u: goto label_1dce40;
            case 0x1DCE58u: goto label_1dce58;
            case 0x1DD0B0u: goto label_1dd0b0;
            case 0x1DD0C8u: goto label_1dd0c8;
            case 0x1DD100u: goto label_1dd100;
            case 0x1DD150u: goto label_1dd150;
            case 0x1DD228u: goto label_1dd228;
            case 0x1DD498u: goto label_1dd498;
            case 0x1DD4B0u: goto label_1dd4b0;
            case 0x1DD4E8u: goto label_1dd4e8;
            case 0x1DD538u: goto label_1dd538;
            case 0x1DD550u: goto label_1dd550;
            case 0x1DD6B0u: goto label_1dd6b0;
            case 0x1DD6D0u: goto label_1dd6d0;
            case 0x1DD710u: goto label_1dd710;
            case 0x1DD740u: goto label_1dd740;
            case 0x1DD7ECu: goto label_1dd7ec;
            case 0x1DDA10u: goto label_1dda10;
            case 0x1DDA3Cu: goto label_1dda3c;
            case 0x1DDA58u: goto label_1dda58;
            case 0x1DDC80u: goto label_1ddc80;
            case 0x1DDC98u: goto label_1ddc98;
            case 0x1DDEC8u: goto label_1ddec8;
            case 0x1DDEF8u: goto label_1ddef8;
            case 0x1DDF28u: goto label_1ddf28;
            case 0x1DDFD4u: goto label_1ddfd4;
            case 0x1DE1F8u: goto label_1de1f8;
            case 0x1DE240u: goto label_1de240;
            case 0x1DE468u: goto label_1de468;
            case 0x1DE49Cu: goto label_1de49c;
            case 0x1DE6C0u: goto label_1de6c0;
            case 0x1DE6E8u: goto label_1de6e8;
            case 0x1DE8C8u: goto label_1de8c8;
            case 0x1DE910u: goto label_1de910;
            case 0x1DE958u: goto label_1de958;
            case 0x1DE990u: goto label_1de990;
            case 0x1DE9C8u: goto label_1de9c8;
            case 0x1DE9E0u: goto label_1de9e0;
            case 0x1DEA40u: goto label_1dea40;
            case 0x1DEA58u: goto label_1dea58;
            case 0x1DEA90u: goto label_1dea90;
            case 0x1DEAA8u: goto label_1deaa8;
            case 0x1DEB08u: goto label_1deb08;
            case 0x1DEB20u: goto label_1deb20;
            case 0x1DEB48u: goto label_1deb48;
            case 0x1DEC18u: goto label_1dec18;
            case 0x1DEC60u: goto label_1dec60;
            case 0x1DEC78u: goto label_1dec78;
            case 0x1DEC90u: goto label_1dec90;
            case 0x1DECA8u: goto label_1deca8;
            case 0x1DECC0u: goto label_1decc0;
            case 0x1DECD8u: goto label_1decd8;
            case 0x1DECF0u: goto label_1decf0;
            case 0x1DED08u: goto label_1ded08;
            case 0x1DED20u: goto label_1ded20;
            case 0x1DED60u: goto label_1ded60;
            case 0x1DEDA8u: goto label_1deda8;
            case 0x1DEDD0u: goto label_1dedd0;
            case 0x1DEE10u: goto label_1dee10;
            case 0x1DEE88u: goto label_1dee88;
            case 0x1DEE90u: goto label_1dee90;
            case 0x1DEEA8u: goto label_1deea8;
            case 0x1DEEB8u: goto label_1deeb8;
            case 0x1DEEF8u: goto label_1deef8;
            case 0x1DEF00u: goto label_1def00;
            case 0x1DEF08u: goto label_1def08;
            case 0x1DEF48u: goto label_1def48;
            case 0x1DEF68u: goto label_1def68;
            case 0x1DF450u: goto label_1df450;
            case 0x1DF460u: goto label_1df460;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DF480u;
}
