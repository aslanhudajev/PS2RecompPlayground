#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage2BossMove4
// Address: 0x1756f0 - 0x1761e8
void Stage2BossMove4_0x1756f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage2BossMove4_0x1756f0");
#endif

    ctx->pc = 0x1756f0u;

    // 0x1756f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1756f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1756f4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1756f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1756f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1756f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1756fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1756fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x175700: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x175700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x175704: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x175704u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175708: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x175708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17570c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x17570cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x175710: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x175710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x175714: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x175714u;
    SET_GPR_U32(ctx, 31, 0x17571Cu);
    ctx->pc = 0x175718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175714u;
            // 0x175718: 0xdc25a090  ld          $a1, -0x5F70($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294942864)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17571Cu; }
        if (ctx->pc != 0x17571Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17571Cu; }
        if (ctx->pc != 0x17571Cu) { return; }
    }
    ctx->pc = 0x17571Cu;
    // 0x17571c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17571cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175720: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x175720u;
    SET_GPR_U32(ctx, 31, 0x175728u);
    ctx->pc = 0x175724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175720u;
            // 0x175724: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175728u; }
        if (ctx->pc != 0x175728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175728u; }
        if (ctx->pc != 0x175728u) { return; }
    }
    ctx->pc = 0x175728u;
    // 0x175728: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x175728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17572c: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x17572cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x175730: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x175730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x175734: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x175734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x175738: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x175738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x17573c: 0xc05f3bc  jal         func_17CEF0
    ctx->pc = 0x17573Cu;
    SET_GPR_U32(ctx, 31, 0x175744u);
    ctx->pc = 0x175740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17573Cu;
            // 0x175740: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CEF0u;
    if (runtime->hasFunction(0x17CEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17CEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175744u; }
        if (ctx->pc != 0x175744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D2_0x17cef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175744u; }
        if (ctx->pc != 0x175744u) { return; }
    }
    ctx->pc = 0x175744u;
    // 0x175744: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x175744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x175748: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x175748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17574c: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x17574cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
    // 0x175750: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x175750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x175754: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x175754u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
    // 0x175758: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x175758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x17575c: 0x1062016c  beq         $v1, $v0, . + 4 + (0x16C << 2)
    ctx->pc = 0x17575Cu;
    {
        const bool branch_taken_0x17575c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x175760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17575Cu;
            // 0x175760: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17575c) {
            ctx->pc = 0x175D10u;
            goto label_175d10;
        }
    }
    ctx->pc = 0x175764u;
    // 0x175764: 0x10620134  beq         $v1, $v0, . + 4 + (0x134 << 2)
    ctx->pc = 0x175764u;
    {
        const bool branch_taken_0x175764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x175764) {
            ctx->pc = 0x175C38u;
            goto label_175c38;
        }
    }
    ctx->pc = 0x17576Cu;
    // 0x17576c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17576cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x175770: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x175770u;
    {
        const bool branch_taken_0x175770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x175774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175770u;
            // 0x175774: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175770) {
            ctx->pc = 0x175848u;
            goto label_175848;
        }
    }
    ctx->pc = 0x175778u;
    // 0x175778: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x175778u;
    {
        const bool branch_taken_0x175778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x175778) {
            ctx->pc = 0x175790u;
            goto label_175790;
        }
    }
    ctx->pc = 0x175780u;
    // 0x175780: 0x1060021d  beqz        $v1, . + 4 + (0x21D << 2)
    ctx->pc = 0x175780u;
    {
        const bool branch_taken_0x175780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x175780) {
            ctx->pc = 0x175FF8u;
            goto label_175ff8;
        }
    }
    ctx->pc = 0x175788u;
    // 0x175788: 0x1000021b  b           . + 4 + (0x21B << 2)
    ctx->pc = 0x175788u;
    {
        const bool branch_taken_0x175788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175788) {
            ctx->pc = 0x175FF8u;
            goto label_175ff8;
        }
    }
    ctx->pc = 0x175790u;
label_175790:
    // 0x175790: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x175790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175794: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x175794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175798: 0x0  nop
    ctx->pc = 0x175798u;
    // NOP
    // 0x17579c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17579cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1757a0: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1757A0u;
    {
        const bool branch_taken_0x1757a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1757A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1757A0u;
            // 0x1757a4: 0x3c033ba3  lui         $v1, 0x3BA3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1757a0) {
            ctx->pc = 0x1757F0u;
            goto label_1757f0;
        }
    }
    ctx->pc = 0x1757A8u;
    // 0x1757a8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1757a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1757ac: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x1757acu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
    // 0x1757b0: 0xae4300e8  sw          $v1, 0xE8($s2)
    ctx->pc = 0x1757b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 3));
    // 0x1757b4: 0x8e430110  lw          $v1, 0x110($s2)
    ctx->pc = 0x1757b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x1757b8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1757b8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1757bc: 0x0  nop
    ctx->pc = 0x1757bcu;
    // NOP
    // 0x1757c0: 0x0  nop
    ctx->pc = 0x1757c0u;
    // NOP
    // 0x1757c4: 0x1010  mfhi        $v0
    ctx->pc = 0x1757c4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1757c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1757C8u;
    {
        const bool branch_taken_0x1757c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1757c8) {
            ctx->pc = 0x1757E8u;
            goto label_1757e8;
        }
    }
    ctx->pc = 0x1757D0u;
    // 0x1757d0: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x1757d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1757d4: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x1757d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1757d8: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1757d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1757dc: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1757dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1757e0: 0xc05d080  jal         func_174200
    ctx->pc = 0x1757E0u;
    SET_GPR_U32(ctx, 31, 0x1757E8u);
    ctx->pc = 0x1757E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1757E0u;
            // 0x1757e4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1757E8u; }
        if (ctx->pc != 0x1757E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1757E8u; }
        if (ctx->pc != 0x1757E8u) { return; }
    }
    ctx->pc = 0x1757E8u;
label_1757e8:
    // 0x1757e8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1757E8u;
    {
        const bool branch_taken_0x1757e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1757ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1757E8u;
            // 0x1757ec: 0xae400114  sw          $zero, 0x114($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1757e8) {
            ctx->pc = 0x175830u;
            goto label_175830;
        }
    }
    ctx->pc = 0x1757F0u;
label_1757f0:
    // 0x1757f0: 0xe64000e8  swc1        $f0, 0xE8($s2)
    ctx->pc = 0x1757f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 232), bits); }
    // 0x1757f4: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x1757f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1757f8: 0x8e420114  lw          $v0, 0x114($s2)
    ctx->pc = 0x1757f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
    // 0x1757fc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1757FCu;
    {
        const bool branch_taken_0x1757fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1757fc) {
            ctx->pc = 0x175820u;
            goto label_175820;
        }
    }
    ctx->pc = 0x175804u;
    // 0x175804: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x175804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175808: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x175808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x17580c: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x17580cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175810: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x175810u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x175814: 0xc05d080  jal         func_174200
    ctx->pc = 0x175814u;
    SET_GPR_U32(ctx, 31, 0x17581Cu);
    ctx->pc = 0x175818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175814u;
            // 0x175818: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17581Cu; }
        if (ctx->pc != 0x17581Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17581Cu; }
        if (ctx->pc != 0x17581Cu) { return; }
    }
    ctx->pc = 0x17581Cu;
    // 0x17581c: 0x0  nop
    ctx->pc = 0x17581cu;
    // NOP
label_175820:
    // 0x175820: 0x8e420114  lw          $v0, 0x114($s2)
    ctx->pc = 0x175820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
    // 0x175824: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x175824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x175828: 0xae420114  sw          $v0, 0x114($s2)
    ctx->pc = 0x175828u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 2));
    // 0x17582c: 0x0  nop
    ctx->pc = 0x17582cu;
    // NOP
label_175830:
    // 0x175830: 0xc64100e8  lwc1        $f1, 0xE8($s2)
    ctx->pc = 0x175830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175834: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x175834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175838: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x175838u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17583c: 0x100001ee  b           . + 4 + (0x1EE << 2)
    ctx->pc = 0x17583Cu;
    {
        const bool branch_taken_0x17583c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17583Cu;
            // 0x175840: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17583c) {
            ctx->pc = 0x175FF8u;
            goto label_175ff8;
        }
    }
    ctx->pc = 0x175844u;
    // 0x175844: 0x0  nop
    ctx->pc = 0x175844u;
    // NOP
