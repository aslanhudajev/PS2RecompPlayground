#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage2BossMove3
// Address: 0x1761f0 - 0x176d30
void Stage2BossMove3_0x1761f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage2BossMove3_0x1761f0");
#endif

    ctx->pc = 0x1761f0u;

    // 0x1761f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1761f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1761f4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1761f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1761f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1761f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1761fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1761fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x176200: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x176200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x176204: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x176204u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176208: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17620c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x17620cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x176210: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x176210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x176214: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x176214u;
    SET_GPR_U32(ctx, 31, 0x17621Cu);
    ctx->pc = 0x176218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176214u;
            // 0x176218: 0xdc25a088  ld          $a1, -0x5F78($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294942856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17621Cu; }
        if (ctx->pc != 0x17621Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17621Cu; }
        if (ctx->pc != 0x17621Cu) { return; }
    }
    ctx->pc = 0x17621Cu;
    // 0x17621c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17621cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176220: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x176220u;
    SET_GPR_U32(ctx, 31, 0x176228u);
    ctx->pc = 0x176224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176220u;
            // 0x176224: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176228u; }
        if (ctx->pc != 0x176228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176228u; }
        if (ctx->pc != 0x176228u) { return; }
    }
    ctx->pc = 0x176228u;
    // 0x176228: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x176228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17622c: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x17622cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x176230: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x176230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x176234: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x176234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x176238: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x176238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x17623c: 0xc05f3bc  jal         func_17CEF0
    ctx->pc = 0x17623Cu;
    SET_GPR_U32(ctx, 31, 0x176244u);
    ctx->pc = 0x176240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17623Cu;
            // 0x176240: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CEF0u;
    if (runtime->hasFunction(0x17CEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17CEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176244u; }
        if (ctx->pc != 0x176244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D2_0x17cef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176244u; }
        if (ctx->pc != 0x176244u) { return; }
    }
    ctx->pc = 0x176244u;
    // 0x176244: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x176244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x176248: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x176248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17624c: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x17624cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
    // 0x176250: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x176250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x176254: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x176254u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
    // 0x176258: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x176258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x17625c: 0x1062016c  beq         $v1, $v0, . + 4 + (0x16C << 2)
    ctx->pc = 0x17625Cu;
    {
        const bool branch_taken_0x17625c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x176260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17625Cu;
            // 0x176260: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17625c) {
            ctx->pc = 0x176810u;
            goto label_176810;
        }
    }
    ctx->pc = 0x176264u;
    // 0x176264: 0x10620136  beq         $v1, $v0, . + 4 + (0x136 << 2)
    ctx->pc = 0x176264u;
    {
        const bool branch_taken_0x176264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x176264) {
            ctx->pc = 0x176740u;
            goto label_176740;
        }
    }
    ctx->pc = 0x17626Cu;
    // 0x17626c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17626cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x176270: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x176270u;
    {
        const bool branch_taken_0x176270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x176274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176270u;
            // 0x176274: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176270) {
            ctx->pc = 0x176348u;
            goto label_176348;
        }
    }
    ctx->pc = 0x176278u;
    // 0x176278: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x176278u;
    {
        const bool branch_taken_0x176278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x176278) {
            ctx->pc = 0x176290u;
            goto label_176290;
        }
    }
    ctx->pc = 0x176280u;
    // 0x176280: 0x1060022f  beqz        $v1, . + 4 + (0x22F << 2)
    ctx->pc = 0x176280u;
    {
        const bool branch_taken_0x176280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x176280) {
            ctx->pc = 0x176B40u;
            goto label_176b40;
        }
    }
    ctx->pc = 0x176288u;
    // 0x176288: 0x1000022d  b           . + 4 + (0x22D << 2)
    ctx->pc = 0x176288u;
    {
        const bool branch_taken_0x176288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176288) {
            ctx->pc = 0x176B40u;
            goto label_176b40;
        }
    }
    ctx->pc = 0x176290u;
label_176290:
    // 0x176290: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x176290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176294: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x176294u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176298: 0x0  nop
    ctx->pc = 0x176298u;
    // NOP
    // 0x17629c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17629cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1762a0: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x1762A0u;
    {
        const bool branch_taken_0x1762a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1762A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1762A0u;
            // 0x1762a4: 0x3c03bba3  lui         $v1, 0xBBA3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48035 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1762a0) {
            ctx->pc = 0x1762F0u;
            goto label_1762f0;
        }
    }
    ctx->pc = 0x1762A8u;
    // 0x1762a8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1762a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1762ac: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x1762acu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
    // 0x1762b0: 0xae4300e8  sw          $v1, 0xE8($s2)
    ctx->pc = 0x1762b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 3));
    // 0x1762b4: 0x8e430110  lw          $v1, 0x110($s2)
    ctx->pc = 0x1762b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x1762b8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1762b8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1762bc: 0x0  nop
    ctx->pc = 0x1762bcu;
    // NOP
    // 0x1762c0: 0x0  nop
    ctx->pc = 0x1762c0u;
    // NOP
    // 0x1762c4: 0x1010  mfhi        $v0
    ctx->pc = 0x1762c4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1762c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1762C8u;
    {
        const bool branch_taken_0x1762c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1762c8) {
            ctx->pc = 0x1762E8u;
            goto label_1762e8;
        }
    }
    ctx->pc = 0x1762D0u;
    // 0x1762d0: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x1762d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1762d4: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x1762d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1762d8: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1762d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1762dc: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1762dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1762e0: 0xc05d080  jal         func_174200
    ctx->pc = 0x1762E0u;
    SET_GPR_U32(ctx, 31, 0x1762E8u);
    ctx->pc = 0x1762E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1762E0u;
            // 0x1762e4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1762E8u; }
        if (ctx->pc != 0x1762E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1762E8u; }
        if (ctx->pc != 0x1762E8u) { return; }
    }
    ctx->pc = 0x1762E8u;
label_1762e8:
    // 0x1762e8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1762E8u;
    {
        const bool branch_taken_0x1762e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1762ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1762E8u;
            // 0x1762ec: 0xae400114  sw          $zero, 0x114($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1762e8) {
            ctx->pc = 0x176330u;
            goto label_176330;
        }
    }
    ctx->pc = 0x1762F0u;
label_1762f0:
    // 0x1762f0: 0xe64000e8  swc1        $f0, 0xE8($s2)
    ctx->pc = 0x1762f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 232), bits); }
    // 0x1762f4: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x1762f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1762f8: 0x8e420114  lw          $v0, 0x114($s2)
    ctx->pc = 0x1762f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
    // 0x1762fc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1762FCu;
    {
        const bool branch_taken_0x1762fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1762fc) {
            ctx->pc = 0x176320u;
            goto label_176320;
        }
    }
    ctx->pc = 0x176304u;
    // 0x176304: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x176304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176308: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x176308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x17630c: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x17630cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176310: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x176310u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x176314: 0xc05d080  jal         func_174200
    ctx->pc = 0x176314u;
    SET_GPR_U32(ctx, 31, 0x17631Cu);
    ctx->pc = 0x176318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176314u;
            // 0x176318: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17631Cu; }
        if (ctx->pc != 0x17631Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17631Cu; }
        if (ctx->pc != 0x17631Cu) { return; }
    }
    ctx->pc = 0x17631Cu;
    // 0x17631c: 0x0  nop
    ctx->pc = 0x17631cu;
    // NOP
label_176320:
    // 0x176320: 0x8e420114  lw          $v0, 0x114($s2)
    ctx->pc = 0x176320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
    // 0x176324: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x176324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x176328: 0xae420114  sw          $v0, 0x114($s2)
    ctx->pc = 0x176328u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 2));
    // 0x17632c: 0x0  nop
    ctx->pc = 0x17632cu;
    // NOP
label_176330:
    // 0x176330: 0xc64100e8  lwc1        $f1, 0xE8($s2)
    ctx->pc = 0x176330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176334: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x176334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176338: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x176338u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17633c: 0x10000200  b           . + 4 + (0x200 << 2)
    ctx->pc = 0x17633Cu;
    {
        const bool branch_taken_0x17633c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17633Cu;
            // 0x176340: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17633c) {
            ctx->pc = 0x176B40u;
            goto label_176b40;
        }
    }
    ctx->pc = 0x176344u;
    // 0x176344: 0x0  nop
    ctx->pc = 0x176344u;
    // NOP
