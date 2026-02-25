#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateLaser2
// Address: 0x153370 - 0x1534e8
void CreateLaser2_0x153370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateLaser2_0x153370");
#endif

    ctx->pc = 0x153370u;

    // 0x153370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x153370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x153374: 0x3c024ec4  lui         $v0, 0x4EC4
    ctx->pc = 0x153374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20164 << 16));
    // 0x153378: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x153378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15337c: 0x3442ec4f  ori         $v0, $v0, 0xEC4F
    ctx->pc = 0x15337cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)60495u)));
    // 0x153380: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x153380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x153384: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x153384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x153388: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x153388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15338c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15338cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153390: 0x500018  mult        $zero, $v0, $s0
    ctx->pc = 0x153390u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x153394: 0x101fc2  srl         $v1, $s0, 31
    ctx->pc = 0x153394u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x153398: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x153398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15339c: 0x1010  mfhi        $v0
    ctx->pc = 0x15339cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1533a0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1533a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1533a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1533a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1533a8: 0xc055028  jal         func_1540A0
    ctx->pc = 0x1533A8u;
    SET_GPR_U32(ctx, 31, 0x1533B0u);
    ctx->pc = 0x1533ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1533A8u;
            // 0x1533ac: 0x24450008  addiu       $a1, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1540A0u;
    if (runtime->hasFunction(0x1540A0u)) {
        auto targetFn = runtime->lookupFunction(0x1540A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1533B0u; }
        if (ctx->pc != 0x1533B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateMzlLaser_0x1540a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1533B0u; }
        if (ctx->pc != 0x1533B0u) { return; }
    }
    ctx->pc = 0x1533B0u;
    // 0x1533b0: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x1533B0u;
    SET_GPR_U32(ctx, 31, 0x1533B8u);
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1533B8u; }
        if (ctx->pc != 0x1533B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1533B8u; }
        if (ctx->pc != 0x1533B8u) { return; }
    }
    ctx->pc = 0x1533B8u;
    // 0x1533b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1533b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1533bc: 0x2404ffd8  addiu       $a0, $zero, -0x28
    ctx->pc = 0x1533bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x1533c0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1533c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1533c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1533c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1533c8: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1533c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1533cc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1533ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1533d0: 0x8e260098  lw          $a2, 0x98($s1)
    ctx->pc = 0x1533d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x1533d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1533d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1533d8: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1533d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x1533dc: 0x8e26009c  lw          $a2, 0x9C($s1)
    ctx->pc = 0x1533dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1533e0: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x1533e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x1533e4: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1533e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1533e8: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x1533e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x1533ec: 0xac450030  sw          $a1, 0x30($v0)
    ctx->pc = 0x1533ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 5));
    // 0x1533f0: 0x8e2400a4  lw          $a0, 0xA4($s1)
    ctx->pc = 0x1533f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x1533f4: 0xac440038  sw          $a0, 0x38($v0)
    ctx->pc = 0x1533f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 4));
    // 0x1533f8: 0xac450034  sw          $a1, 0x34($v0)
    ctx->pc = 0x1533f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 5));
    // 0x1533fc: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1533fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x153400: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x153400u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x153404: 0xc6220054  lwc1        $f2, 0x54($s1)
    ctx->pc = 0x153404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x153408: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x153408u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15340c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x15340Cu;
    {
        const bool branch_taken_0x15340c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x153410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15340Cu;
            // 0x153410: 0x3c034120  lui         $v1, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15340c) {
            ctx->pc = 0x153438u;
            goto label_153438;
        }
    }
    ctx->pc = 0x153414u;
    // 0x153414: 0x3c04c120  lui         $a0, 0xC120
    ctx->pc = 0x153414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49440 << 16));
    // 0x153418: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15341c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x15341cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153420: 0x0  nop
    ctx->pc = 0x153420u;
    // NOP
    // 0x153424: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x153424u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x153428: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x153428u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15342c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15342Cu;
    {
        const bool branch_taken_0x15342c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15342Cu;
            // 0x153430: 0xe440001c  swc1        $f0, 0x1C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15342c) {
            ctx->pc = 0x153440u;
            goto label_153440;
        }
    }
    ctx->pc = 0x153434u;
    // 0x153434: 0x0  nop
    ctx->pc = 0x153434u;
    // NOP
label_153438:
    // 0x153438: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x153438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x15343c: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x15343cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_153440:
    // 0x153440: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x153440u;
    SET_GPR_U32(ctx, 31, 0x153448u);
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153448u; }
        if (ctx->pc != 0x153448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153448u; }
        if (ctx->pc != 0x153448u) { return; }
    }
    ctx->pc = 0x153448u;
    // 0x153448: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x153448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15344c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15344cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153450: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x153450u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x153454: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x153454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x153458: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x153458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x15345c: 0x2404ffd8  addiu       $a0, $zero, -0x28
    ctx->pc = 0x15345cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x153460: 0x8e260098  lw          $a2, 0x98($s1)
    ctx->pc = 0x153460u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x153464: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x153464u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153468: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x153468u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x15346c: 0x8e26009c  lw          $a2, 0x9C($s1)
    ctx->pc = 0x15346cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x153470: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x153470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x153474: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x153474u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x153478: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x153478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x15347c: 0xac450030  sw          $a1, 0x30($v0)
    ctx->pc = 0x15347cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 5));
    // 0x153480: 0x8e2400a4  lw          $a0, 0xA4($s1)
    ctx->pc = 0x153480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x153484: 0xac440038  sw          $a0, 0x38($v0)
    ctx->pc = 0x153484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 4));
    // 0x153488: 0xac450034  sw          $a1, 0x34($v0)
    ctx->pc = 0x153488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 5));
    // 0x15348c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x15348cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x153490: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x153490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x153494: 0xc6220054  lwc1        $f2, 0x54($s1)
    ctx->pc = 0x153494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x153498: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x153498u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15349c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x15349Cu;
    {
        const bool branch_taken_0x15349c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1534A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15349Cu;
            // 0x1534a0: 0x3c034120  lui         $v1, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15349c) {
            ctx->pc = 0x1534C0u;
            goto label_1534c0;
        }
    }
    ctx->pc = 0x1534A4u;
    // 0x1534a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1534a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1534a8: 0x0  nop
    ctx->pc = 0x1534a8u;
    // NOP
    // 0x1534ac: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x1534acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1534b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1534b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1534b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1534B4u;
    {
        const bool branch_taken_0x1534b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1534B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1534B4u;
            // 0x1534b8: 0xe440001c  swc1        $f0, 0x1C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1534b4) {
            ctx->pc = 0x1534C8u;
            goto label_1534c8;
        }
    }
    ctx->pc = 0x1534BCu;
    // 0x1534bc: 0x0  nop
    ctx->pc = 0x1534bcu;
    // NOP
label_1534c0:
    // 0x1534c0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1534c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1534c4: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x1534c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_1534c8:
    // 0x1534c8: 0x8e2300a4  lw          $v1, 0xA4($s1)
    ctx->pc = 0x1534c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x1534cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1534ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1534d0: 0xae2300a4  sw          $v1, 0xA4($s1)
    ctx->pc = 0x1534d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 3));
    // 0x1534d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1534d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1534d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1534d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1534dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1534dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1534e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1534E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1534E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1534E0u;
            // 0x1534e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x153438u: goto label_153438;
            case 0x153440u: goto label_153440;
            case 0x1534C0u: goto label_1534c0;
            case 0x1534C8u: goto label_1534c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1534E8u;
}