label_175848:
    // 0x175848: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x175848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x17584c: 0x184001ea  blez        $v0, . + 4 + (0x1EA << 2)
    ctx->pc = 0x17584Cu;
    {
        const bool branch_taken_0x17584c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x17584c) {
            ctx->pc = 0x175FF8u;
            goto label_175ff8;
        }
    }
    ctx->pc = 0x175854u;
    // 0x175854: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x175854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175858: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x175858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17585c: 0x0  nop
    ctx->pc = 0x17585cu;
    // NOP
    // 0x175860: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x175860u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175864: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x175864u;
    {
        const bool branch_taken_0x175864 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x175868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175864u;
            // 0x175868: 0x3c033c23  lui         $v1, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175864) {
            ctx->pc = 0x1758B8u;
            goto label_1758b8;
        }
    }
    ctx->pc = 0x17586Cu;
    // 0x17586c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x17586cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x175870: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x175870u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
    // 0x175874: 0xae4300e8  sw          $v1, 0xE8($s2)
    ctx->pc = 0x175874u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 3));
    // 0x175878: 0x8e430110  lw          $v1, 0x110($s2)
    ctx->pc = 0x175878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x17587c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x17587cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x175880: 0x0  nop
    ctx->pc = 0x175880u;
    // NOP
    // 0x175884: 0x0  nop
    ctx->pc = 0x175884u;
    // NOP
    // 0x175888: 0x1010  mfhi        $v0
    ctx->pc = 0x175888u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x17588c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17588Cu;
    {
        const bool branch_taken_0x17588c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17588c) {
            ctx->pc = 0x1758B0u;
            goto label_1758b0;
        }
    }
    ctx->pc = 0x175894u;
    // 0x175894: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x175894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175898: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x175898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x17589c: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x17589cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1758a0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1758a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1758a4: 0xc05d080  jal         func_174200
    ctx->pc = 0x1758A4u;
    SET_GPR_U32(ctx, 31, 0x1758ACu);
    ctx->pc = 0x1758A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1758A4u;
            // 0x1758a8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1758ACu; }
        if (ctx->pc != 0x1758ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1758ACu; }
        if (ctx->pc != 0x1758ACu) { return; }
    }
    ctx->pc = 0x1758ACu;
    // 0x1758ac: 0x0  nop
    ctx->pc = 0x1758acu;
    // NOP
label_1758b0:
    // 0x1758b0: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x1758B0u;
    {
        const bool branch_taken_0x1758b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1758B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1758B0u;
            // 0x1758b4: 0xae400114  sw          $zero, 0x114($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1758b0) {
            ctx->pc = 0x175C20u;
            goto label_175c20;
        }
    }
    ctx->pc = 0x1758B8u;
label_1758b8:
    // 0x1758b8: 0xe64000e8  swc1        $f0, 0xE8($s2)
    ctx->pc = 0x1758b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 232), bits); }
    // 0x1758bc: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x1758bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1758c0: 0x8e420114  lw          $v0, 0x114($s2)
    ctx->pc = 0x1758c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
    // 0x1758c4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1758C4u;
    {
        const bool branch_taken_0x1758c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1758c4) {
            ctx->pc = 0x1758E8u;
            goto label_1758e8;
        }
    }
    ctx->pc = 0x1758CCu;
    // 0x1758cc: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x1758ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1758d0: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1758d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1758d4: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1758d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1758d8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1758d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1758dc: 0xc05d080  jal         func_174200
    ctx->pc = 0x1758DCu;
    SET_GPR_U32(ctx, 31, 0x1758E4u);
    ctx->pc = 0x1758E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1758DCu;
            // 0x1758e0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1758E4u; }
        if (ctx->pc != 0x1758E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1758E4u; }
        if (ctx->pc != 0x1758E4u) { return; }
    }
    ctx->pc = 0x1758E4u;
    // 0x1758e4: 0x0  nop
    ctx->pc = 0x1758e4u;
    // NOP
label_1758e8:
    // 0x1758e8: 0x8e420114  lw          $v0, 0x114($s2)
    ctx->pc = 0x1758e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
    // 0x1758ec: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1758ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1758f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1758f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1758f4: 0xae420114  sw          $v0, 0x114($s2)
    ctx->pc = 0x1758f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 2));
    // 0x1758f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1758f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1758fc: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1758fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x175900: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x175900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x175904: 0xc05f3bc  jal         func_17CEF0
    ctx->pc = 0x175904u;
    SET_GPR_U32(ctx, 31, 0x17590Cu);
    ctx->pc = 0x175908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175904u;
            // 0x175908: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CEF0u;
    if (runtime->hasFunction(0x17CEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17CEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17590Cu; }
        if (ctx->pc != 0x17590Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D2_0x17cef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17590Cu; }
        if (ctx->pc != 0x17590Cu) { return; }
    }
    ctx->pc = 0x17590Cu;
    // 0x17590c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x17590cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x175910: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x175910u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x175914: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x175914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x175918: 0xc065d00  jal         func_197400
    ctx->pc = 0x175918u;
    SET_GPR_U32(ctx, 31, 0x175920u);
    ctx->pc = 0x17591Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175918u;
            // 0x17591c: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175920u; }
        if (ctx->pc != 0x175920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175920u; }
        if (ctx->pc != 0x175920u) { return; }
    }
    ctx->pc = 0x175920u;
    // 0x175920: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x175920u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x175924: 0x14200046  bnez        $at, . + 4 + (0x46 << 2)
    ctx->pc = 0x175924u;
    {
        const bool branch_taken_0x175924 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x175924) {
            ctx->pc = 0x175A40u;
            goto label_175a40;
        }
    }
    ctx->pc = 0x17592Cu;
    // 0x17592c: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x17592cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x175930: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x175930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x175934: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x175934u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x175938: 0x0  nop
    ctx->pc = 0x175938u;
    // NOP
    // 0x17593c: 0x0  nop
    ctx->pc = 0x17593cu;
    // NOP
    // 0x175940: 0x1010  mfhi        $v0
    ctx->pc = 0x175940u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x175944: 0x144000b6  bnez        $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x175944u;
    {
        const bool branch_taken_0x175944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175944) {
            ctx->pc = 0x175C20u;
            goto label_175c20;
        }
    }
    ctx->pc = 0x17594Cu;
    // 0x17594c: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x17594cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175950: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x175950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x175954: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x175954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175958: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x175958u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x17595c: 0xc05d080  jal         func_174200
    ctx->pc = 0x17595Cu;
    SET_GPR_U32(ctx, 31, 0x175964u);
    ctx->pc = 0x175960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17595Cu;
            // 0x175960: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175964u; }
        if (ctx->pc != 0x175964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175964u; }
        if (ctx->pc != 0x175964u) { return; }
    }
    ctx->pc = 0x175964u;
    // 0x175964: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x175964u;
    SET_GPR_U32(ctx, 31, 0x17596Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17596Cu; }
        if (ctx->pc != 0x17596Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17596Cu; }
        if (ctx->pc != 0x17596Cu) { return; }
    }
    ctx->pc = 0x17596Cu;
    // 0x17596c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x17596cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)15u)));
    // 0x175970: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x175970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x175974: 0x24500003  addiu       $s0, $v0, 0x3
    ctx->pc = 0x175974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x175978: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x175978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17597c: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x17597cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x175980: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x175980u;
    SET_GPR_U32(ctx, 31, 0x175988u);
    ctx->pc = 0x175984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175980u;
            // 0x175984: 0x2445ffac  addiu       $a1, $v0, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175988u; }
        if (ctx->pc != 0x175988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175988u; }
        if (ctx->pc != 0x175988u) { return; }
    }
    ctx->pc = 0x175988u;
    // 0x175988: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x175988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x17598c: 0x3c024099  lui         $v0, 0x4099
    ctx->pc = 0x17598cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16537 << 16));
    // 0x175990: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x175990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x175994: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x175994u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x175998: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x175998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17599c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17599cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1759a0: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x1759a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1759a4: 0xc065480  jal         func_195200
    ctx->pc = 0x1759A4u;
    SET_GPR_U32(ctx, 31, 0x1759ACu);
    ctx->pc = 0x1759A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1759A4u;
            // 0x1759a8: 0x2465ffac  addiu       $a1, $v1, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1759ACu; }
        if (ctx->pc != 0x1759ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1759ACu; }
        if (ctx->pc != 0x1759ACu) { return; }
    }
    ctx->pc = 0x1759ACu;
    // 0x1759ac: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1759acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1759b0: 0x3c0240a3  lui         $v0, 0x40A3
    ctx->pc = 0x1759b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16547 << 16));
    // 0x1759b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1759b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1759b8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1759b8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1759bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1759bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1759c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1759c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1759c4: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x1759c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1759c8: 0xc065480  jal         func_195200
    ctx->pc = 0x1759C8u;
    SET_GPR_U32(ctx, 31, 0x1759D0u);
    ctx->pc = 0x1759CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1759C8u;
            // 0x1759cc: 0x2465ffac  addiu       $a1, $v1, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1759D0u; }
        if (ctx->pc != 0x1759D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1759D0u; }
        if (ctx->pc != 0x1759D0u) { return; }
    }
    ctx->pc = 0x1759D0u;
    // 0x1759d0: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1759d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1759d4: 0x3c0240ac  lui         $v0, 0x40AC
    ctx->pc = 0x1759d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16556 << 16));
    // 0x1759d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1759d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1759dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1759dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1759e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1759e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1759e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1759e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1759e8: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x1759e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1759ec: 0xc065480  jal         func_195200
    ctx->pc = 0x1759ECu;
    SET_GPR_U32(ctx, 31, 0x1759F4u);
    ctx->pc = 0x1759F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1759ECu;
            // 0x1759f0: 0x2465ffac  addiu       $a1, $v1, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1759F4u; }
        if (ctx->pc != 0x1759F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1759F4u; }
        if (ctx->pc != 0x1759F4u) { return; }
    }
    ctx->pc = 0x1759F4u;
    // 0x1759f4: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1759f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1759f8: 0x3c0240b6  lui         $v0, 0x40B6
    ctx->pc = 0x1759f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16566 << 16));
    // 0x1759fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1759fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x175a00: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x175a00u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x175a04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x175a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x175a08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x175a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a0c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x175a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x175a10: 0xc065480  jal         func_195200
    ctx->pc = 0x175A10u;
    SET_GPR_U32(ctx, 31, 0x175A18u);
    ctx->pc = 0x175A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175A10u;
            // 0x175a14: 0x2465ffac  addiu       $a1, $v1, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A18u; }
        if (ctx->pc != 0x175A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A18u; }
        if (ctx->pc != 0x175A18u) { return; }
    }
    ctx->pc = 0x175A18u;
    // 0x175a18: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x175a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x175a1c: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x175a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x175a20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x175a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x175a24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x175a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x175a28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x175a28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a2c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x175a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x175a30: 0xc065480  jal         func_195200
    ctx->pc = 0x175A30u;
    SET_GPR_U32(ctx, 31, 0x175A38u);
    ctx->pc = 0x175A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175A30u;
            // 0x175a34: 0x2465ffac  addiu       $a1, $v1, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A38u; }
        if (ctx->pc != 0x175A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A38u; }
        if (ctx->pc != 0x175A38u) { return; }
    }
    ctx->pc = 0x175A38u;
    // 0x175a38: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x175A38u;
    {
        const bool branch_taken_0x175a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175a38) {
            ctx->pc = 0x175C20u;
            goto label_175c20;
        }
    }
    ctx->pc = 0x175A40u;