label_176348:
    // 0x176348: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x176348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x17634c: 0x184001fc  blez        $v0, . + 4 + (0x1FC << 2)
    ctx->pc = 0x17634Cu;
    {
        const bool branch_taken_0x17634c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x17634c) {
            ctx->pc = 0x176B40u;
            goto label_176b40;
        }
    }
    ctx->pc = 0x176354u;
    // 0x176354: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x176354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176358: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x176358u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17635c: 0x0  nop
    ctx->pc = 0x17635cu;
    // NOP
    // 0x176360: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x176360u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176364: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x176364u;
    {
        const bool branch_taken_0x176364 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x176368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176364u;
            // 0x176368: 0x3c03bc23  lui         $v1, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176364) {
            ctx->pc = 0x1763B8u;
            goto label_1763b8;
        }
    }
    ctx->pc = 0x17636Cu;
    // 0x17636c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x17636cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x176370: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x176370u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
    // 0x176374: 0xae4300e8  sw          $v1, 0xE8($s2)
    ctx->pc = 0x176374u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 3));
    // 0x176378: 0x8e430110  lw          $v1, 0x110($s2)
    ctx->pc = 0x176378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x17637c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x17637cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x176380: 0x0  nop
    ctx->pc = 0x176380u;
    // NOP
    // 0x176384: 0x0  nop
    ctx->pc = 0x176384u;
    // NOP
    // 0x176388: 0x1010  mfhi        $v0
    ctx->pc = 0x176388u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x17638c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17638Cu;
    {
        const bool branch_taken_0x17638c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17638c) {
            ctx->pc = 0x1763B0u;
            goto label_1763b0;
        }
    }
    ctx->pc = 0x176394u;
    // 0x176394: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x176394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176398: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x176398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x17639c: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x17639cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1763a0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1763a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1763a4: 0xc05d080  jal         func_174200
    ctx->pc = 0x1763A4u;
    SET_GPR_U32(ctx, 31, 0x1763ACu);
    ctx->pc = 0x1763A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1763A4u;
            // 0x1763a8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1763ACu; }
        if (ctx->pc != 0x1763ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1763ACu; }
        if (ctx->pc != 0x1763ACu) { return; }
    }
    ctx->pc = 0x1763ACu;
    // 0x1763ac: 0x0  nop
    ctx->pc = 0x1763acu;
    // NOP
label_1763b0:
    // 0x1763b0: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x1763B0u;
    {
        const bool branch_taken_0x1763b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1763B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1763B0u;
            // 0x1763b4: 0xae400114  sw          $zero, 0x114($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1763b0) {
            ctx->pc = 0x176728u;
            goto label_176728;
        }
    }
    ctx->pc = 0x1763B8u;
label_1763b8:
    // 0x1763b8: 0xe64000e8  swc1        $f0, 0xE8($s2)
    ctx->pc = 0x1763b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 232), bits); }
    // 0x1763bc: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x1763bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1763c0: 0x8e420114  lw          $v0, 0x114($s2)
    ctx->pc = 0x1763c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
    // 0x1763c4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1763C4u;
    {
        const bool branch_taken_0x1763c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1763c4) {
            ctx->pc = 0x1763E8u;
            goto label_1763e8;
        }
    }
    ctx->pc = 0x1763CCu;
    // 0x1763cc: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x1763ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1763d0: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1763d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1763d4: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1763d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1763d8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1763d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1763dc: 0xc05d080  jal         func_174200
    ctx->pc = 0x1763DCu;
    SET_GPR_U32(ctx, 31, 0x1763E4u);
    ctx->pc = 0x1763E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1763DCu;
            // 0x1763e0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1763E4u; }
        if (ctx->pc != 0x1763E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1763E4u; }
        if (ctx->pc != 0x1763E4u) { return; }
    }
    ctx->pc = 0x1763E4u;
    // 0x1763e4: 0x0  nop
    ctx->pc = 0x1763e4u;
    // NOP
label_1763e8:
    // 0x1763e8: 0x8e420114  lw          $v0, 0x114($s2)
    ctx->pc = 0x1763e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
    // 0x1763ec: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1763ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1763f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1763f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1763f4: 0xae420114  sw          $v0, 0x114($s2)
    ctx->pc = 0x1763f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 2));
    // 0x1763f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1763f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1763fc: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1763fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x176400: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x176400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x176404: 0xc05f3bc  jal         func_17CEF0
    ctx->pc = 0x176404u;
    SET_GPR_U32(ctx, 31, 0x17640Cu);
    ctx->pc = 0x176408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176404u;
            // 0x176408: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CEF0u;
    if (runtime->hasFunction(0x17CEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17CEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17640Cu; }
        if (ctx->pc != 0x17640Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D2_0x17cef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17640Cu; }
        if (ctx->pc != 0x17640Cu) { return; }
    }
    ctx->pc = 0x17640Cu;
    // 0x17640c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x17640cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x176410: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x176410u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x176414: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x176414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x176418: 0xc065d00  jal         func_197400
    ctx->pc = 0x176418u;
    SET_GPR_U32(ctx, 31, 0x176420u);
    ctx->pc = 0x17641Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176418u;
            // 0x17641c: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176420u; }
        if (ctx->pc != 0x176420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176420u; }
        if (ctx->pc != 0x176420u) { return; }
    }
    ctx->pc = 0x176420u;
    // 0x176420: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x176420u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x176424: 0x14200048  bnez        $at, . + 4 + (0x48 << 2)
    ctx->pc = 0x176424u;
    {
        const bool branch_taken_0x176424 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x176424) {
            ctx->pc = 0x176548u;
            goto label_176548;
        }
    }
    ctx->pc = 0x17642Cu;
    // 0x17642c: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x17642cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x176430: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x176430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x176434: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x176434u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x176438: 0x0  nop
    ctx->pc = 0x176438u;
    // NOP
    // 0x17643c: 0x0  nop
    ctx->pc = 0x17643cu;
    // NOP
    // 0x176440: 0x1010  mfhi        $v0
    ctx->pc = 0x176440u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x176444: 0x144000b8  bnez        $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x176444u;
    {
        const bool branch_taken_0x176444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176444) {
            ctx->pc = 0x176728u;
            goto label_176728;
        }
    }
    ctx->pc = 0x17644Cu;
    // 0x17644c: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x17644cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176450: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x176450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x176454: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x176454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176458: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x176458u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x17645c: 0xc05d080  jal         func_174200
    ctx->pc = 0x17645Cu;
    SET_GPR_U32(ctx, 31, 0x176464u);
    ctx->pc = 0x176460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17645Cu;
            // 0x176460: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176464u; }
        if (ctx->pc != 0x176464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176464u; }
        if (ctx->pc != 0x176464u) { return; }
    }
    ctx->pc = 0x176464u;
    // 0x176464: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x176464u;
    SET_GPR_U32(ctx, 31, 0x17646Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17646Cu; }
        if (ctx->pc != 0x17646Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17646Cu; }
        if (ctx->pc != 0x17646Cu) { return; }
    }
    ctx->pc = 0x17646Cu;
    // 0x17646c: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x17646cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)15u)));
    // 0x176470: 0x24020075  addiu       $v0, $zero, 0x75
    ctx->pc = 0x176470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x176474: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x176474u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176478: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x176478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x17647c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17647cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x176480: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x176480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x176484: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x176484u;
    SET_GPR_U32(ctx, 31, 0x17648Cu);
    ctx->pc = 0x176488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176484u;
            // 0x176488: 0x2445ffac  addiu       $a1, $v0, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17648Cu; }
        if (ctx->pc != 0x17648Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17648Cu; }
        if (ctx->pc != 0x17648Cu) { return; }
    }
    ctx->pc = 0x17648Cu;
    // 0x17648c: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x17648cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x176490: 0x3c024099  lui         $v0, 0x4099
    ctx->pc = 0x176490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16537 << 16));
    // 0x176494: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x176494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x176498: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x176498u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x17649c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17649cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1764a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1764a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1764a4: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x1764a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x1764a8: 0xc065480  jal         func_195200
    ctx->pc = 0x1764A8u;
    SET_GPR_U32(ctx, 31, 0x1764B0u);
    ctx->pc = 0x1764ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1764A8u;
            // 0x1764ac: 0x2465ffac  addiu       $a1, $v1, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1764B0u; }
        if (ctx->pc != 0x1764B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1764B0u; }
        if (ctx->pc != 0x1764B0u) { return; }
    }
    ctx->pc = 0x1764B0u;
    // 0x1764b0: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1764b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1764b4: 0x3c0240a3  lui         $v0, 0x40A3
    ctx->pc = 0x1764b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16547 << 16));
    // 0x1764b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1764b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1764bc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1764bcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1764c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1764c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1764c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1764c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1764c8: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x1764c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x1764cc: 0xc065480  jal         func_195200
    ctx->pc = 0x1764CCu;
    SET_GPR_U32(ctx, 31, 0x1764D4u);
    ctx->pc = 0x1764D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1764CCu;
            // 0x1764d0: 0x2465ffac  addiu       $a1, $v1, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1764D4u; }
        if (ctx->pc != 0x1764D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1764D4u; }
        if (ctx->pc != 0x1764D4u) { return; }
    }
    ctx->pc = 0x1764D4u;
    // 0x1764d4: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1764d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1764d8: 0x3c0240ac  lui         $v0, 0x40AC
    ctx->pc = 0x1764d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16556 << 16));
    // 0x1764dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1764dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1764e0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1764e0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1764e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1764e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1764e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1764e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1764ec: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x1764ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x1764f0: 0xc065480  jal         func_195200
    ctx->pc = 0x1764F0u;
    SET_GPR_U32(ctx, 31, 0x1764F8u);
    ctx->pc = 0x1764F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1764F0u;
            // 0x1764f4: 0x2465ffac  addiu       $a1, $v1, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1764F8u; }
        if (ctx->pc != 0x1764F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1764F8u; }
        if (ctx->pc != 0x1764F8u) { return; }
    }
    ctx->pc = 0x1764F8u;
    // 0x1764f8: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1764f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1764fc: 0x3c0240b6  lui         $v0, 0x40B6
    ctx->pc = 0x1764fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16566 << 16));
    // 0x176500: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x176500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x176504: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x176504u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x176508: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x176508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17650c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17650cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176510: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x176510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x176514: 0xc065480  jal         func_195200
    ctx->pc = 0x176514u;
    SET_GPR_U32(ctx, 31, 0x17651Cu);
    ctx->pc = 0x176518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176514u;
            // 0x176518: 0x2465ffac  addiu       $a1, $v1, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17651Cu; }
        if (ctx->pc != 0x17651Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17651Cu; }
        if (ctx->pc != 0x17651Cu) { return; }
    }
    ctx->pc = 0x17651Cu;
    // 0x17651c: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x17651cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x176520: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x176520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x176524: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x176524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x176528: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x176528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17652c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17652cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176530: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x176530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x176534: 0xc065480  jal         func_195200
    ctx->pc = 0x176534u;
    SET_GPR_U32(ctx, 31, 0x17653Cu);
    ctx->pc = 0x176538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176534u;
            // 0x176538: 0x2465ffac  addiu       $a1, $v1, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17653Cu; }
        if (ctx->pc != 0x17653Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17653Cu; }
        if (ctx->pc != 0x17653Cu) { return; }
    }
    ctx->pc = 0x17653Cu;
    // 0x17653c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x17653Cu;
    {
        const bool branch_taken_0x17653c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17653c) {
            ctx->pc = 0x176728u;
            goto label_176728;
        }
    }
    ctx->pc = 0x176544u;
    // 0x176544: 0x0  nop
    ctx->pc = 0x176544u;
    // NOP
label_176548:
    // 0x176548: 0xc065d00  jal         func_197400
    ctx->pc = 0x176548u;
    SET_GPR_U32(ctx, 31, 0x176550u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176550u; }
        if (ctx->pc != 0x176550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176550u; }
        if (ctx->pc != 0x176550u) { return; }
    }
    ctx->pc = 0x176550u;
    // 0x176550: 0x18400049  blez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x176550u;
    {
        const bool branch_taken_0x176550 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x176550) {
            ctx->pc = 0x176678u;
            goto label_176678;
        }
    }
    ctx->pc = 0x176558u;
    // 0x176558: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x176558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x17655c: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x17655cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x176560: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x176560u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x176564: 0x0  nop
    ctx->pc = 0x176564u;
    // NOP
    // 0x176568: 0x0  nop
    ctx->pc = 0x176568u;
    // NOP
    // 0x17656c: 0x1010  mfhi        $v0
    ctx->pc = 0x17656cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x176570: 0x1440006d  bnez        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x176570u;
    {
        const bool branch_taken_0x176570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176570) {
            ctx->pc = 0x176728u;
            goto label_176728;
        }
    }
    ctx->pc = 0x176578u;
    // 0x176578: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x176578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17657c: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x17657cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x176580: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x176580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176584: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x176584u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x176588: 0xc05d080  jal         func_174200
    ctx->pc = 0x176588u;
    SET_GPR_U32(ctx, 31, 0x176590u);
    ctx->pc = 0x17658Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176588u;
            // 0x17658c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176590u; }
        if (ctx->pc != 0x176590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176590u; }
        if (ctx->pc != 0x176590u) { return; }
    }
    ctx->pc = 0x176590u;
    // 0x176590: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x176590u;
    SET_GPR_U32(ctx, 31, 0x176598u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176598u; }
        if (ctx->pc != 0x176598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176598u; }
        if (ctx->pc != 0x176598u) { return; }
    }
    ctx->pc = 0x176598u;
    // 0x176598: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x176598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17659c: 0x24060075  addiu       $a2, $zero, 0x75
    ctx->pc = 0x17659cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x1765a0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1765a0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1765a4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1765a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1765a8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1765a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1765ac: 0x2445ffac  addiu       $a1, $v0, -0x54
    ctx->pc = 0x1765acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967212));
    // 0x1765b0: 0x1010  mfhi        $v0
    ctx->pc = 0x1765b0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1765b4: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x1765b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x1765b8: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1765B8u;
    SET_GPR_U32(ctx, 31, 0x1765C0u);
    ctx->pc = 0x1765BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1765B8u;
            // 0x1765bc: 0xc28023  subu        $s0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1765C0u; }
        if (ctx->pc != 0x1765C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1765C0u; }
        if (ctx->pc != 0x1765C0u) { return; }
    }
    ctx->pc = 0x1765C0u;
    // 0x1765c0: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1765c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1765c4: 0x3c024099  lui         $v0, 0x4099
    ctx->pc = 0x1765c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16537 << 16));
    // 0x1765c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1765c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1765cc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1765ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1765d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1765d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1765d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1765d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1765d8: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x1765d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x1765dc: 0xc065480  jal         func_195200
    ctx->pc = 0x1765DCu;
    SET_GPR_U32(ctx, 31, 0x1765E4u);
    ctx->pc = 0x1765E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1765DCu;
            // 0x1765e0: 0x2465ffac  addiu       $a1, $v1, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1765E4u; }
        if (ctx->pc != 0x1765E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1765E4u; }
        if (ctx->pc != 0x1765E4u) { return; }
    }
    ctx->pc = 0x1765E4u;
    // 0x1765e4: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1765e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1765e8: 0x3c0240a3  lui         $v0, 0x40A3
    ctx->pc = 0x1765e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16547 << 16));
    // 0x1765ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1765ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1765f0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1765f0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1765f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1765f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1765f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1765f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1765fc: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x1765fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x176600: 0xc065480  jal         func_195200
    ctx->pc = 0x176600u;
    SET_GPR_U32(ctx, 31, 0x176608u);
    ctx->pc = 0x176604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176600u;
            // 0x176604: 0x2465ffac  addiu       $a1, $v1, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176608u; }
        if (ctx->pc != 0x176608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176608u; }
        if (ctx->pc != 0x176608u) { return; }
    }
    ctx->pc = 0x176608u;
    // 0x176608: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x176608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x17660c: 0x3c0240ac  lui         $v0, 0x40AC
    ctx->pc = 0x17660cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16556 << 16));
    // 0x176610: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x176610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x176614: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x176614u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x176618: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x176618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17661c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17661cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176620: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x176620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x176624: 0xc065480  jal         func_195200
    ctx->pc = 0x176624u;
    SET_GPR_U32(ctx, 31, 0x17662Cu);
    ctx->pc = 0x176628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176624u;
            // 0x176628: 0x2465ffac  addiu       $a1, $v1, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17662Cu; }
        if (ctx->pc != 0x17662Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17662Cu; }
        if (ctx->pc != 0x17662Cu) { return; }
    }
    ctx->pc = 0x17662Cu;
    // 0x17662c: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x17662cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x176630: 0x3c0240b6  lui         $v0, 0x40B6
    ctx->pc = 0x176630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16566 << 16));
    // 0x176634: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x176634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x176638: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x176638u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x17663c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17663cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x176640: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x176640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176644: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x176644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x176648: 0xc065480  jal         func_195200
    ctx->pc = 0x176648u;
    SET_GPR_U32(ctx, 31, 0x176650u);
    ctx->pc = 0x17664Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176648u;
            // 0x17664c: 0x2465ffac  addiu       $a1, $v1, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176650u; }
        if (ctx->pc != 0x176650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176650u; }
        if (ctx->pc != 0x176650u) { return; }
    }
    ctx->pc = 0x176650u;
    // 0x176650: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x176650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x176654: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x176654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x176658: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x176658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17665c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17665cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x176660: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x176660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176664: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x176664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x176668: 0xc065480  jal         func_195200
    ctx->pc = 0x176668u;
    SET_GPR_U32(ctx, 31, 0x176670u);
    ctx->pc = 0x17666Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176668u;
            // 0x17666c: 0x2465ffac  addiu       $a1, $v1, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176670u; }
        if (ctx->pc != 0x176670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176670u; }
        if (ctx->pc != 0x176670u) { return; }
    }
    ctx->pc = 0x176670u;
    // 0x176670: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x176670u;
    {
        const bool branch_taken_0x176670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176670) {
            ctx->pc = 0x176728u;
            goto label_176728;
        }
    }
    ctx->pc = 0x176678u;