label_175a40:
    // 0x175a40: 0xc065d00  jal         func_197400
    ctx->pc = 0x175A40u;
    SET_GPR_U32(ctx, 31, 0x175A48u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A48u; }
        if (ctx->pc != 0x175A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A48u; }
        if (ctx->pc != 0x175A48u) { return; }
    }
    ctx->pc = 0x175A48u;
    // 0x175a48: 0x18400049  blez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x175A48u;
    {
        const bool branch_taken_0x175a48 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x175a48) {
            ctx->pc = 0x175B70u;
            goto label_175b70;
        }
    }
    ctx->pc = 0x175A50u;
    // 0x175a50: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x175a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x175a54: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x175a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x175a58: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x175a58u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x175a5c: 0x0  nop
    ctx->pc = 0x175a5cu;
    // NOP
    // 0x175a60: 0x0  nop
    ctx->pc = 0x175a60u;
    // NOP
    // 0x175a64: 0x1010  mfhi        $v0
    ctx->pc = 0x175a64u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x175a68: 0x1440006d  bnez        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x175A68u;
    {
        const bool branch_taken_0x175a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175a68) {
            ctx->pc = 0x175C20u;
            goto label_175c20;
        }
    }
    ctx->pc = 0x175A70u;
    // 0x175a70: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x175a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175a74: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x175a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x175a78: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x175a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175a7c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x175a7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x175a80: 0xc05d080  jal         func_174200
    ctx->pc = 0x175A80u;
    SET_GPR_U32(ctx, 31, 0x175A88u);
    ctx->pc = 0x175A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175A80u;
            // 0x175a84: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A88u; }
        if (ctx->pc != 0x175A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A88u; }
        if (ctx->pc != 0x175A88u) { return; }
    }
    ctx->pc = 0x175A88u;
    // 0x175a88: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x175A88u;
    SET_GPR_U32(ctx, 31, 0x175A90u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A90u; }
        if (ctx->pc != 0x175A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A90u; }
        if (ctx->pc != 0x175A90u) { return; }
    }
    ctx->pc = 0x175A90u;
    // 0x175a90: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x175a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x175a94: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x175a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x175a98: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x175a98u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x175a9c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x175a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x175aa0: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x175aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x175aa4: 0x2445ffac  addiu       $a1, $v0, -0x54
    ctx->pc = 0x175aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967212));
    // 0x175aa8: 0x1010  mfhi        $v0
    ctx->pc = 0x175aa8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x175aac: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x175AACu;
    SET_GPR_U32(ctx, 31, 0x175AB4u);
    ctx->pc = 0x175AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175AACu;
            // 0x175ab0: 0x24500003  addiu       $s0, $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175AB4u; }
        if (ctx->pc != 0x175AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175AB4u; }
        if (ctx->pc != 0x175AB4u) { return; }
    }
    ctx->pc = 0x175AB4u;
    // 0x175ab4: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x175ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x175ab8: 0x3c024099  lui         $v0, 0x4099
    ctx->pc = 0x175ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16537 << 16));
    // 0x175abc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x175abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x175ac0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x175ac0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x175ac4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x175ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x175ac8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x175ac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175acc: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x175accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x175ad0: 0xc065480  jal         func_195200
    ctx->pc = 0x175AD0u;
    SET_GPR_U32(ctx, 31, 0x175AD8u);
    ctx->pc = 0x175AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175AD0u;
            // 0x175ad4: 0x2465ffac  addiu       $a1, $v1, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175AD8u; }
        if (ctx->pc != 0x175AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175AD8u; }
        if (ctx->pc != 0x175AD8u) { return; }
    }
    ctx->pc = 0x175AD8u;
    // 0x175ad8: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x175ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x175adc: 0x3c0240a3  lui         $v0, 0x40A3
    ctx->pc = 0x175adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16547 << 16));
    // 0x175ae0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x175ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x175ae4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x175ae4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x175ae8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x175ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x175aec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x175aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175af0: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x175af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x175af4: 0xc065480  jal         func_195200
    ctx->pc = 0x175AF4u;
    SET_GPR_U32(ctx, 31, 0x175AFCu);
    ctx->pc = 0x175AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175AF4u;
            // 0x175af8: 0x2465ffac  addiu       $a1, $v1, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175AFCu; }
        if (ctx->pc != 0x175AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175AFCu; }
        if (ctx->pc != 0x175AFCu) { return; }
    }
    ctx->pc = 0x175AFCu;
    // 0x175afc: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x175afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x175b00: 0x3c0240ac  lui         $v0, 0x40AC
    ctx->pc = 0x175b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16556 << 16));
    // 0x175b04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x175b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x175b08: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x175b08u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x175b0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x175b0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x175b10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x175b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175b14: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x175b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x175b18: 0xc065480  jal         func_195200
    ctx->pc = 0x175B18u;
    SET_GPR_U32(ctx, 31, 0x175B20u);
    ctx->pc = 0x175B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175B18u;
            // 0x175b1c: 0x2465ffac  addiu       $a1, $v1, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175B20u; }
        if (ctx->pc != 0x175B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175B20u; }
        if (ctx->pc != 0x175B20u) { return; }
    }
    ctx->pc = 0x175B20u;
    // 0x175b20: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x175b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x175b24: 0x3c0240b6  lui         $v0, 0x40B6
    ctx->pc = 0x175b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16566 << 16));
    // 0x175b28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x175b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x175b2c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x175b2cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x175b30: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x175b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x175b34: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x175b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175b38: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x175b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x175b3c: 0xc065480  jal         func_195200
    ctx->pc = 0x175B3Cu;
    SET_GPR_U32(ctx, 31, 0x175B44u);
    ctx->pc = 0x175B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175B3Cu;
            // 0x175b40: 0x2465ffac  addiu       $a1, $v1, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175B44u; }
        if (ctx->pc != 0x175B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175B44u; }
        if (ctx->pc != 0x175B44u) { return; }
    }
    ctx->pc = 0x175B44u;
    // 0x175b44: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x175b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x175b48: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x175b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x175b4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x175b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x175b50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x175b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x175b54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x175b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175b58: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x175b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x175b5c: 0xc065480  jal         func_195200
    ctx->pc = 0x175B5Cu;
    SET_GPR_U32(ctx, 31, 0x175B64u);
    ctx->pc = 0x175B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175B5Cu;
            // 0x175b60: 0x2465ffac  addiu       $a1, $v1, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175B64u; }
        if (ctx->pc != 0x175B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175B64u; }
        if (ctx->pc != 0x175B64u) { return; }
    }
    ctx->pc = 0x175B64u;
    // 0x175b64: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x175B64u;
    {
        const bool branch_taken_0x175b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175b64) {
            ctx->pc = 0x175C20u;
            goto label_175c20;
        }
    }
    ctx->pc = 0x175B6Cu;
    // 0x175b6c: 0x0  nop
    ctx->pc = 0x175b6cu;
    // NOP
label_175b70:
    // 0x175b70: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x175b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x175b74: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x175b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x175b78: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x175b78u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x175b7c: 0x0  nop
    ctx->pc = 0x175b7cu;
    // NOP
    // 0x175b80: 0x0  nop
    ctx->pc = 0x175b80u;
    // NOP
    // 0x175b84: 0x1010  mfhi        $v0
    ctx->pc = 0x175b84u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x175b88: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x175B88u;
    {
        const bool branch_taken_0x175b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175b88) {
            ctx->pc = 0x175C20u;
            goto label_175c20;
        }
    }
    ctx->pc = 0x175B90u;
    // 0x175b90: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x175b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175b94: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x175b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x175b98: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x175b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175b9c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x175b9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x175ba0: 0xc05d080  jal         func_174200
    ctx->pc = 0x175BA0u;
    SET_GPR_U32(ctx, 31, 0x175BA8u);
    ctx->pc = 0x175BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175BA0u;
            // 0x175ba4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175BA8u; }
        if (ctx->pc != 0x175BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175BA8u; }
        if (ctx->pc != 0x175BA8u) { return; }
    }
    ctx->pc = 0x175BA8u;
    // 0x175ba8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x175ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x175bac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x175bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x175bb0: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x175bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x175bb4: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x175BB4u;
    SET_GPR_U32(ctx, 31, 0x175BBCu);
    ctx->pc = 0x175BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175BB4u;
            // 0x175bb8: 0x2445ffac  addiu       $a1, $v0, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175BBCu; }
        if (ctx->pc != 0x175BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175BBCu; }
        if (ctx->pc != 0x175BBCu) { return; }
    }
    ctx->pc = 0x175BBCu;
    // 0x175bbc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x175bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x175bc0: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x175bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x175bc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x175bc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x175bc8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x175bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x175bcc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x175bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x175bd0: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x175bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x175bd4: 0xc065480  jal         func_195200
    ctx->pc = 0x175BD4u;
    SET_GPR_U32(ctx, 31, 0x175BDCu);
    ctx->pc = 0x175BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175BD4u;
            // 0x175bd8: 0x2445ffac  addiu       $a1, $v0, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175BDCu; }
        if (ctx->pc != 0x175BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175BDCu; }
        if (ctx->pc != 0x175BDCu) { return; }
    }
    ctx->pc = 0x175BDCu;
    // 0x175bdc: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x175bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x175be0: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x175be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x175be4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x175be4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x175be8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x175be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x175bec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x175becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x175bf0: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x175bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x175bf4: 0xc065480  jal         func_195200
    ctx->pc = 0x175BF4u;
    SET_GPR_U32(ctx, 31, 0x175BFCu);
    ctx->pc = 0x175BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175BF4u;
            // 0x175bf8: 0x2445ffac  addiu       $a1, $v0, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175BFCu; }
        if (ctx->pc != 0x175BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175BFCu; }
        if (ctx->pc != 0x175BFCu) { return; }
    }
    ctx->pc = 0x175BFCu;
    // 0x175bfc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x175bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x175c00: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x175c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x175c04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x175c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x175c08: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x175c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x175c0c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x175c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x175c10: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x175c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x175c14: 0xc065480  jal         func_195200
    ctx->pc = 0x175C14u;
    SET_GPR_U32(ctx, 31, 0x175C1Cu);
    ctx->pc = 0x175C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175C14u;
            // 0x175c18: 0x2445ffac  addiu       $a1, $v0, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175C1Cu; }
        if (ctx->pc != 0x175C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175C1Cu; }
        if (ctx->pc != 0x175C1Cu) { return; }
    }
    ctx->pc = 0x175C1Cu;
    // 0x175c1c: 0x0  nop
    ctx->pc = 0x175c1cu;
    // NOP
label_175c20:
    // 0x175c20: 0xc64100e8  lwc1        $f1, 0xE8($s2)
    ctx->pc = 0x175c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175c24: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x175c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175c28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x175c28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x175c2c: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x175C2Cu;
    {
        const bool branch_taken_0x175c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175C2Cu;
            // 0x175c30: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c2c) {
            ctx->pc = 0x175FF8u;
            goto label_175ff8;
        }
    }
    ctx->pc = 0x175C34u;
    // 0x175c34: 0x0  nop
    ctx->pc = 0x175c34u;
    // NOP
label_175c38:
    // 0x175c38: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x175c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x175c3c: 0x184000ee  blez        $v0, . + 4 + (0xEE << 2)
    ctx->pc = 0x175C3Cu;
    {
        const bool branch_taken_0x175c3c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x175c3c) {
            ctx->pc = 0x175FF8u;
            goto label_175ff8;
        }
    }
    ctx->pc = 0x175C44u;
    // 0x175c44: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x175c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175c48: 0x3c02bebc  lui         $v0, 0xBEBC
    ctx->pc = 0x175c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48828 << 16));
    // 0x175c4c: 0x34426a7f  ori         $v0, $v0, 0x6A7F
    ctx->pc = 0x175c4cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)27263u)));
    // 0x175c50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175c50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175c54: 0x0  nop
    ctx->pc = 0x175c54u;
    // NOP
    // 0x175c58: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x175c58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175c5c: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x175C5Cu;
    {
        const bool branch_taken_0x175c5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x175C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175C5Cu;
            // 0x175c60: 0x3c03bc23  lui         $v1, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c5c) {
            ctx->pc = 0x175CB0u;
            goto label_175cb0;
        }
    }
    ctx->pc = 0x175C64u;
    // 0x175c64: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x175c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x175c68: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x175c68u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
    // 0x175c6c: 0xae4300e8  sw          $v1, 0xE8($s2)
    ctx->pc = 0x175c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 3));
    // 0x175c70: 0x8e430110  lw          $v1, 0x110($s2)
    ctx->pc = 0x175c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x175c74: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x175c74u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x175c78: 0x0  nop
    ctx->pc = 0x175c78u;
    // NOP
    // 0x175c7c: 0x0  nop
    ctx->pc = 0x175c7cu;
    // NOP
    // 0x175c80: 0x1010  mfhi        $v0
    ctx->pc = 0x175c80u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x175c84: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x175C84u;
    {
        const bool branch_taken_0x175c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175c84) {
            ctx->pc = 0x175CA8u;
            goto label_175ca8;
        }
    }
    ctx->pc = 0x175C8Cu;
    // 0x175c8c: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x175c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175c90: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x175c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x175c94: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x175c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175c98: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x175c98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x175c9c: 0xc05d080  jal         func_174200
    ctx->pc = 0x175C9Cu;
    SET_GPR_U32(ctx, 31, 0x175CA4u);
    ctx->pc = 0x175CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175C9Cu;
            // 0x175ca0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175CA4u; }
        if (ctx->pc != 0x175CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175CA4u; }
        if (ctx->pc != 0x175CA4u) { return; }
    }
    ctx->pc = 0x175CA4u;
    // 0x175ca4: 0x0  nop
    ctx->pc = 0x175ca4u;
    // NOP