label_176678:
    // 0x176678: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x176678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x17667c: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x17667cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x176680: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x176680u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x176684: 0x0  nop
    ctx->pc = 0x176684u;
    // NOP
    // 0x176688: 0x0  nop
    ctx->pc = 0x176688u;
    // NOP
    // 0x17668c: 0x1010  mfhi        $v0
    ctx->pc = 0x17668cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x176690: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x176690u;
    {
        const bool branch_taken_0x176690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176690) {
            ctx->pc = 0x176728u;
            goto label_176728;
        }
    }
    ctx->pc = 0x176698u;
    // 0x176698: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x176698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17669c: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x17669cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1766a0: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1766a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1766a4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1766a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1766a8: 0xc05d080  jal         func_174200
    ctx->pc = 0x1766A8u;
    SET_GPR_U32(ctx, 31, 0x1766B0u);
    ctx->pc = 0x1766ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1766A8u;
            // 0x1766ac: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1766B0u; }
        if (ctx->pc != 0x1766B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1766B0u; }
        if (ctx->pc != 0x1766B0u) { return; }
    }
    ctx->pc = 0x1766B0u;
    // 0x1766b0: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1766b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1766b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1766b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1766b8: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x1766b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x1766bc: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1766BCu;
    SET_GPR_U32(ctx, 31, 0x1766C4u);
    ctx->pc = 0x1766C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1766BCu;
            // 0x1766c0: 0x2445ffac  addiu       $a1, $v0, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1766C4u; }
        if (ctx->pc != 0x1766C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1766C4u; }
        if (ctx->pc != 0x1766C4u) { return; }
    }
    ctx->pc = 0x1766C4u;
    // 0x1766c4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1766c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1766c8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1766c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1766cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1766ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1766d0: 0x24060073  addiu       $a2, $zero, 0x73
    ctx->pc = 0x1766d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x1766d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1766d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1766d8: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x1766d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x1766dc: 0xc065480  jal         func_195200
    ctx->pc = 0x1766DCu;
    SET_GPR_U32(ctx, 31, 0x1766E4u);
    ctx->pc = 0x1766E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1766DCu;
            // 0x1766e0: 0x2445ffac  addiu       $a1, $v0, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1766E4u; }
        if (ctx->pc != 0x1766E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1766E4u; }
        if (ctx->pc != 0x1766E4u) { return; }
    }
    ctx->pc = 0x1766E4u;
    // 0x1766e4: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x1766e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x1766e8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1766e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1766ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1766ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1766f0: 0x24060073  addiu       $a2, $zero, 0x73
    ctx->pc = 0x1766f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x1766f4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1766f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1766f8: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x1766f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x1766fc: 0xc065480  jal         func_195200
    ctx->pc = 0x1766FCu;
    SET_GPR_U32(ctx, 31, 0x176704u);
    ctx->pc = 0x176700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1766FCu;
            // 0x176700: 0x2445ffac  addiu       $a1, $v0, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176704u; }
        if (ctx->pc != 0x176704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176704u; }
        if (ctx->pc != 0x176704u) { return; }
    }
    ctx->pc = 0x176704u;
    // 0x176704: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x176704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x176708: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x176708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x17670c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17670cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x176710: 0x24060073  addiu       $a2, $zero, 0x73
    ctx->pc = 0x176710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x176714: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x176714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x176718: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x176718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x17671c: 0xc065480  jal         func_195200
    ctx->pc = 0x17671Cu;
    SET_GPR_U32(ctx, 31, 0x176724u);
    ctx->pc = 0x176720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17671Cu;
            // 0x176720: 0x2445ffac  addiu       $a1, $v0, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176724u; }
        if (ctx->pc != 0x176724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176724u; }
        if (ctx->pc != 0x176724u) { return; }
    }
    ctx->pc = 0x176724u;
    // 0x176724: 0x0  nop
    ctx->pc = 0x176724u;
    // NOP
label_176728:
    // 0x176728: 0xc64100e8  lwc1        $f1, 0xE8($s2)
    ctx->pc = 0x176728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17672c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x17672cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176730: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x176730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x176734: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x176734u;
    {
        const bool branch_taken_0x176734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176734u;
            // 0x176738: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x176734) {
            ctx->pc = 0x176B40u;
            goto label_176b40;
        }
    }
    ctx->pc = 0x17673Cu;
    // 0x17673c: 0x0  nop
    ctx->pc = 0x17673cu;
    // NOP
label_176740:
    // 0x176740: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x176740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x176744: 0x184000fe  blez        $v0, . + 4 + (0xFE << 2)
    ctx->pc = 0x176744u;
    {
        const bool branch_taken_0x176744 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x176744) {
            ctx->pc = 0x176B40u;
            goto label_176b40;
        }
    }
    ctx->pc = 0x17674Cu;
    // 0x17674c: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x17674cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176750: 0x3c023ebc  lui         $v0, 0x3EBC
    ctx->pc = 0x176750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16060 << 16));
    // 0x176754: 0x34426a7f  ori         $v0, $v0, 0x6A7F
    ctx->pc = 0x176754u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)27263u)));
    // 0x176758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x176758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17675c: 0x0  nop
    ctx->pc = 0x17675cu;
    // NOP
    // 0x176760: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x176760u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176764: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x176764u;
    {
        const bool branch_taken_0x176764 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x176768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176764u;
            // 0x176768: 0x3c033c23  lui         $v1, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176764) {
            ctx->pc = 0x1767B8u;
            goto label_1767b8;
        }
    }
    ctx->pc = 0x17676Cu;
    // 0x17676c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x17676cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x176770: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x176770u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
    // 0x176774: 0xae4300e8  sw          $v1, 0xE8($s2)
    ctx->pc = 0x176774u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 3));
    // 0x176778: 0x8e430110  lw          $v1, 0x110($s2)
    ctx->pc = 0x176778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x17677c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x17677cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x176780: 0x0  nop
    ctx->pc = 0x176780u;
    // NOP
    // 0x176784: 0x0  nop
    ctx->pc = 0x176784u;
    // NOP
    // 0x176788: 0x1010  mfhi        $v0
    ctx->pc = 0x176788u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x17678c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17678Cu;
    {
        const bool branch_taken_0x17678c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17678c) {
            ctx->pc = 0x1767B0u;
            goto label_1767b0;
        }
    }
    ctx->pc = 0x176794u;
    // 0x176794: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x176794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176798: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x176798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x17679c: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x17679cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1767a0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1767a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1767a4: 0xc05d080  jal         func_174200
    ctx->pc = 0x1767A4u;
    SET_GPR_U32(ctx, 31, 0x1767ACu);
    ctx->pc = 0x1767A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1767A4u;
            // 0x1767a8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767ACu; }
        if (ctx->pc != 0x1767ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767ACu; }
        if (ctx->pc != 0x1767ACu) { return; }
    }
    ctx->pc = 0x1767ACu;
    // 0x1767ac: 0x0  nop
    ctx->pc = 0x1767acu;
    // NOP
label_1767b0:
    // 0x1767b0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1767B0u;
    {
        const bool branch_taken_0x1767b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1767B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1767B0u;
            // 0x1767b4: 0xae400114  sw          $zero, 0x114($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1767b0) {
            ctx->pc = 0x1767F8u;
            goto label_1767f8;
        }
    }
    ctx->pc = 0x1767B8u;
label_1767b8:
    // 0x1767b8: 0xae4000e8  sw          $zero, 0xE8($s2)
    ctx->pc = 0x1767b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 0));
    // 0x1767bc: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x1767bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1767c0: 0x8e420114  lw          $v0, 0x114($s2)
    ctx->pc = 0x1767c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
    // 0x1767c4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1767C4u;
    {
        const bool branch_taken_0x1767c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1767c4) {
            ctx->pc = 0x1767E8u;
            goto label_1767e8;
        }
    }
    ctx->pc = 0x1767CCu;
    // 0x1767cc: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x1767ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1767d0: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1767d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1767d4: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1767d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1767d8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1767d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1767dc: 0xc05d080  jal         func_174200
    ctx->pc = 0x1767DCu;
    SET_GPR_U32(ctx, 31, 0x1767E4u);
    ctx->pc = 0x1767E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1767DCu;
            // 0x1767e0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767E4u; }
        if (ctx->pc != 0x1767E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767E4u; }
        if (ctx->pc != 0x1767E4u) { return; }
    }
    ctx->pc = 0x1767E4u;
    // 0x1767e4: 0x0  nop
    ctx->pc = 0x1767e4u;
    // NOP
label_1767e8:
    // 0x1767e8: 0x8e420114  lw          $v0, 0x114($s2)
    ctx->pc = 0x1767e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
    // 0x1767ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1767ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1767f0: 0xae420114  sw          $v0, 0x114($s2)
    ctx->pc = 0x1767f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 2));
    // 0x1767f4: 0x0  nop
    ctx->pc = 0x1767f4u;
    // NOP
label_1767f8:
    // 0x1767f8: 0xc64100e8  lwc1        $f1, 0xE8($s2)
    ctx->pc = 0x1767f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1767fc: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1767fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176800: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x176800u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x176804: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x176804u;
    {
        const bool branch_taken_0x176804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176804u;
            // 0x176808: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x176804) {
            ctx->pc = 0x176B40u;
            goto label_176b40;
        }
    }
    ctx->pc = 0x17680Cu;
    // 0x17680c: 0x0  nop
    ctx->pc = 0x17680cu;
    // NOP
label_176810:
    // 0x176810: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x176810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x176814: 0x184000ca  blez        $v0, . + 4 + (0xCA << 2)
    ctx->pc = 0x176814u;
    {
        const bool branch_taken_0x176814 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x176814) {
            ctx->pc = 0x176B40u;
            goto label_176b40;
        }
    }
    ctx->pc = 0x17681Cu;
    // 0x17681c: 0xc065d00  jal         func_197400
    ctx->pc = 0x17681Cu;
    SET_GPR_U32(ctx, 31, 0x176824u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176824u; }
        if (ctx->pc != 0x176824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176824u; }
        if (ctx->pc != 0x176824u) { return; }
    }
    ctx->pc = 0x176824u;
    // 0x176824: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x176824u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x176828: 0x1420006d  bnez        $at, . + 4 + (0x6D << 2)
    ctx->pc = 0x176828u;
    {
        const bool branch_taken_0x176828 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x176828) {
            ctx->pc = 0x1769E0u;
            goto label_1769e0;
        }
    }
    ctx->pc = 0x176830u;
    // 0x176830: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x176830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x176834: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x176834u;
    {
        const bool branch_taken_0x176834 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x176838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176834u;
            // 0x176838: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176834) {
            ctx->pc = 0x176848u;
            goto label_176848;
        }
    }
    ctx->pc = 0x17683Cu;
    // 0x17683c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17683Cu;
    {
        const bool branch_taken_0x17683c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17683c) {
            ctx->pc = 0x176848u;
            goto label_176848;
        }
    }
    ctx->pc = 0x176844u;
    // 0x176844: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x176844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_176848:
    // 0x176848: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x176848u;
    {
        const bool branch_taken_0x176848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176848) {
            ctx->pc = 0x1768E0u;
            goto label_1768e0;
        }
    }
    ctx->pc = 0x176850u;
    // 0x176850: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x176850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176854: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x176854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x176858: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x176858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17685c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x17685cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x176860: 0xc05d080  jal         func_174200
    ctx->pc = 0x176860u;
    SET_GPR_U32(ctx, 31, 0x176868u);
    ctx->pc = 0x176864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176860u;
            // 0x176864: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176868u; }
        if (ctx->pc != 0x176868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176868u; }
        if (ctx->pc != 0x176868u) { return; }
    }
    ctx->pc = 0x176868u;
    // 0x176868: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x176868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17686c: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x17686cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x176870: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x176870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x176874: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x176874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x176878: 0xc05f3bc  jal         func_17CEF0
    ctx->pc = 0x176878u;
    SET_GPR_U32(ctx, 31, 0x176880u);
    ctx->pc = 0x17687Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176878u;
            // 0x17687c: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CEF0u;
    if (runtime->hasFunction(0x17CEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17CEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176880u; }
        if (ctx->pc != 0x176880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D2_0x17cef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176880u; }
        if (ctx->pc != 0x176880u) { return; }
    }
    ctx->pc = 0x176880u;
    // 0x176880: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x176880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x176884: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x176884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x176888: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x176888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x17688c: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x17688Cu;
    SET_GPR_U32(ctx, 31, 0x176894u);
    ctx->pc = 0x176890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17688Cu;
            // 0x176890: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176894u; }
        if (ctx->pc != 0x176894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176894u; }
        if (ctx->pc != 0x176894u) { return; }
    }
    ctx->pc = 0x176894u;
    // 0x176894: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x176894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x176898: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x176898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17689c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17689cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1768a0: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x1768a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x1768a4: 0xc065508  jal         func_195420
    ctx->pc = 0x1768A4u;
    SET_GPR_U32(ctx, 31, 0x1768ACu);
    ctx->pc = 0x1768A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1768A4u;
            // 0x1768a8: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1768ACu; }
        if (ctx->pc != 0x1768ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1768ACu; }
        if (ctx->pc != 0x1768ACu) { return; }
    }
    ctx->pc = 0x1768ACu;
    // 0x1768ac: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1768acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1768b0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1768b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1768b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1768b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1768b8: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x1768b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x1768bc: 0xc065508  jal         func_195420
    ctx->pc = 0x1768BCu;
    SET_GPR_U32(ctx, 31, 0x1768C4u);
    ctx->pc = 0x1768C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1768BCu;
            // 0x1768c0: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1768C4u; }
        if (ctx->pc != 0x1768C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1768C4u; }
        if (ctx->pc != 0x1768C4u) { return; }
    }
    ctx->pc = 0x1768C4u;
    // 0x1768c4: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1768c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1768c8: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x1768c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1768cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1768ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1768d0: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x1768d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x1768d4: 0xc065508  jal         func_195420
    ctx->pc = 0x1768D4u;
    SET_GPR_U32(ctx, 31, 0x1768DCu);
    ctx->pc = 0x1768D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1768D4u;
            // 0x1768d8: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1768DCu; }
        if (ctx->pc != 0x1768DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1768DCu; }
        if (ctx->pc != 0x1768DCu) { return; }
    }
    ctx->pc = 0x1768DCu;
    // 0x1768dc: 0x0  nop
    ctx->pc = 0x1768dcu;
    // NOP