label_175ca8:
    // 0x175ca8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x175CA8u;
    {
        const bool branch_taken_0x175ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175CA8u;
            // 0x175cac: 0xae400114  sw          $zero, 0x114($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ca8) {
            ctx->pc = 0x175CF8u;
            goto label_175cf8;
        }
    }
    ctx->pc = 0x175CB0u;
label_175cb0:
    // 0x175cb0: 0x8e420114  lw          $v0, 0x114($s2)
    ctx->pc = 0x175cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
    // 0x175cb4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x175CB4u;
    {
        const bool branch_taken_0x175cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175cb4) {
            ctx->pc = 0x175CD8u;
            goto label_175cd8;
        }
    }
    ctx->pc = 0x175CBCu;
    // 0x175cbc: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x175cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175cc0: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x175cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x175cc4: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x175cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175cc8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x175cc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x175ccc: 0xc05d080  jal         func_174200
    ctx->pc = 0x175CCCu;
    SET_GPR_U32(ctx, 31, 0x175CD4u);
    ctx->pc = 0x175CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175CCCu;
            // 0x175cd0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175CD4u; }
        if (ctx->pc != 0x175CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175CD4u; }
        if (ctx->pc != 0x175CD4u) { return; }
    }
    ctx->pc = 0x175CD4u;
    // 0x175cd4: 0x0  nop
    ctx->pc = 0x175cd4u;
    // NOP
label_175cd8:
    // 0x175cd8: 0x8e430114  lw          $v1, 0x114($s2)
    ctx->pc = 0x175cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
    // 0x175cdc: 0x3c02bebc  lui         $v0, 0xBEBC
    ctx->pc = 0x175cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48828 << 16));
    // 0x175ce0: 0x34426a7f  ori         $v0, $v0, 0x6A7F
    ctx->pc = 0x175ce0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)27263u)));
    // 0x175ce4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x175ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x175ce8: 0xae430114  sw          $v1, 0x114($s2)
    ctx->pc = 0x175ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 3));
    // 0x175cec: 0xae4000e8  sw          $zero, 0xE8($s2)
    ctx->pc = 0x175cecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 0));
    // 0x175cf0: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x175cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x175cf4: 0x0  nop
    ctx->pc = 0x175cf4u;
    // NOP
label_175cf8:
    // 0x175cf8: 0xc64100e8  lwc1        $f1, 0xE8($s2)
    ctx->pc = 0x175cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175cfc: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x175cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175d00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x175d00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x175d04: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x175D04u;
    {
        const bool branch_taken_0x175d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175D04u;
            // 0x175d08: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x175d04) {
            ctx->pc = 0x175FF8u;
            goto label_175ff8;
        }
    }
    ctx->pc = 0x175D0Cu;
    // 0x175d0c: 0x0  nop
    ctx->pc = 0x175d0cu;
    // NOP
label_175d10:
    // 0x175d10: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x175d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x175d14: 0x184000b8  blez        $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x175D14u;
    {
        const bool branch_taken_0x175d14 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x175d14) {
            ctx->pc = 0x175FF8u;
            goto label_175ff8;
        }
    }
    ctx->pc = 0x175D1Cu;
    // 0x175d1c: 0xc065d00  jal         func_197400
    ctx->pc = 0x175D1Cu;
    SET_GPR_U32(ctx, 31, 0x175D24u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D24u; }
        if (ctx->pc != 0x175D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D24u; }
        if (ctx->pc != 0x175D24u) { return; }
    }
    ctx->pc = 0x175D24u;
    // 0x175d24: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x175d24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x175d28: 0x1420005b  bnez        $at, . + 4 + (0x5B << 2)
    ctx->pc = 0x175D28u;
    {
        const bool branch_taken_0x175d28 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x175d28) {
            ctx->pc = 0x175E98u;
            goto label_175e98;
        }
    }
    ctx->pc = 0x175D30u;
    // 0x175d30: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x175d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x175d34: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x175D34u;
    {
        const bool branch_taken_0x175d34 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x175D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175D34u;
            // 0x175d38: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175d34) {
            ctx->pc = 0x175D48u;
            goto label_175d48;
        }
    }
    ctx->pc = 0x175D3Cu;
    // 0x175d3c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x175D3Cu;
    {
        const bool branch_taken_0x175d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x175d3c) {
            ctx->pc = 0x175D48u;
            goto label_175d48;
        }
    }
    ctx->pc = 0x175D44u;
    // 0x175d44: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x175d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_175d48:
    // 0x175d48: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x175D48u;
    {
        const bool branch_taken_0x175d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175d48) {
            ctx->pc = 0x175DE0u;
            goto label_175de0;
        }
    }
    ctx->pc = 0x175D50u;
    // 0x175d50: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x175d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175d54: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x175d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x175d58: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x175d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175d5c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x175d5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x175d60: 0xc05d080  jal         func_174200
    ctx->pc = 0x175D60u;
    SET_GPR_U32(ctx, 31, 0x175D68u);
    ctx->pc = 0x175D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175D60u;
            // 0x175d64: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D68u; }
        if (ctx->pc != 0x175D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D68u; }
        if (ctx->pc != 0x175D68u) { return; }
    }
    ctx->pc = 0x175D68u;
    // 0x175d68: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x175d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x175d6c: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x175d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x175d70: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x175d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x175d74: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x175d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x175d78: 0xc05f3bc  jal         func_17CEF0
    ctx->pc = 0x175D78u;
    SET_GPR_U32(ctx, 31, 0x175D80u);
    ctx->pc = 0x175D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175D78u;
            // 0x175d7c: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CEF0u;
    if (runtime->hasFunction(0x17CEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17CEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D80u; }
        if (ctx->pc != 0x175D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D2_0x17cef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D80u; }
        if (ctx->pc != 0x175D80u) { return; }
    }
    ctx->pc = 0x175D80u;
    // 0x175d80: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x175d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x175d84: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x175d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x175d88: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x175d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x175d8c: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x175D8Cu;
    SET_GPR_U32(ctx, 31, 0x175D94u);
    ctx->pc = 0x175D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175D8Cu;
            // 0x175d90: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D94u; }
        if (ctx->pc != 0x175D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D94u; }
        if (ctx->pc != 0x175D94u) { return; }
    }
    ctx->pc = 0x175D94u;
    // 0x175d94: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x175d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x175d98: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x175d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x175d9c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x175d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x175da0: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x175da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x175da4: 0xc065508  jal         func_195420
    ctx->pc = 0x175DA4u;
    SET_GPR_U32(ctx, 31, 0x175DACu);
    ctx->pc = 0x175DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175DA4u;
            // 0x175da8: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175DACu; }
        if (ctx->pc != 0x175DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175DACu; }
        if (ctx->pc != 0x175DACu) { return; }
    }
    ctx->pc = 0x175DACu;
    // 0x175dac: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x175dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x175db0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175db4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x175db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x175db8: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x175db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x175dbc: 0xc065508  jal         func_195420
    ctx->pc = 0x175DBCu;
    SET_GPR_U32(ctx, 31, 0x175DC4u);
    ctx->pc = 0x175DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175DBCu;
            // 0x175dc0: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175DC4u; }
        if (ctx->pc != 0x175DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175DC4u; }
        if (ctx->pc != 0x175DC4u) { return; }
    }
    ctx->pc = 0x175DC4u;
    // 0x175dc4: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x175dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x175dc8: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x175dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x175dcc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x175dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x175dd0: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x175dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x175dd4: 0xc065508  jal         func_195420
    ctx->pc = 0x175DD4u;
    SET_GPR_U32(ctx, 31, 0x175DDCu);
    ctx->pc = 0x175DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175DD4u;
            // 0x175dd8: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175DDCu; }
        if (ctx->pc != 0x175DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175DDCu; }
        if (ctx->pc != 0x175DDCu) { return; }
    }
    ctx->pc = 0x175DDCu;
    // 0x175ddc: 0x0  nop
    ctx->pc = 0x175ddcu;
    // NOP