label_1768e0:
    // 0x1768e0: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1768e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1768e4: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x1768e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1768e8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1768E8u;
    {
        const bool branch_taken_0x1768e8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1768ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1768E8u;
            // 0x1768ec: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1768e8) {
            ctx->pc = 0x1768FCu;
            goto label_1768fc;
        }
    }
    ctx->pc = 0x1768F0u;
    // 0x1768f0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1768F0u;
    {
        const bool branch_taken_0x1768f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1768f0) {
            ctx->pc = 0x1768FCu;
            goto label_1768fc;
        }
    }
    ctx->pc = 0x1768F8u;
    // 0x1768f8: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1768f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_1768fc:
    // 0x1768fc: 0x14400090  bnez        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x1768FCu;
    {
        const bool branch_taken_0x1768fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1768fc) {
            ctx->pc = 0x176B40u;
            goto label_176b40;
        }
    }
    ctx->pc = 0x176904u;
    // 0x176904: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x176904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x176908: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x176908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x17690c: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x17690cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x176910: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x176910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x176914: 0xc05f3bc  jal         func_17CEF0
    ctx->pc = 0x176914u;
    SET_GPR_U32(ctx, 31, 0x17691Cu);
    ctx->pc = 0x176918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176914u;
            // 0x176918: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CEF0u;
    if (runtime->hasFunction(0x17CEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17CEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17691Cu; }
        if (ctx->pc != 0x17691Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D2_0x17cef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17691Cu; }
        if (ctx->pc != 0x17691Cu) { return; }
    }
    ctx->pc = 0x17691Cu;
    // 0x17691c: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x17691cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x176920: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x176920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x176924: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x176924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x176928: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x176928u;
    SET_GPR_U32(ctx, 31, 0x176930u);
    ctx->pc = 0x17692Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176928u;
            // 0x17692c: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176930u; }
        if (ctx->pc != 0x176930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176930u; }
        if (ctx->pc != 0x176930u) { return; }
    }
    ctx->pc = 0x176930u;
    // 0x176930: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x176930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x176934: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x176934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x176938: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x176938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17693c: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x17693cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x176940: 0xc065508  jal         func_195420
    ctx->pc = 0x176940u;
    SET_GPR_U32(ctx, 31, 0x176948u);
    ctx->pc = 0x176944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176940u;
            // 0x176944: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176948u; }
        if (ctx->pc != 0x176948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176948u; }
        if (ctx->pc != 0x176948u) { return; }
    }
    ctx->pc = 0x176948u;
    // 0x176948: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x176948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x17694c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x17694cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x176950: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x176950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x176954: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x176954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x176958: 0xc065508  jal         func_195420
    ctx->pc = 0x176958u;
    SET_GPR_U32(ctx, 31, 0x176960u);
    ctx->pc = 0x17695Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176958u;
            // 0x17695c: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176960u; }
        if (ctx->pc != 0x176960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176960u; }
        if (ctx->pc != 0x176960u) { return; }
    }
    ctx->pc = 0x176960u;
    // 0x176960: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x176960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x176964: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x176964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x176968: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x176968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17696c: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x17696cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x176970: 0xc065508  jal         func_195420
    ctx->pc = 0x176970u;
    SET_GPR_U32(ctx, 31, 0x176978u);
    ctx->pc = 0x176974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176970u;
            // 0x176974: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176978u; }
        if (ctx->pc != 0x176978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176978u; }
        if (ctx->pc != 0x176978u) { return; }
    }
    ctx->pc = 0x176978u;
    // 0x176978: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x176978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x17697c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17697cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176980: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x176980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x176984: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x176984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x176988: 0xc065508  jal         func_195420
    ctx->pc = 0x176988u;
    SET_GPR_U32(ctx, 31, 0x176990u);
    ctx->pc = 0x17698Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176988u;
            // 0x17698c: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176990u; }
        if (ctx->pc != 0x176990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176990u; }
        if (ctx->pc != 0x176990u) { return; }
    }
    ctx->pc = 0x176990u;
    // 0x176990: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x176990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x176994: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x176994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x176998: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x176998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17699c: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x17699cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x1769a0: 0xc065508  jal         func_195420
    ctx->pc = 0x1769A0u;
    SET_GPR_U32(ctx, 31, 0x1769A8u);
    ctx->pc = 0x1769A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1769A0u;
            // 0x1769a4: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1769A8u; }
        if (ctx->pc != 0x1769A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1769A8u; }
        if (ctx->pc != 0x1769A8u) { return; }
    }
    ctx->pc = 0x1769A8u;
    // 0x1769a8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1769a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1769ac: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x1769acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1769b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1769b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1769b4: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x1769b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x1769b8: 0xc065508  jal         func_195420
    ctx->pc = 0x1769B8u;
    SET_GPR_U32(ctx, 31, 0x1769C0u);
    ctx->pc = 0x1769BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1769B8u;
            // 0x1769bc: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1769C0u; }
        if (ctx->pc != 0x1769C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1769C0u; }
        if (ctx->pc != 0x1769C0u) { return; }
    }
    ctx->pc = 0x1769C0u;
    // 0x1769c0: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1769c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1769c4: 0x24060066  addiu       $a2, $zero, 0x66
    ctx->pc = 0x1769c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x1769c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1769c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1769cc: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x1769ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x1769d0: 0xc065508  jal         func_195420
    ctx->pc = 0x1769D0u;
    SET_GPR_U32(ctx, 31, 0x1769D8u);
    ctx->pc = 0x1769D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1769D0u;
            // 0x1769d4: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1769D8u; }
        if (ctx->pc != 0x1769D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1769D8u; }
        if (ctx->pc != 0x1769D8u) { return; }
    }
    ctx->pc = 0x1769D8u;
    // 0x1769d8: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1769D8u;
    {
        const bool branch_taken_0x1769d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1769d8) {
            ctx->pc = 0x176B40u;
            goto label_176b40;
        }
    }
    ctx->pc = 0x1769E0u;
label_1769e0:
    // 0x1769e0: 0xc065d00  jal         func_197400
    ctx->pc = 0x1769E0u;
    SET_GPR_U32(ctx, 31, 0x1769E8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1769E8u; }
        if (ctx->pc != 0x1769E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1769E8u; }
        if (ctx->pc != 0x1769E8u) { return; }
    }
    ctx->pc = 0x1769E8u;
    // 0x1769e8: 0x18400035  blez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1769E8u;
    {
        const bool branch_taken_0x1769e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1769e8) {
            ctx->pc = 0x176AC0u;
            goto label_176ac0;
        }
    }
    ctx->pc = 0x1769F0u;
    // 0x1769f0: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1769f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1769f4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1769F4u;
    {
        const bool branch_taken_0x1769f4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1769F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1769F4u;
            // 0x1769f8: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1769f4) {
            ctx->pc = 0x176A08u;
            goto label_176a08;
        }
    }
    ctx->pc = 0x1769FCu;
    // 0x1769fc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1769FCu;
    {
        const bool branch_taken_0x1769fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1769fc) {
            ctx->pc = 0x176A08u;
            goto label_176a08;
        }
    }
    ctx->pc = 0x176A04u;
    // 0x176a04: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x176a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_176a08:
    // 0x176a08: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x176A08u;
    {
        const bool branch_taken_0x176a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176a08) {
            ctx->pc = 0x176B40u;
            goto label_176b40;
        }
    }
    ctx->pc = 0x176A10u;
    // 0x176a10: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x176a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176a14: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x176a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x176a18: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x176a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176a1c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x176a1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x176a20: 0xc05d080  jal         func_174200
    ctx->pc = 0x176A20u;
    SET_GPR_U32(ctx, 31, 0x176A28u);
    ctx->pc = 0x176A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176A20u;
            // 0x176a24: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A28u; }
        if (ctx->pc != 0x176A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A28u; }
        if (ctx->pc != 0x176A28u) { return; }
    }
    ctx->pc = 0x176A28u;
    // 0x176a28: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x176a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x176a2c: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x176a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x176a30: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x176a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x176a34: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x176a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x176a38: 0xc05f3bc  jal         func_17CEF0
    ctx->pc = 0x176A38u;
    SET_GPR_U32(ctx, 31, 0x176A40u);
    ctx->pc = 0x176A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176A38u;
            // 0x176a3c: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CEF0u;
    if (runtime->hasFunction(0x17CEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17CEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A40u; }
        if (ctx->pc != 0x176A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D2_0x17cef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A40u; }
        if (ctx->pc != 0x176A40u) { return; }
    }
    ctx->pc = 0x176A40u;
    // 0x176a40: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x176a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x176a44: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x176a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x176a48: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x176a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x176a4c: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x176A4Cu;
    SET_GPR_U32(ctx, 31, 0x176A54u);
    ctx->pc = 0x176A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176A4Cu;
            // 0x176a50: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A54u; }
        if (ctx->pc != 0x176A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A54u; }
        if (ctx->pc != 0x176A54u) { return; }
    }
    ctx->pc = 0x176A54u;
    // 0x176a54: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x176a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x176a58: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x176a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x176a5c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x176a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x176a60: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x176a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x176a64: 0xc065508  jal         func_195420
    ctx->pc = 0x176A64u;
    SET_GPR_U32(ctx, 31, 0x176A6Cu);
    ctx->pc = 0x176A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176A64u;
            // 0x176a68: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A6Cu; }
        if (ctx->pc != 0x176A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A6Cu; }
        if (ctx->pc != 0x176A6Cu) { return; }
    }
    ctx->pc = 0x176A6Cu;
    // 0x176a6c: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x176a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x176a70: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x176a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x176a74: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x176a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x176a78: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x176a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x176a7c: 0xc065508  jal         func_195420
    ctx->pc = 0x176A7Cu;
    SET_GPR_U32(ctx, 31, 0x176A84u);
    ctx->pc = 0x176A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176A7Cu;
            // 0x176a80: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A84u; }
        if (ctx->pc != 0x176A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A84u; }
        if (ctx->pc != 0x176A84u) { return; }
    }
    ctx->pc = 0x176A84u;
    // 0x176a84: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x176a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x176a88: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x176a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x176a8c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x176a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x176a90: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x176a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x176a94: 0xc065508  jal         func_195420
    ctx->pc = 0x176A94u;
    SET_GPR_U32(ctx, 31, 0x176A9Cu);
    ctx->pc = 0x176A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176A94u;
            // 0x176a98: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A9Cu; }
        if (ctx->pc != 0x176A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A9Cu; }
        if (ctx->pc != 0x176A9Cu) { return; }
    }
    ctx->pc = 0x176A9Cu;
    // 0x176a9c: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x176a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x176aa0: 0x24060066  addiu       $a2, $zero, 0x66
    ctx->pc = 0x176aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x176aa4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x176aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x176aa8: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x176aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x176aac: 0xc065508  jal         func_195420
    ctx->pc = 0x176AACu;
    SET_GPR_U32(ctx, 31, 0x176AB4u);
    ctx->pc = 0x176AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176AACu;
            // 0x176ab0: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176AB4u; }
        if (ctx->pc != 0x176AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176AB4u; }
        if (ctx->pc != 0x176AB4u) { return; }
    }
    ctx->pc = 0x176AB4u;
    // 0x176ab4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x176AB4u;
    {
        const bool branch_taken_0x176ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176ab4) {
            ctx->pc = 0x176B40u;
            goto label_176b40;
        }
    }
    ctx->pc = 0x176ABCu;
    // 0x176abc: 0x0  nop
    ctx->pc = 0x176abcu;
    // NOP
label_176ac0:
    // 0x176ac0: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x176ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x176ac4: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x176ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x176ac8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x176ac8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x176acc: 0x0  nop
    ctx->pc = 0x176accu;
    // NOP
    // 0x176ad0: 0x0  nop
    ctx->pc = 0x176ad0u;
    // NOP
    // 0x176ad4: 0x1010  mfhi        $v0
    ctx->pc = 0x176ad4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x176ad8: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x176AD8u;
    {
        const bool branch_taken_0x176ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176ad8) {
            ctx->pc = 0x176B40u;
            goto label_176b40;
        }
    }
    ctx->pc = 0x176AE0u;
    // 0x176ae0: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x176ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176ae4: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x176ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x176ae8: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x176ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176aec: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x176aecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x176af0: 0xc05d080  jal         func_174200
    ctx->pc = 0x176AF0u;
    SET_GPR_U32(ctx, 31, 0x176AF8u);
    ctx->pc = 0x176AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176AF0u;
            // 0x176af4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176AF8u; }
        if (ctx->pc != 0x176AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176AF8u; }
        if (ctx->pc != 0x176AF8u) { return; }
    }
    ctx->pc = 0x176AF8u;
    // 0x176af8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x176af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x176afc: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x176afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x176b00: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x176b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x176b04: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x176b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x176b08: 0xc05f3bc  jal         func_17CEF0
    ctx->pc = 0x176B08u;
    SET_GPR_U32(ctx, 31, 0x176B10u);
    ctx->pc = 0x176B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176B08u;
            // 0x176b0c: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CEF0u;
    if (runtime->hasFunction(0x17CEF0u)) {
        auto targetFn = runtime->lookupFunction(0x17CEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176B10u; }
        if (ctx->pc != 0x176B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D2_0x17cef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176B10u; }
        if (ctx->pc != 0x176B10u) { return; }
    }
    ctx->pc = 0x176B10u;
    // 0x176b10: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x176b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x176b14: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x176b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x176b18: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x176b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x176b1c: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x176B1Cu;
    SET_GPR_U32(ctx, 31, 0x176B24u);
    ctx->pc = 0x176B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176B1Cu;
            // 0x176b20: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176B24u; }
        if (ctx->pc != 0x176B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176B24u; }
        if (ctx->pc != 0x176B24u) { return; }
    }
    ctx->pc = 0x176B24u;
    // 0x176b24: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x176b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x176b28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x176b28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b2c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x176b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x176b30: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x176b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x176b34: 0xc065508  jal         func_195420
    ctx->pc = 0x176B34u;
    SET_GPR_U32(ctx, 31, 0x176B3Cu);
    ctx->pc = 0x176B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176B34u;
            // 0x176b38: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176B3Cu; }
        if (ctx->pc != 0x176B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176B3Cu; }
        if (ctx->pc != 0x176B3Cu) { return; }
    }
    ctx->pc = 0x176B3Cu;
    // 0x176b3c: 0x0  nop
    ctx->pc = 0x176b3cu;
    // NOP
label_176b40:
    // 0x176b40: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x176B40u;
    SET_GPR_U32(ctx, 31, 0x176B48u);
    ctx->pc = 0x176B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176B40u;
            // 0x176b44: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176B48u; }
        if (ctx->pc != 0x176B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176B48u; }
        if (ctx->pc != 0x176B48u) { return; }
    }
    ctx->pc = 0x176B48u;
    // 0x176b48: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x176b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x176b4c: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x176b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x176b50: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x176B50u;
    SET_GPR_U32(ctx, 31, 0x176B58u);
    ctx->pc = 0x176B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176B50u;
            // 0x176b54: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176B58u; }
        if (ctx->pc != 0x176B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176B58u; }
        if (ctx->pc != 0x176B58u) { return; }
    }
    ctx->pc = 0x176B58u;
    // 0x176b58: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x176b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x176b5c: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x176b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x176b60: 0xc04b804  jal         func_12E010
    ctx->pc = 0x176B60u;
    SET_GPR_U32(ctx, 31, 0x176B68u);
    ctx->pc = 0x176B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176B60u;
            // 0x176b64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176B68u; }
        if (ctx->pc != 0x176B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176B68u; }
        if (ctx->pc != 0x176B68u) { return; }
    }
    ctx->pc = 0x176B68u;
    // 0x176b68: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x176b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x176b6c: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x176b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x176b70: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x176B70u;
    SET_GPR_U32(ctx, 31, 0x176B78u);
    ctx->pc = 0x176B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176B70u;
            // 0x176b74: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176B78u; }
        if (ctx->pc != 0x176B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176B78u; }
        if (ctx->pc != 0x176B78u) { return; }
    }
    ctx->pc = 0x176B78u;
    // 0x176b78: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x176b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x176b7c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x176b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b80: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x176B80u;
    SET_GPR_U32(ctx, 31, 0x176B88u);
    ctx->pc = 0x176B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176B80u;
            // 0x176b84: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176B88u; }
        if (ctx->pc != 0x176B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176B88u; }
        if (ctx->pc != 0x176B88u) { return; }
    }
    ctx->pc = 0x176B88u;
    // 0x176b88: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x176b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x176b8c: 0x1c60001e  bgtz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x176B8Cu;
    {
        const bool branch_taken_0x176b8c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x176b8c) {
            ctx->pc = 0x176C08u;
            goto label_176c08;
        }
    }
    ctx->pc = 0x176B94u;
    // 0x176b94: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x176b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x176b98: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x176B98u;
    {
        const bool branch_taken_0x176b98 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x176B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176B98u;
            // 0x176b9c: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)7u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176b98) {
            ctx->pc = 0x176BACu;
            goto label_176bac;
        }
    }
    ctx->pc = 0x176BA0u;
    // 0x176ba0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x176BA0u;
    {
        const bool branch_taken_0x176ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x176ba0) {
            ctx->pc = 0x176BACu;
            goto label_176bac;
        }
    }
    ctx->pc = 0x176BA8u;
    // 0x176ba8: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x176ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_176bac:
    // 0x176bac: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x176BACu;
    {
        const bool branch_taken_0x176bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176bac) {
            ctx->pc = 0x176BE8u;
            goto label_176be8;
        }
    }
    ctx->pc = 0x176BB4u;
    // 0x176bb4: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x176bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176bb8: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x176bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x176bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x176bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176bc0: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x176bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x176bc4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x176bc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x176bc8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x176bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x176bcc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x176bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x176bd0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x176bd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x176bd4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x176bd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x176bd8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x176bd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x176bdc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x176bdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x176be0: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x176BE0u;
    SET_GPR_U32(ctx, 31, 0x176BE8u);
    ctx->pc = 0x176BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176BE0u;
            // 0x176be4: 0x2464ffbe  addiu       $a0, $v1, -0x42 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967230));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176BE8u; }
        if (ctx->pc != 0x176BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176BE8u; }
        if (ctx->pc != 0x176BE8u) { return; }
    }
    ctx->pc = 0x176BE8u;