label_175de0:
    // 0x175de0: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x175de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x175de4: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x175de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x175de8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x175DE8u;
    {
        const bool branch_taken_0x175de8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x175DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175DE8u;
            // 0x175dec: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175de8) {
            ctx->pc = 0x175DFCu;
            goto label_175dfc;
        }
    }
    ctx->pc = 0x175DF0u;
    // 0x175df0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x175DF0u;
    {
        const bool branch_taken_0x175df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x175df0) {
            ctx->pc = 0x175DFCu;
            goto label_175dfc;
        }
    }
    ctx->pc = 0x175DF8u;
    // 0x175df8: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x175df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_175dfc:
    // 0x175dfc: 0x1440007e  bnez        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x175DFCu;
    {
        const bool branch_taken_0x175dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175dfc) {
            ctx->pc = 0x175FF8u;
            goto label_175ff8;
        }
    }
    ctx->pc = 0x175E04u;
    // 0x175e04: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x175e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x175e08: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x175e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x175e0c: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x175e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x175e10: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x175e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x175e14: 0xc05f3bc  jal         func_17CEF0
    ctx->pc = 0x175E14u;
    SET_GPR_U32(ctx, 31, 0x175E1Cu);
    ctx->pc = 0x175E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175E14u;
            // 0x175e18: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CEF0u;
    if (runtime->hasFunction(0x17CEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17CEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E1Cu; }
        if (ctx->pc != 0x175E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D2_0x17cef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E1Cu; }
        if (ctx->pc != 0x175E1Cu) { return; }
    }
    ctx->pc = 0x175E1Cu;
    // 0x175e1c: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x175e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x175e20: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x175e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x175e24: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x175e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x175e28: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x175E28u;
    SET_GPR_U32(ctx, 31, 0x175E30u);
    ctx->pc = 0x175E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175E28u;
            // 0x175e2c: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E30u; }
        if (ctx->pc != 0x175E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E30u; }
        if (ctx->pc != 0x175E30u) { return; }
    }
    ctx->pc = 0x175E30u;
    // 0x175e30: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x175e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x175e34: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x175e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x175e38: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x175e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x175e3c: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x175e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x175e40: 0xc065508  jal         func_195420
    ctx->pc = 0x175E40u;
    SET_GPR_U32(ctx, 31, 0x175E48u);
    ctx->pc = 0x175E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175E40u;
            // 0x175e44: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E48u; }
        if (ctx->pc != 0x175E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E48u; }
        if (ctx->pc != 0x175E48u) { return; }
    }
    ctx->pc = 0x175E48u;
    // 0x175e48: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x175e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x175e4c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x175e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x175e50: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x175e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x175e54: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x175e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x175e58: 0xc065508  jal         func_195420
    ctx->pc = 0x175E58u;
    SET_GPR_U32(ctx, 31, 0x175E60u);
    ctx->pc = 0x175E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175E58u;
            // 0x175e5c: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E60u; }
        if (ctx->pc != 0x175E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E60u; }
        if (ctx->pc != 0x175E60u) { return; }
    }
    ctx->pc = 0x175E60u;
    // 0x175e60: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x175e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x175e64: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x175e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x175e68: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x175e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x175e6c: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x175e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x175e70: 0xc065508  jal         func_195420
    ctx->pc = 0x175E70u;
    SET_GPR_U32(ctx, 31, 0x175E78u);
    ctx->pc = 0x175E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175E70u;
            // 0x175e74: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E78u; }
        if (ctx->pc != 0x175E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E78u; }
        if (ctx->pc != 0x175E78u) { return; }
    }
    ctx->pc = 0x175E78u;
    // 0x175e78: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x175e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x175e7c: 0x24060066  addiu       $a2, $zero, 0x66
    ctx->pc = 0x175e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x175e80: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x175e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x175e84: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x175e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x175e88: 0xc065508  jal         func_195420
    ctx->pc = 0x175E88u;
    SET_GPR_U32(ctx, 31, 0x175E90u);
    ctx->pc = 0x175E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175E88u;
            // 0x175e8c: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E90u; }
        if (ctx->pc != 0x175E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E90u; }
        if (ctx->pc != 0x175E90u) { return; }
    }
    ctx->pc = 0x175E90u;
    // 0x175e90: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x175E90u;
    {
        const bool branch_taken_0x175e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175e90) {
            ctx->pc = 0x175FF8u;
            goto label_175ff8;
        }
    }
    ctx->pc = 0x175E98u;
label_175e98:
    // 0x175e98: 0xc065d00  jal         func_197400
    ctx->pc = 0x175E98u;
    SET_GPR_U32(ctx, 31, 0x175EA0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175EA0u; }
        if (ctx->pc != 0x175EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175EA0u; }
        if (ctx->pc != 0x175EA0u) { return; }
    }
    ctx->pc = 0x175EA0u;
    // 0x175ea0: 0x18400035  blez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x175EA0u;
    {
        const bool branch_taken_0x175ea0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x175ea0) {
            ctx->pc = 0x175F78u;
            goto label_175f78;
        }
    }
    ctx->pc = 0x175EA8u;
    // 0x175ea8: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x175ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x175eac: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x175EACu;
    {
        const bool branch_taken_0x175eac = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x175EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175EACu;
            // 0x175eb0: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175eac) {
            ctx->pc = 0x175EC0u;
            goto label_175ec0;
        }
    }
    ctx->pc = 0x175EB4u;
    // 0x175eb4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x175EB4u;
    {
        const bool branch_taken_0x175eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x175eb4) {
            ctx->pc = 0x175EC0u;
            goto label_175ec0;
        }
    }
    ctx->pc = 0x175EBCu;
    // 0x175ebc: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x175ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_175ec0:
    // 0x175ec0: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x175EC0u;
    {
        const bool branch_taken_0x175ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175ec0) {
            ctx->pc = 0x175FF8u;
            goto label_175ff8;
        }
    }
    ctx->pc = 0x175EC8u;
    // 0x175ec8: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x175ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175ecc: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x175eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x175ed0: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x175ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175ed4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x175ed4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x175ed8: 0xc05d080  jal         func_174200
    ctx->pc = 0x175ED8u;
    SET_GPR_U32(ctx, 31, 0x175EE0u);
    ctx->pc = 0x175EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175ED8u;
            // 0x175edc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175EE0u; }
        if (ctx->pc != 0x175EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175EE0u; }
        if (ctx->pc != 0x175EE0u) { return; }
    }
    ctx->pc = 0x175EE0u;
    // 0x175ee0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x175ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x175ee4: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x175ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x175ee8: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x175ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x175eec: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x175eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x175ef0: 0xc05f3bc  jal         func_17CEF0
    ctx->pc = 0x175EF0u;
    SET_GPR_U32(ctx, 31, 0x175EF8u);
    ctx->pc = 0x175EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175EF0u;
            // 0x175ef4: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CEF0u;
    if (runtime->hasFunction(0x17CEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17CEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175EF8u; }
        if (ctx->pc != 0x175EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D2_0x17cef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175EF8u; }
        if (ctx->pc != 0x175EF8u) { return; }
    }
    ctx->pc = 0x175EF8u;
    // 0x175ef8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x175ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x175efc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x175efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x175f00: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x175f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x175f04: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x175F04u;
    SET_GPR_U32(ctx, 31, 0x175F0Cu);
    ctx->pc = 0x175F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175F04u;
            // 0x175f08: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F0Cu; }
        if (ctx->pc != 0x175F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F0Cu; }
        if (ctx->pc != 0x175F0Cu) { return; }
    }
    ctx->pc = 0x175F0Cu;
    // 0x175f0c: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x175f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x175f10: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x175f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x175f14: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x175f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x175f18: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x175f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x175f1c: 0xc065508  jal         func_195420
    ctx->pc = 0x175F1Cu;
    SET_GPR_U32(ctx, 31, 0x175F24u);
    ctx->pc = 0x175F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175F1Cu;
            // 0x175f20: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F24u; }
        if (ctx->pc != 0x175F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F24u; }
        if (ctx->pc != 0x175F24u) { return; }
    }
    ctx->pc = 0x175F24u;
    // 0x175f24: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x175f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x175f28: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x175f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x175f2c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x175f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x175f30: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x175f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x175f34: 0xc065508  jal         func_195420
    ctx->pc = 0x175F34u;
    SET_GPR_U32(ctx, 31, 0x175F3Cu);
    ctx->pc = 0x175F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175F34u;
            // 0x175f38: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F3Cu; }
        if (ctx->pc != 0x175F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F3Cu; }
        if (ctx->pc != 0x175F3Cu) { return; }
    }
    ctx->pc = 0x175F3Cu;
    // 0x175f3c: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x175f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x175f40: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x175f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x175f44: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x175f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x175f48: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x175f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x175f4c: 0xc065508  jal         func_195420
    ctx->pc = 0x175F4Cu;
    SET_GPR_U32(ctx, 31, 0x175F54u);
    ctx->pc = 0x175F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175F4Cu;
            // 0x175f50: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F54u; }
        if (ctx->pc != 0x175F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F54u; }
        if (ctx->pc != 0x175F54u) { return; }
    }
    ctx->pc = 0x175F54u;
    // 0x175f54: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x175f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x175f58: 0x24060066  addiu       $a2, $zero, 0x66
    ctx->pc = 0x175f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x175f5c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x175f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x175f60: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x175f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x175f64: 0xc065508  jal         func_195420
    ctx->pc = 0x175F64u;
    SET_GPR_U32(ctx, 31, 0x175F6Cu);
    ctx->pc = 0x175F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175F64u;
            // 0x175f68: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F6Cu; }
        if (ctx->pc != 0x175F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F6Cu; }
        if (ctx->pc != 0x175F6Cu) { return; }
    }
    ctx->pc = 0x175F6Cu;
    // 0x175f6c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x175F6Cu;
    {
        const bool branch_taken_0x175f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175f6c) {
            ctx->pc = 0x175FF8u;
            goto label_175ff8;
        }
    }
    ctx->pc = 0x175F74u;
    // 0x175f74: 0x0  nop
    ctx->pc = 0x175f74u;
    // NOP
label_175f78:
    // 0x175f78: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x175f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x175f7c: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x175f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x175f80: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x175f80u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x175f84: 0x0  nop
    ctx->pc = 0x175f84u;
    // NOP
    // 0x175f88: 0x0  nop
    ctx->pc = 0x175f88u;
    // NOP
    // 0x175f8c: 0x1010  mfhi        $v0
    ctx->pc = 0x175f8cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x175f90: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x175F90u;
    {
        const bool branch_taken_0x175f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175f90) {
            ctx->pc = 0x175FF8u;
            goto label_175ff8;
        }
    }
    ctx->pc = 0x175F98u;
    // 0x175f98: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x175f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175f9c: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x175f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x175fa0: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x175fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175fa4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x175fa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x175fa8: 0xc05d080  jal         func_174200
    ctx->pc = 0x175FA8u;
    SET_GPR_U32(ctx, 31, 0x175FB0u);
    ctx->pc = 0x175FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175FA8u;
            // 0x175fac: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175FB0u; }
        if (ctx->pc != 0x175FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175FB0u; }
        if (ctx->pc != 0x175FB0u) { return; }
    }
    ctx->pc = 0x175FB0u;
    // 0x175fb0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x175fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x175fb4: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x175fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x175fb8: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x175fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x175fbc: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x175fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x175fc0: 0xc05f3bc  jal         func_17CEF0
    ctx->pc = 0x175FC0u;
    SET_GPR_U32(ctx, 31, 0x175FC8u);
    ctx->pc = 0x175FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175FC0u;
            // 0x175fc4: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CEF0u;
    if (runtime->hasFunction(0x17CEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17CEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175FC8u; }
        if (ctx->pc != 0x175FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D2_0x17cef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175FC8u; }
        if (ctx->pc != 0x175FC8u) { return; }
    }
    ctx->pc = 0x175FC8u;
    // 0x175fc8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x175fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x175fcc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x175fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x175fd0: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x175fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x175fd4: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x175FD4u;
    SET_GPR_U32(ctx, 31, 0x175FDCu);
    ctx->pc = 0x175FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175FD4u;
            // 0x175fd8: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175FDCu; }
        if (ctx->pc != 0x175FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175FDCu; }
        if (ctx->pc != 0x175FDCu) { return; }
    }
    ctx->pc = 0x175FDCu;
    // 0x175fdc: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x175fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x175fe0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175fe4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x175fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x175fe8: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x175fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x175fec: 0xc065508  jal         func_195420
    ctx->pc = 0x175FECu;
    SET_GPR_U32(ctx, 31, 0x175FF4u);
    ctx->pc = 0x175FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175FECu;
            // 0x175ff0: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175FF4u; }
        if (ctx->pc != 0x175FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175FF4u; }
        if (ctx->pc != 0x175FF4u) { return; }
    }
    ctx->pc = 0x175FF4u;
    // 0x175ff4: 0x0  nop
    ctx->pc = 0x175ff4u;
    // NOP
label_175ff8:
    // 0x175ff8: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x175FF8u;
    SET_GPR_U32(ctx, 31, 0x176000u);
    ctx->pc = 0x175FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175FF8u;
            // 0x175ffc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176000u; }
        if (ctx->pc != 0x176000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176000u; }
        if (ctx->pc != 0x176000u) { return; }
    }
    ctx->pc = 0x176000u;
    // 0x176000: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x176000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x176004: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x176004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x176008: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x176008u;
    SET_GPR_U32(ctx, 31, 0x176010u);
    ctx->pc = 0x17600Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176008u;
            // 0x17600c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176010u; }
        if (ctx->pc != 0x176010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176010u; }
        if (ctx->pc != 0x176010u) { return; }
    }
    ctx->pc = 0x176010u;
    // 0x176010: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x176010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x176014: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x176014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x176018: 0xc04b804  jal         func_12E010
    ctx->pc = 0x176018u;
    SET_GPR_U32(ctx, 31, 0x176020u);
    ctx->pc = 0x17601Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176018u;
            // 0x17601c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176020u; }
        if (ctx->pc != 0x176020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176020u; }
        if (ctx->pc != 0x176020u) { return; }
    }
    ctx->pc = 0x176020u;
    // 0x176020: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x176020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x176024: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x176024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x176028: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x176028u;
    SET_GPR_U32(ctx, 31, 0x176030u);
    ctx->pc = 0x17602Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176028u;
            // 0x17602c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176030u; }
        if (ctx->pc != 0x176030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176030u; }
        if (ctx->pc != 0x176030u) { return; }
    }
    ctx->pc = 0x176030u;
    // 0x176030: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x176030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x176034: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x176034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176038: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x176038u;
    SET_GPR_U32(ctx, 31, 0x176040u);
    ctx->pc = 0x17603Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176038u;
            // 0x17603c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176040u; }
        if (ctx->pc != 0x176040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176040u; }
        if (ctx->pc != 0x176040u) { return; }
    }
    ctx->pc = 0x176040u;
    // 0x176040: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x176040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x176044: 0x1c60001e  bgtz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x176044u;
    {
        const bool branch_taken_0x176044 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x176044) {
            ctx->pc = 0x1760C0u;
            goto label_1760c0;
        }
    }
    ctx->pc = 0x17604Cu;
    // 0x17604c: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x17604cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x176050: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x176050u;
    {
        const bool branch_taken_0x176050 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x176054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176050u;
            // 0x176054: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)7u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176050) {
            ctx->pc = 0x176064u;
            goto label_176064;
        }
    }
    ctx->pc = 0x176058u;
    // 0x176058: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x176058u;
    {
        const bool branch_taken_0x176058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x176058) {
            ctx->pc = 0x176064u;
            goto label_176064;
        }
    }
    ctx->pc = 0x176060u;
    // 0x176060: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x176060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_176064:
    // 0x176064: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x176064u;
    {
        const bool branch_taken_0x176064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176064) {
            ctx->pc = 0x1760A0u;
            goto label_1760a0;
        }
    }
    ctx->pc = 0x17606Cu;
    // 0x17606c: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x17606cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176070: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x176070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x176074: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x176074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176078: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x176078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x17607c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x17607cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x176080: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x176080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x176084: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x176084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x176088: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x176088u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17608c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17608cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x176090: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x176090u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x176094: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x176094u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x176098: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x176098u;
    SET_GPR_U32(ctx, 31, 0x1760A0u);
    ctx->pc = 0x17609Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176098u;
            // 0x17609c: 0x24640042  addiu       $a0, $v1, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 66));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1760A0u; }
        if (ctx->pc != 0x1760A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1760A0u; }
        if (ctx->pc != 0x1760A0u) { return; }
    }
    ctx->pc = 0x1760A0u;