label_176be8:
    // 0x176be8: 0x8e420120  lw          $v0, 0x120($s2)
    ctx->pc = 0x176be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x176bec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x176becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x176bf0: 0xae420120  sw          $v0, 0x120($s2)
    ctx->pc = 0x176bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 288), GPR_U32(ctx, 2));
    // 0x176bf4: 0x8e450120  lw          $a1, 0x120($s2)
    ctx->pc = 0x176bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x176bf8: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x176BF8u;
    SET_GPR_U32(ctx, 31, 0x176C00u);
    ctx->pc = 0x176BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176BF8u;
            // 0x176bfc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176C00u; }
        if (ctx->pc != 0x176C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176C00u; }
        if (ctx->pc != 0x176C00u) { return; }
    }
    ctx->pc = 0x176C00u;
    // 0x176c00: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x176C00u;
    {
        const bool branch_taken_0x176c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176C00u;
            // 0x176c04: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176c00) {
            ctx->pc = 0x176D00u;
            goto label_176d00;
        }
    }
    ctx->pc = 0x176C08u;
label_176c08:
    // 0x176c08: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x176c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x176c0c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x176c0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x176c10: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x176C10u;
    {
        const bool branch_taken_0x176c10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x176c10) {
            ctx->pc = 0x176C68u;
            goto label_176c68;
        }
    }
    ctx->pc = 0x176C18u;
    // 0x176c18: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x176c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x176c1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x176C1Cu;
    {
        const bool branch_taken_0x176c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x176c1c) {
            ctx->pc = 0x176C38u;
            goto label_176c38;
        }
    }
    ctx->pc = 0x176C24u;
    // 0x176c24: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x176C24u;
    SET_GPR_U32(ctx, 31, 0x176C2Cu);
    ctx->pc = 0x176C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176C24u;
            // 0x176c28: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176C2Cu; }
        if (ctx->pc != 0x176C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176C2Cu; }
        if (ctx->pc != 0x176C2Cu) { return; }
    }
    ctx->pc = 0x176C2Cu;
    // 0x176c2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x176C2Cu;
    {
        const bool branch_taken_0x176c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176c2c) {
            ctx->pc = 0x176C40u;
            goto label_176c40;
        }
    }
    ctx->pc = 0x176C34u;
    // 0x176c34: 0x0  nop
    ctx->pc = 0x176c34u;
    // NOP
label_176c38:
    // 0x176c38: 0xc0604dc  jal         func_181370
    ctx->pc = 0x176C38u;
    SET_GPR_U32(ctx, 31, 0x176C40u);
    ctx->pc = 0x176C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176C38u;
            // 0x176c3c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176C40u; }
        if (ctx->pc != 0x176C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176C40u; }
        if (ctx->pc != 0x176C40u) { return; }
    }
    ctx->pc = 0x176C40u;
label_176c40:
    // 0x176c40: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x176c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x176c44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x176C44u;
    {
        const bool branch_taken_0x176c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x176c44) {
            ctx->pc = 0x176C58u;
            goto label_176c58;
        }
    }
    ctx->pc = 0x176C4Cu;
    // 0x176c4c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x176C4Cu;
    {
        const bool branch_taken_0x176c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176C4Cu;
            // 0x176c50: 0xae40010c  sw          $zero, 0x10C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176c4c) {
            ctx->pc = 0x176C78u;
            goto label_176c78;
        }
    }
    ctx->pc = 0x176C54u;
    // 0x176c54: 0x0  nop
    ctx->pc = 0x176c54u;
    // NOP
label_176c58:
    // 0x176c58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x176c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176c5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x176C5Cu;
    {
        const bool branch_taken_0x176c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176C5Cu;
            // 0x176c60: 0xae42010c  sw          $v0, 0x10C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176c5c) {
            ctx->pc = 0x176C78u;
            goto label_176c78;
        }
    }
    ctx->pc = 0x176C64u;
    // 0x176c64: 0x0  nop
    ctx->pc = 0x176c64u;
    // NOP
label_176c68:
    // 0x176c68: 0xc0604dc  jal         func_181370
    ctx->pc = 0x176C68u;
    SET_GPR_U32(ctx, 31, 0x176C70u);
    ctx->pc = 0x176C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176C68u;
            // 0x176c6c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176C70u; }
        if (ctx->pc != 0x176C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176C70u; }
        if (ctx->pc != 0x176C70u) { return; }
    }
    ctx->pc = 0x176C70u;
    // 0x176c70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x176c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176c74: 0xae42010c  sw          $v0, 0x10C($s2)
    ctx->pc = 0x176c74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 2));
label_176c78:
    // 0x176c78: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x176c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x176c7c: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x176c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x176c80: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x176c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x176c84: 0x2645002c  addiu       $a1, $s2, 0x2C
    ctx->pc = 0x176c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    // 0x176c88: 0x24c64f80  addiu       $a2, $a2, 0x4F80
    ctx->pc = 0x176c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20352));
    // 0x176c8c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x176c8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176c90: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x176c90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176c94: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x176c94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x176c98: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x176c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x176c9c: 0x2442ffba  addiu       $v0, $v0, -0x46
    ctx->pc = 0x176c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967226));
    // 0x176ca0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x176ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176ca4: 0x0  nop
    ctx->pc = 0x176ca4u;
    // NOP
    // 0x176ca8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x176ca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x176cac: 0xe640002c  swc1        $f0, 0x2C($s2)
    ctx->pc = 0x176cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
    // 0x176cb0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x176cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x176cb4: 0x2442ffb0  addiu       $v0, $v0, -0x50
    ctx->pc = 0x176cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
    // 0x176cb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x176cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176cbc: 0x0  nop
    ctx->pc = 0x176cbcu;
    // NOP
    // 0x176cc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x176cc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x176cc4: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x176cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x176cc8: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x176cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x176ccc: 0x2442ffda  addiu       $v0, $v0, -0x26
    ctx->pc = 0x176cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967258));
    // 0x176cd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x176cd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176cd4: 0x0  nop
    ctx->pc = 0x176cd4u;
    // NOP
    // 0x176cd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x176cd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x176cdc: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x176cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x176ce0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x176ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x176ce4: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x176ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x176ce8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x176ce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176cec: 0x0  nop
    ctx->pc = 0x176cecu;
    // NOP
    // 0x176cf0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x176cf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x176cf4: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x176CF4u;
    SET_GPR_U32(ctx, 31, 0x176CFCu);
    ctx->pc = 0x176CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176CF4u;
            // 0x176cf8: 0xe6400038  swc1        $f0, 0x38($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176CFCu; }
        if (ctx->pc != 0x176CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176CFCu; }
        if (ctx->pc != 0x176CFCu) { return; }
    }
    ctx->pc = 0x176CFCu;
    // 0x176cfc: 0x0  nop
    ctx->pc = 0x176cfcu;
    // NOP
label_176d00:
    // 0x176d00: 0x8e430110  lw          $v1, 0x110($s2)
    ctx->pc = 0x176d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x176d04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x176d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x176d08: 0xae430110  sw          $v1, 0x110($s2)
    ctx->pc = 0x176d08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 3));
    // 0x176d0c: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x176d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x176d10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x176d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x176d14: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x176d14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
    // 0x176d18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x176d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x176d1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x176d1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176d20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x176d20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176d24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x176d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176d28: 0x3e00008  jr          $ra
    ctx->pc = 0x176D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176D28u;
            // 0x176d2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176290u: goto label_176290;
            case 0x1762E8u: goto label_1762e8;
            case 0x1762F0u: goto label_1762f0;
            case 0x176320u: goto label_176320;
            case 0x176330u: goto label_176330;
            case 0x176348u: goto label_176348;
            case 0x1763B0u: goto label_1763b0;
            case 0x1763B8u: goto label_1763b8;
            case 0x1763E8u: goto label_1763e8;
            case 0x176548u: goto label_176548;
            case 0x176678u: goto label_176678;
            case 0x176728u: goto label_176728;
            case 0x176740u: goto label_176740;
            case 0x1767B0u: goto label_1767b0;
            case 0x1767B8u: goto label_1767b8;
            case 0x1767E8u: goto label_1767e8;
            case 0x1767F8u: goto label_1767f8;
            case 0x176810u: goto label_176810;
            case 0x176848u: goto label_176848;
            case 0x1768E0u: goto label_1768e0;
            case 0x1768FCu: goto label_1768fc;
            case 0x1769E0u: goto label_1769e0;
            case 0x176A08u: goto label_176a08;
            case 0x176AC0u: goto label_176ac0;
            case 0x176B40u: goto label_176b40;
            case 0x176BACu: goto label_176bac;
            case 0x176BE8u: goto label_176be8;
            case 0x176C08u: goto label_176c08;
            case 0x176C38u: goto label_176c38;
            case 0x176C40u: goto label_176c40;
            case 0x176C58u: goto label_176c58;
            case 0x176C68u: goto label_176c68;
            case 0x176C78u: goto label_176c78;
            case 0x176D00u: goto label_176d00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x176D30u;
}