label_1760a0:
    // 0x1760a0: 0x8e420120  lw          $v0, 0x120($s2)
    ctx->pc = 0x1760a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x1760a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1760a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1760a8: 0xae420120  sw          $v0, 0x120($s2)
    ctx->pc = 0x1760a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 288), GPR_U32(ctx, 2));
    // 0x1760ac: 0x8e450120  lw          $a1, 0x120($s2)
    ctx->pc = 0x1760acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x1760b0: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x1760B0u;
    SET_GPR_U32(ctx, 31, 0x1760B8u);
    ctx->pc = 0x1760B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1760B0u;
            // 0x1760b4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1760B8u; }
        if (ctx->pc != 0x1760B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1760B8u; }
        if (ctx->pc != 0x1760B8u) { return; }
    }
    ctx->pc = 0x1760B8u;
    // 0x1760b8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1760B8u;
    {
        const bool branch_taken_0x1760b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1760BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1760B8u;
            // 0x1760bc: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1760b8) {
            ctx->pc = 0x1761B8u;
            goto label_1761b8;
        }
    }
    ctx->pc = 0x1760C0u;
label_1760c0:
    // 0x1760c0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1760c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1760c4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1760c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1760c8: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x1760C8u;
    {
        const bool branch_taken_0x1760c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1760c8) {
            ctx->pc = 0x176120u;
            goto label_176120;
        }
    }
    ctx->pc = 0x1760D0u;
    // 0x1760d0: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x1760d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x1760d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1760D4u;
    {
        const bool branch_taken_0x1760d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1760d4) {
            ctx->pc = 0x1760F0u;
            goto label_1760f0;
        }
    }
    ctx->pc = 0x1760DCu;
    // 0x1760dc: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x1760DCu;
    SET_GPR_U32(ctx, 31, 0x1760E4u);
    ctx->pc = 0x1760E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1760DCu;
            // 0x1760e0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1760E4u; }
        if (ctx->pc != 0x1760E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1760E4u; }
        if (ctx->pc != 0x1760E4u) { return; }
    }
    ctx->pc = 0x1760E4u;
    // 0x1760e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1760E4u;
    {
        const bool branch_taken_0x1760e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1760e4) {
            ctx->pc = 0x1760F8u;
            goto label_1760f8;
        }
    }
    ctx->pc = 0x1760ECu;
    // 0x1760ec: 0x0  nop
    ctx->pc = 0x1760ecu;
    // NOP
label_1760f0:
    // 0x1760f0: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1760F0u;
    SET_GPR_U32(ctx, 31, 0x1760F8u);
    ctx->pc = 0x1760F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1760F0u;
            // 0x1760f4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1760F8u; }
        if (ctx->pc != 0x1760F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1760F8u; }
        if (ctx->pc != 0x1760F8u) { return; }
    }
    ctx->pc = 0x1760F8u;
label_1760f8:
    // 0x1760f8: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x1760f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x1760fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1760FCu;
    {
        const bool branch_taken_0x1760fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1760fc) {
            ctx->pc = 0x176110u;
            goto label_176110;
        }
    }
    ctx->pc = 0x176104u;
    // 0x176104: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x176104u;
    {
        const bool branch_taken_0x176104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176104u;
            // 0x176108: 0xae40010c  sw          $zero, 0x10C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176104) {
            ctx->pc = 0x176130u;
            goto label_176130;
        }
    }
    ctx->pc = 0x17610Cu;
    // 0x17610c: 0x0  nop
    ctx->pc = 0x17610cu;
    // NOP
label_176110:
    // 0x176110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x176110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176114: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x176114u;
    {
        const bool branch_taken_0x176114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176114u;
            // 0x176118: 0xae42010c  sw          $v0, 0x10C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176114) {
            ctx->pc = 0x176130u;
            goto label_176130;
        }
    }
    ctx->pc = 0x17611Cu;
    // 0x17611c: 0x0  nop
    ctx->pc = 0x17611cu;
    // NOP
label_176120:
    // 0x176120: 0xc0604dc  jal         func_181370
    ctx->pc = 0x176120u;
    SET_GPR_U32(ctx, 31, 0x176128u);
    ctx->pc = 0x176124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176120u;
            // 0x176124: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176128u; }
        if (ctx->pc != 0x176128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176128u; }
        if (ctx->pc != 0x176128u) { return; }
    }
    ctx->pc = 0x176128u;
    // 0x176128: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x176128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17612c: 0xae42010c  sw          $v0, 0x10C($s2)
    ctx->pc = 0x17612cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 2));
label_176130:
    // 0x176130: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x176130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x176134: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x176134u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x176138: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x176138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17613c: 0x2645002c  addiu       $a1, $s2, 0x2C
    ctx->pc = 0x17613cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    // 0x176140: 0x24c64f80  addiu       $a2, $a2, 0x4F80
    ctx->pc = 0x176140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20352));
    // 0x176144: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x176144u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176148: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x176148u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17614c: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x17614cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x176150: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x176150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x176154: 0x24420026  addiu       $v0, $v0, 0x26
    ctx->pc = 0x176154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 38));
    // 0x176158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x176158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17615c: 0x0  nop
    ctx->pc = 0x17615cu;
    // NOP
    // 0x176160: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x176160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x176164: 0xe640002c  swc1        $f0, 0x2C($s2)
    ctx->pc = 0x176164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
    // 0x176168: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x176168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17616c: 0x2442ffb0  addiu       $v0, $v0, -0x50
    ctx->pc = 0x17616cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
    // 0x176170: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x176170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176174: 0x0  nop
    ctx->pc = 0x176174u;
    // NOP
    // 0x176178: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x176178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17617c: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x17617cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x176180: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x176180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x176184: 0x24420046  addiu       $v0, $v0, 0x46
    ctx->pc = 0x176184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
    // 0x176188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x176188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17618c: 0x0  nop
    ctx->pc = 0x17618cu;
    // NOP
    // 0x176190: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x176190u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x176194: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x176194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x176198: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x176198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17619c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x17619cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1761a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1761a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1761a4: 0x0  nop
    ctx->pc = 0x1761a4u;
    // NOP
    // 0x1761a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1761a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1761ac: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1761ACu;
    SET_GPR_U32(ctx, 31, 0x1761B4u);
    ctx->pc = 0x1761B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1761ACu;
            // 0x1761b0: 0xe6400038  swc1        $f0, 0x38($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1761B4u; }
        if (ctx->pc != 0x1761B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1761B4u; }
        if (ctx->pc != 0x1761B4u) { return; }
    }
    ctx->pc = 0x1761B4u;
    // 0x1761b4: 0x0  nop
    ctx->pc = 0x1761b4u;
    // NOP
label_1761b8:
    // 0x1761b8: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1761b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1761bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1761bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1761c0: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x1761c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
    // 0x1761c4: 0x8e430110  lw          $v1, 0x110($s2)
    ctx->pc = 0x1761c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x1761c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1761c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1761cc: 0xae430110  sw          $v1, 0x110($s2)
    ctx->pc = 0x1761ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 3));
    // 0x1761d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1761d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1761d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1761d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1761d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1761d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1761dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1761dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1761e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1761E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1761E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1761E0u;
            // 0x1761e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175790u: goto label_175790;
            case 0x1757E8u: goto label_1757e8;
            case 0x1757F0u: goto label_1757f0;
            case 0x175820u: goto label_175820;
            case 0x175830u: goto label_175830;
            case 0x175848u: goto label_175848;
            case 0x1758B0u: goto label_1758b0;
            case 0x1758B8u: goto label_1758b8;
            case 0x1758E8u: goto label_1758e8;
            case 0x175A40u: goto label_175a40;
            case 0x175B70u: goto label_175b70;
            case 0x175C20u: goto label_175c20;
            case 0x175C38u: goto label_175c38;
            case 0x175CA8u: goto label_175ca8;
            case 0x175CB0u: goto label_175cb0;
            case 0x175CD8u: goto label_175cd8;
            case 0x175CF8u: goto label_175cf8;
            case 0x175D10u: goto label_175d10;
            case 0x175D48u: goto label_175d48;
            case 0x175DE0u: goto label_175de0;
            case 0x175DFCu: goto label_175dfc;
            case 0x175E98u: goto label_175e98;
            case 0x175EC0u: goto label_175ec0;
            case 0x175F78u: goto label_175f78;
            case 0x175FF8u: goto label_175ff8;
            case 0x176064u: goto label_176064;
            case 0x1760A0u: goto label_1760a0;
            case 0x1760C0u: goto label_1760c0;
            case 0x1760F0u: goto label_1760f0;
            case 0x1760F8u: goto label_1760f8;
            case 0x176110u: goto label_176110;
            case 0x176120u: goto label_176120;
            case 0x176130u: goto label_176130;
            case 0x1761B8u: goto label_1761b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1761E8u;
}
