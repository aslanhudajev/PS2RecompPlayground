#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage2BossMove1
// Address: 0x177500 - 0x177cb8
void Stage2BossMove1_0x177500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage2BossMove1_0x177500");
#endif

    ctx->pc = 0x177500u;

    // 0x177500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x177500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x177504: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x177504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x177508: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x177508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17750c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17750cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x177510: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x177510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x177514: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x177514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177518: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x177518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x17751c: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x17751Cu;
    SET_GPR_U32(ctx, 31, 0x177524u);
    ctx->pc = 0x177520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17751Cu;
            // 0x177520: 0xdc25a078  ld          $a1, -0x5F88($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294942840)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177524u; }
        if (ctx->pc != 0x177524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177524u; }
        if (ctx->pc != 0x177524u) { return; }
    }
    ctx->pc = 0x177524u;
    // 0x177524: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x177524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x177528: 0xac2227b8  sw          $v0, 0x27B8($at)
    ctx->pc = 0x177528u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10168), GPR_U32(ctx, 2));
    // 0x17752c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17752cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x177530: 0x8c2427b8  lw          $a0, 0x27B8($at)
    ctx->pc = 0x177530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10168)));
    // 0x177534: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x177534u;
    SET_GPR_U32(ctx, 31, 0x17753Cu);
    ctx->pc = 0x177538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177534u;
            // 0x177538: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17753Cu; }
        if (ctx->pc != 0x17753Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17753Cu; }
        if (ctx->pc != 0x17753Cu) { return; }
    }
    ctx->pc = 0x17753Cu;
    // 0x17753c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17753cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x177540: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x177540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x177544: 0xac2227c0  sw          $v0, 0x27C0($at)
    ctx->pc = 0x177544u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10176), GPR_U32(ctx, 2));
    // 0x177548: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x177548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17754c: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x17754cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x177550: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x177550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x177554: 0xc05f3cc  jal         func_17CF30
    ctx->pc = 0x177554u;
    SET_GPR_U32(ctx, 31, 0x17755Cu);
    ctx->pc = 0x177558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177554u;
            // 0x177558: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CF30u;
    if (runtime->hasFunction(0x17CF30u)) {
        auto targetFn = runtime->lookupFunction(0x17CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17755Cu; }
        if (ctx->pc != 0x17755Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x17cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17755Cu; }
        if (ctx->pc != 0x17755Cu) { return; }
    }
    ctx->pc = 0x17755Cu;
    // 0x17755c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x17755cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x177560: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x177560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x177564: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x177564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x177568: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x177568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17756c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x17756cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x177570: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x177570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x177574: 0x106200bc  beq         $v1, $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x177574u;
    {
        const bool branch_taken_0x177574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x177578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177574u;
            // 0x177578: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177574) {
            ctx->pc = 0x177868u;
            goto label_177868;
        }
    }
    ctx->pc = 0x17757Cu;
    // 0x17757c: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x17757Cu;
    {
        const bool branch_taken_0x17757c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17757c) {
            ctx->pc = 0x177688u;
            goto label_177688;
        }
    }
    ctx->pc = 0x177584u;
    // 0x177584: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x177584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177588: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x177588u;
    {
        const bool branch_taken_0x177588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x177588) {
            ctx->pc = 0x1775B8u;
            goto label_1775b8;
        }
    }
    ctx->pc = 0x177590u;
    // 0x177590: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x177590u;
    {
        const bool branch_taken_0x177590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x177590) {
            ctx->pc = 0x1775A0u;
            goto label_1775a0;
        }
    }
    ctx->pc = 0x177598u;
    // 0x177598: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x177598u;
    {
        const bool branch_taken_0x177598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177598) {
            ctx->pc = 0x177940u;
            goto label_177940;
        }
    }
    ctx->pc = 0x1775A0u;
label_1775a0:
    // 0x1775a0: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x1775a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x1775a4: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x1775a4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1775a8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1775a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1775ac: 0x8c2227c0  lw          $v0, 0x27C0($at)
    ctx->pc = 0x1775acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10176)));
    // 0x1775b0: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x1775B0u;
    {
        const bool branch_taken_0x1775b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1775B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1775B0u;
            // 0x1775b4: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1775b0) {
            ctx->pc = 0x177940u;
            goto label_177940;
        }
    }
    ctx->pc = 0x1775B8u;
label_1775b8:
    // 0x1775b8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1775b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1775bc: 0x8c2227c0  lw          $v0, 0x27C0($at)
    ctx->pc = 0x1775bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10176)));
    // 0x1775c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1775c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1775c4: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1775c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1775c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1775c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1775cc: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x1775CCu;
    {
        const bool branch_taken_0x1775cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1775D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1775CCu;
            // 0x1775d0: 0x3c03bc23  lui         $v1, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1775cc) {
            ctx->pc = 0x177620u;
            goto label_177620;
        }
    }
    ctx->pc = 0x1775D4u;
    // 0x1775d4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1775d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1775d8: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x1775d8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
    // 0x1775dc: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x1775dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
    // 0x1775e0: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1775e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1775e4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1775e4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1775e8: 0x0  nop
    ctx->pc = 0x1775e8u;
    // NOP
    // 0x1775ec: 0x0  nop
    ctx->pc = 0x1775ecu;
    // NOP
    // 0x1775f0: 0x1010  mfhi        $v0
    ctx->pc = 0x1775f0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1775f4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1775F4u;
    {
        const bool branch_taken_0x1775f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1775f4) {
            ctx->pc = 0x177618u;
            goto label_177618;
        }
    }
    ctx->pc = 0x1775FCu;
    // 0x1775fc: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1775fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177600: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x177600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x177604: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x177604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177608: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x177608u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x17760c: 0xc05d080  jal         func_174200
    ctx->pc = 0x17760Cu;
    SET_GPR_U32(ctx, 31, 0x177614u);
    ctx->pc = 0x177610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17760Cu;
            // 0x177610: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177614u; }
        if (ctx->pc != 0x177614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177614u; }
        if (ctx->pc != 0x177614u) { return; }
    }
    ctx->pc = 0x177614u;
    // 0x177614: 0x0  nop
    ctx->pc = 0x177614u;
    // NOP
label_177618:
    // 0x177618: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x177618u;
    {
        const bool branch_taken_0x177618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17761Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177618u;
            // 0x17761c: 0xae000114  sw          $zero, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177618) {
            ctx->pc = 0x177668u;
            goto label_177668;
        }
    }
    ctx->pc = 0x177620u;
label_177620:
    // 0x177620: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x177620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x177624: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x177624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x177628: 0x8c2227c0  lw          $v0, 0x27C0($at)
    ctx->pc = 0x177628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10176)));
    // 0x17762c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x17762cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x177630: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x177630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x177634: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x177634u;
    {
        const bool branch_taken_0x177634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177634) {
            ctx->pc = 0x177658u;
            goto label_177658;
        }
    }
    ctx->pc = 0x17763Cu;
    // 0x17763c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x17763cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177640: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x177640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x177644: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x177644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177648: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x177648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x17764c: 0xc05d080  jal         func_174200
    ctx->pc = 0x17764Cu;
    SET_GPR_U32(ctx, 31, 0x177654u);
    ctx->pc = 0x177650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17764Cu;
            // 0x177650: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177654u; }
        if (ctx->pc != 0x177654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177654u; }
        if (ctx->pc != 0x177654u) { return; }
    }
    ctx->pc = 0x177654u;
    // 0x177654: 0x0  nop
    ctx->pc = 0x177654u;
    // NOP
label_177658:
    // 0x177658: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x177658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x17765c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17765cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x177660: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x177660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x177664: 0x0  nop
    ctx->pc = 0x177664u;
    // NOP
label_177668:
    // 0x177668: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x177668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17766c: 0x8c2227c0  lw          $v0, 0x27C0($at)
    ctx->pc = 0x17766cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10176)));
    // 0x177670: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x177670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177674: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x177674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177678: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x177678u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17767c: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x17767Cu;
    {
        const bool branch_taken_0x17767c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17767Cu;
            // 0x177680: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17767c) {
            ctx->pc = 0x177940u;
            goto label_177940;
        }
    }
    ctx->pc = 0x177684u;
    // 0x177684: 0x0  nop
    ctx->pc = 0x177684u;
    // NOP
label_177688:
    // 0x177688: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x177688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17768c: 0x184000ac  blez        $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x17768Cu;
    {
        const bool branch_taken_0x17768c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x177690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17768Cu;
            // 0x177690: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17768c) {
            ctx->pc = 0x177940u;
            goto label_177940;
        }
    }
    ctx->pc = 0x177694u;
    // 0x177694: 0x8c2227c0  lw          $v0, 0x27C0($at)
    ctx->pc = 0x177694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10176)));
    // 0x177698: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x177698u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17769c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x17769cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1776a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1776a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1776a4: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x1776A4u;
    {
        const bool branch_taken_0x1776a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1776A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1776A4u;
            // 0x1776a8: 0x3c03bba3  lui         $v1, 0xBBA3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48035 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1776a4) {
            ctx->pc = 0x1776F8u;
            goto label_1776f8;
        }
    }
    ctx->pc = 0x1776ACu;
    // 0x1776ac: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1776acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1776b0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x1776b0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
    // 0x1776b4: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x1776b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x1776b8: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1776b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1776bc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1776bcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1776c0: 0x0  nop
    ctx->pc = 0x1776c0u;
    // NOP
    // 0x1776c4: 0x0  nop
    ctx->pc = 0x1776c4u;
    // NOP
    // 0x1776c8: 0x1010  mfhi        $v0
    ctx->pc = 0x1776c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1776cc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1776CCu;
    {
        const bool branch_taken_0x1776cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1776cc) {
            ctx->pc = 0x1776F0u;
            goto label_1776f0;
        }
    }
    ctx->pc = 0x1776D4u;
    // 0x1776d4: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1776d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1776d8: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x1776d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1776dc: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1776dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1776e0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1776e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1776e4: 0xc05d080  jal         func_174200
    ctx->pc = 0x1776E4u;
    SET_GPR_U32(ctx, 31, 0x1776ECu);
    ctx->pc = 0x1776E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1776E4u;
            // 0x1776e8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1776ECu; }
        if (ctx->pc != 0x1776ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1776ECu; }
        if (ctx->pc != 0x1776ECu) { return; }
    }
    ctx->pc = 0x1776ECu;
    // 0x1776ec: 0x0  nop
    ctx->pc = 0x1776ecu;
    // NOP
label_1776f0:
    // 0x1776f0: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1776F0u;
    {
        const bool branch_taken_0x1776f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1776F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1776F0u;
            // 0x1776f4: 0xae000114  sw          $zero, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1776f0) {
            ctx->pc = 0x177848u;
            goto label_177848;
        }
    }
    ctx->pc = 0x1776F8u;
label_1776f8:
    // 0x1776f8: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x1776f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1776fc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1776FCu;
    {
        const bool branch_taken_0x1776fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1776fc) {
            ctx->pc = 0x177720u;
            goto label_177720;
        }
    }
    ctx->pc = 0x177704u;
    // 0x177704: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x177704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177708: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x177708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x17770c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x17770cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177710: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x177710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x177714: 0xc05d080  jal         func_174200
    ctx->pc = 0x177714u;
    SET_GPR_U32(ctx, 31, 0x17771Cu);
    ctx->pc = 0x177718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177714u;
            // 0x177718: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17771Cu; }
        if (ctx->pc != 0x17771Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17771Cu; }
        if (ctx->pc != 0x17771Cu) { return; }
    }
    ctx->pc = 0x17771Cu;
    // 0x17771c: 0x0  nop
    ctx->pc = 0x17771cu;
    // NOP
label_177720:
    // 0x177720: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x177720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x177724: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x177724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x177728: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x177728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17772c: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x17772cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x177730: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x177730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x177734: 0x8c2227c0  lw          $v0, 0x27C0($at)
    ctx->pc = 0x177734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10176)));
    // 0x177738: 0xc065d00  jal         func_197400
    ctx->pc = 0x177738u;
    SET_GPR_U32(ctx, 31, 0x177740u);
    ctx->pc = 0x17773Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177738u;
            // 0x17773c: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177740u; }
        if (ctx->pc != 0x177740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177740u; }
        if (ctx->pc != 0x177740u) { return; }
    }
    ctx->pc = 0x177740u;
    // 0x177740: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x177740u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x177744: 0x14200016  bnez        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x177744u;
    {
        const bool branch_taken_0x177744 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x177744) {
            ctx->pc = 0x1777A0u;
            goto label_1777a0;
        }
    }
    ctx->pc = 0x17774Cu;
    // 0x17774c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x17774cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x177750: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x177750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x177754: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x177754u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x177758: 0x0  nop
    ctx->pc = 0x177758u;
    // NOP
    // 0x17775c: 0x0  nop
    ctx->pc = 0x17775cu;
    // NOP
    // 0x177760: 0x1010  mfhi        $v0
    ctx->pc = 0x177760u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x177764: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x177764u;
    {
        const bool branch_taken_0x177764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177764) {
            ctx->pc = 0x177848u;
            goto label_177848;
        }
    }
    ctx->pc = 0x17776Cu;
    // 0x17776c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x17776cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x177770: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177774: 0x2464ff80  addiu       $a0, $v1, -0x80
    ctx->pc = 0x177774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x177778: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x177778u;
    SET_GPR_U32(ctx, 31, 0x177780u);
    ctx->pc = 0x17777Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177778u;
            // 0x17777c: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177780u; }
        if (ctx->pc != 0x177780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177780u; }
        if (ctx->pc != 0x177780u) { return; }
    }
    ctx->pc = 0x177780u;
    // 0x177780: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x177780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x177784: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177788: 0x2464ff80  addiu       $a0, $v1, -0x80
    ctx->pc = 0x177788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x17778c: 0xc06560c  jal         func_195830
    ctx->pc = 0x17778Cu;
    SET_GPR_U32(ctx, 31, 0x177794u);
    ctx->pc = 0x177790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17778Cu;
            // 0x177790: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177794u; }
        if (ctx->pc != 0x177794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177794u; }
        if (ctx->pc != 0x177794u) { return; }
    }
    ctx->pc = 0x177794u;
    // 0x177794: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x177794u;
    {
        const bool branch_taken_0x177794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177794) {
            ctx->pc = 0x177848u;
            goto label_177848;
        }
    }
    ctx->pc = 0x17779Cu;
    // 0x17779c: 0x0  nop
    ctx->pc = 0x17779cu;
    // NOP
label_1777a0:
    // 0x1777a0: 0xc065d00  jal         func_197400
    ctx->pc = 0x1777A0u;
    SET_GPR_U32(ctx, 31, 0x1777A8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1777A8u; }
        if (ctx->pc != 0x1777A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1777A8u; }
        if (ctx->pc != 0x1777A8u) { return; }
    }
    ctx->pc = 0x1777A8u;
    // 0x1777a8: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1777A8u;
    {
        const bool branch_taken_0x1777a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1777a8) {
            ctx->pc = 0x177800u;
            goto label_177800;
        }
    }
    ctx->pc = 0x1777B0u;
    // 0x1777b0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1777b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1777b4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1777b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1777b8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1777b8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1777bc: 0x0  nop
    ctx->pc = 0x1777bcu;
    // NOP
    // 0x1777c0: 0x0  nop
    ctx->pc = 0x1777c0u;
    // NOP
    // 0x1777c4: 0x1010  mfhi        $v0
    ctx->pc = 0x1777c4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1777c8: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1777C8u;
    {
        const bool branch_taken_0x1777c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1777c8) {
            ctx->pc = 0x177848u;
            goto label_177848;
        }
    }
    ctx->pc = 0x1777D0u;
    // 0x1777d0: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1777d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1777d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1777d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1777d8: 0x2464ff80  addiu       $a0, $v1, -0x80
    ctx->pc = 0x1777d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x1777dc: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1777DCu;
    SET_GPR_U32(ctx, 31, 0x1777E4u);
    ctx->pc = 0x1777E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1777DCu;
            // 0x1777e0: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1777E4u; }
        if (ctx->pc != 0x1777E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1777E4u; }
        if (ctx->pc != 0x1777E4u) { return; }
    }
    ctx->pc = 0x1777E4u;
    // 0x1777e4: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1777e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1777e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1777e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1777ec: 0x2464ff80  addiu       $a0, $v1, -0x80
    ctx->pc = 0x1777ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x1777f0: 0xc06560c  jal         func_195830
    ctx->pc = 0x1777F0u;
    SET_GPR_U32(ctx, 31, 0x1777F8u);
    ctx->pc = 0x1777F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1777F0u;
            // 0x1777f4: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1777F8u; }
        if (ctx->pc != 0x1777F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1777F8u; }
        if (ctx->pc != 0x1777F8u) { return; }
    }
    ctx->pc = 0x1777F8u;
    // 0x1777f8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1777F8u;
    {
        const bool branch_taken_0x1777f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1777f8) {
            ctx->pc = 0x177848u;
            goto label_177848;
        }
    }
    ctx->pc = 0x177800u;
label_177800:
    // 0x177800: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x177800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x177804: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x177804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x177808: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x177808u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x17780c: 0x0  nop
    ctx->pc = 0x17780cu;
    // NOP
    // 0x177810: 0x0  nop
    ctx->pc = 0x177810u;
    // NOP
    // 0x177814: 0x1010  mfhi        $v0
    ctx->pc = 0x177814u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x177818: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x177818u;
    {
        const bool branch_taken_0x177818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177818) {
            ctx->pc = 0x177848u;
            goto label_177848;
        }
    }
    ctx->pc = 0x177820u;
    // 0x177820: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x177820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x177824: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177828: 0x2464ff80  addiu       $a0, $v1, -0x80
    ctx->pc = 0x177828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x17782c: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x17782Cu;
    SET_GPR_U32(ctx, 31, 0x177834u);
    ctx->pc = 0x177830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17782Cu;
            // 0x177830: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177834u; }
        if (ctx->pc != 0x177834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177834u; }
        if (ctx->pc != 0x177834u) { return; }
    }
    ctx->pc = 0x177834u;
    // 0x177834: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x177834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x177838: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17783c: 0x2464ff80  addiu       $a0, $v1, -0x80
    ctx->pc = 0x17783cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x177840: 0xc06560c  jal         func_195830
    ctx->pc = 0x177840u;
    SET_GPR_U32(ctx, 31, 0x177848u);
    ctx->pc = 0x177844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177840u;
            // 0x177844: 0x2445ffb0  addiu       $a1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177848u; }
        if (ctx->pc != 0x177848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177848u; }
        if (ctx->pc != 0x177848u) { return; }
    }
    ctx->pc = 0x177848u;
label_177848:
    // 0x177848: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x177848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17784c: 0x8c2227c0  lw          $v0, 0x27C0($at)
    ctx->pc = 0x17784cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10176)));
    // 0x177850: 0xc60100e8  lwc1        $f1, 0xE8($s0)
    ctx->pc = 0x177850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177854: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x177854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177858: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x177858u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17785c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x17785Cu;
    {
        const bool branch_taken_0x17785c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17785Cu;
            // 0x177860: 0xe4400018  swc1        $f0, 0x18($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17785c) {
            ctx->pc = 0x177940u;
            goto label_177940;
        }
    }
    ctx->pc = 0x177864u;
    // 0x177864: 0x0  nop
    ctx->pc = 0x177864u;
    // NOP
label_177868:
    // 0x177868: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x177868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17786c: 0x18400034  blez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x17786Cu;
    {
        const bool branch_taken_0x17786c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x177870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17786Cu;
            // 0x177870: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17786c) {
            ctx->pc = 0x177940u;
            goto label_177940;
        }
    }
    ctx->pc = 0x177874u;
    // 0x177874: 0x3c023ebc  lui         $v0, 0x3EBC
    ctx->pc = 0x177874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16060 << 16));
    // 0x177878: 0x8c2327c0  lw          $v1, 0x27C0($at)
    ctx->pc = 0x177878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10176)));
    // 0x17787c: 0x34426a7f  ori         $v0, $v0, 0x6A7F
    ctx->pc = 0x17787cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)27263u)));
    // 0x177880: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x177880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177884: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x177884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177888: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x177888u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17788c: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x17788Cu;
    {
        const bool branch_taken_0x17788c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x177890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17788Cu;
            // 0x177890: 0x3c033ba3  lui         $v1, 0x3BA3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17788c) {
            ctx->pc = 0x1778E0u;
            goto label_1778e0;
        }
    }
    ctx->pc = 0x177894u;
    // 0x177894: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x177894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x177898: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x177898u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
    // 0x17789c: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x17789cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x1778a0: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1778a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1778a4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1778a4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1778a8: 0x0  nop
    ctx->pc = 0x1778a8u;
    // NOP
    // 0x1778ac: 0x0  nop
    ctx->pc = 0x1778acu;
    // NOP
    // 0x1778b0: 0x1010  mfhi        $v0
    ctx->pc = 0x1778b0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1778b4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1778B4u;
    {
        const bool branch_taken_0x1778b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1778b4) {
            ctx->pc = 0x1778D8u;
            goto label_1778d8;
        }
    }
    ctx->pc = 0x1778BCu;
    // 0x1778bc: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1778bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1778c0: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x1778c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1778c4: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1778c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1778c8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1778c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1778cc: 0xc05d080  jal         func_174200
    ctx->pc = 0x1778CCu;
    SET_GPR_U32(ctx, 31, 0x1778D4u);
    ctx->pc = 0x1778D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1778CCu;
            // 0x1778d0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1778D4u; }
        if (ctx->pc != 0x1778D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1778D4u; }
        if (ctx->pc != 0x1778D4u) { return; }
    }
    ctx->pc = 0x1778D4u;
    // 0x1778d4: 0x0  nop
    ctx->pc = 0x1778d4u;
    // NOP
label_1778d8:
    // 0x1778d8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1778D8u;
    {
        const bool branch_taken_0x1778d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1778DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1778D8u;
            // 0x1778dc: 0xae000114  sw          $zero, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1778d8) {
            ctx->pc = 0x177928u;
            goto label_177928;
        }
    }
    ctx->pc = 0x1778E0u;
label_1778e0:
    // 0x1778e0: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1778e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1778e4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1778e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1778e8: 0x8c2227c0  lw          $v0, 0x27C0($at)
    ctx->pc = 0x1778e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10176)));
    // 0x1778ec: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1778ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1778f0: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x1778f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1778f4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1778F4u;
    {
        const bool branch_taken_0x1778f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1778f4) {
            ctx->pc = 0x177918u;
            goto label_177918;
        }
    }
    ctx->pc = 0x1778FCu;
    // 0x1778fc: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1778fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177900: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x177900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x177904: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x177904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177908: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x177908u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x17790c: 0xc05d080  jal         func_174200
    ctx->pc = 0x17790Cu;
    SET_GPR_U32(ctx, 31, 0x177914u);
    ctx->pc = 0x177910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17790Cu;
            // 0x177910: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177914u; }
        if (ctx->pc != 0x177914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177914u; }
        if (ctx->pc != 0x177914u) { return; }
    }
    ctx->pc = 0x177914u;
    // 0x177914: 0x0  nop
    ctx->pc = 0x177914u;
    // NOP
label_177918:
    // 0x177918: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x177918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x17791c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17791cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x177920: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x177920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x177924: 0x0  nop
    ctx->pc = 0x177924u;
    // NOP
label_177928:
    // 0x177928: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x177928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17792c: 0x8c2227c0  lw          $v0, 0x27C0($at)
    ctx->pc = 0x17792cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10176)));
    // 0x177930: 0xc60100e8  lwc1        $f1, 0xE8($s0)
    ctx->pc = 0x177930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177934: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x177934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177938: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x177938u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17793c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x17793cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_177940:
    // 0x177940: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x177940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x177944: 0x8c2327c0  lw          $v1, 0x27C0($at)
    ctx->pc = 0x177944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10176)));
    // 0x177948: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x177948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x17794c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x17794cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x177950: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x177950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177954: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x177954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177958: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x177958u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17795c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x17795Cu;
    {
        const bool branch_taken_0x17795c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x177960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17795Cu;
            // 0x177960: 0x24640014  addiu       $a0, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17795c) {
            ctx->pc = 0x177980u;
            goto label_177980;
        }
    }
    ctx->pc = 0x177964u;
    // 0x177964: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x177964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x177968: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x177968u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x17796c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17796cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177970: 0x0  nop
    ctx->pc = 0x177970u;
    // NOP
    // 0x177974: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x177974u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x177978: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x177978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x17797c: 0x0  nop
    ctx->pc = 0x17797cu;
    // NOP
label_177980:
    // 0x177980: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x177980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x177984: 0x8c2327c0  lw          $v1, 0x27C0($at)
    ctx->pc = 0x177984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10176)));
    // 0x177988: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x177988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x17798c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x17798cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x177990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x177990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177994: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x177994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177998: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x177998u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17799c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x17799Cu;
    {
        const bool branch_taken_0x17799c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1779A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17799Cu;
            // 0x1779a0: 0x24640014  addiu       $a0, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17799c) {
            ctx->pc = 0x1779C0u;
            goto label_1779c0;
        }
    }
    ctx->pc = 0x1779A4u;
    // 0x1779a4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1779a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1779a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1779a8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1779ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1779acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1779b0: 0x0  nop
    ctx->pc = 0x1779b0u;
    // NOP
    // 0x1779b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1779b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1779b8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1779b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1779bc: 0x0  nop
    ctx->pc = 0x1779bcu;
    // NOP
label_1779c0:
    // 0x1779c0: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x1779C0u;
    SET_GPR_U32(ctx, 31, 0x1779C8u);
    ctx->pc = 0x1779C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1779C0u;
            // 0x1779c4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1779C8u; }
        if (ctx->pc != 0x1779C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1779C8u; }
        if (ctx->pc != 0x1779C8u) { return; }
    }
    ctx->pc = 0x1779C8u;
    // 0x1779c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1779c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1779cc: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1779ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1779d0: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x1779D0u;
    SET_GPR_U32(ctx, 31, 0x1779D8u);
    ctx->pc = 0x1779D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1779D0u;
            // 0x1779d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1779D8u; }
        if (ctx->pc != 0x1779D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1779D8u; }
        if (ctx->pc != 0x1779D8u) { return; }
    }
    ctx->pc = 0x1779D8u;
    // 0x1779d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1779d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1779dc: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1779dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1779e0: 0xc04b804  jal         func_12E010
    ctx->pc = 0x1779E0u;
    SET_GPR_U32(ctx, 31, 0x1779E8u);
    ctx->pc = 0x1779E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1779E0u;
            // 0x1779e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1779E8u; }
        if (ctx->pc != 0x1779E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1779E8u; }
        if (ctx->pc != 0x1779E8u) { return; }
    }
    ctx->pc = 0x1779E8u;
    // 0x1779e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1779e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1779ec: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1779ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1779f0: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x1779F0u;
    SET_GPR_U32(ctx, 31, 0x1779F8u);
    ctx->pc = 0x1779F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1779F0u;
            // 0x1779f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1779F8u; }
        if (ctx->pc != 0x1779F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1779F8u; }
        if (ctx->pc != 0x1779F8u) { return; }
    }
    ctx->pc = 0x1779F8u;
    // 0x1779f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1779f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1779fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1779fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177a00: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x177A00u;
    SET_GPR_U32(ctx, 31, 0x177A08u);
    ctx->pc = 0x177A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177A00u;
            // 0x177a04: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A08u; }
        if (ctx->pc != 0x177A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A08u; }
        if (ctx->pc != 0x177A08u) { return; }
    }
    ctx->pc = 0x177A08u;
    // 0x177a08: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x177a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x177a0c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x177a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x177a10: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x177a10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x177a14: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x177A14u;
    {
        const bool branch_taken_0x177a14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x177a14) {
            ctx->pc = 0x177A68u;
            goto label_177a68;
        }
    }
    ctx->pc = 0x177A1Cu;
    // 0x177a1c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x177a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x177a20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177A20u;
    {
        const bool branch_taken_0x177a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x177a20) {
            ctx->pc = 0x177A38u;
            goto label_177a38;
        }
    }
    ctx->pc = 0x177A28u;
    // 0x177a28: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x177A28u;
    SET_GPR_U32(ctx, 31, 0x177A30u);
    ctx->pc = 0x177A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177A28u;
            // 0x177a2c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A30u; }
        if (ctx->pc != 0x177A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A30u; }
        if (ctx->pc != 0x177A30u) { return; }
    }
    ctx->pc = 0x177A30u;
    // 0x177a30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x177A30u;
    {
        const bool branch_taken_0x177a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177a30) {
            ctx->pc = 0x177A40u;
            goto label_177a40;
        }
    }
    ctx->pc = 0x177A38u;
label_177a38:
    // 0x177a38: 0xc0604dc  jal         func_181370
    ctx->pc = 0x177A38u;
    SET_GPR_U32(ctx, 31, 0x177A40u);
    ctx->pc = 0x177A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177A38u;
            // 0x177a3c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A40u; }
        if (ctx->pc != 0x177A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A40u; }
        if (ctx->pc != 0x177A40u) { return; }
    }
    ctx->pc = 0x177A40u;
label_177a40:
    // 0x177a40: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x177a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x177a44: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x177A44u;
    {
        const bool branch_taken_0x177a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x177a44) {
            ctx->pc = 0x177A58u;
            goto label_177a58;
        }
    }
    ctx->pc = 0x177A4Cu;
    // 0x177a4c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x177A4Cu;
    {
        const bool branch_taken_0x177a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177A4Cu;
            // 0x177a50: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177a4c) {
            ctx->pc = 0x177A78u;
            goto label_177a78;
        }
    }
    ctx->pc = 0x177A54u;
    // 0x177a54: 0x0  nop
    ctx->pc = 0x177a54u;
    // NOP
label_177a58:
    // 0x177a58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x177a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177a5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x177A5Cu;
    {
        const bool branch_taken_0x177a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177A5Cu;
            // 0x177a60: 0xae03010c  sw          $v1, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177a5c) {
            ctx->pc = 0x177A78u;
            goto label_177a78;
        }
    }
    ctx->pc = 0x177A64u;
    // 0x177a64: 0x0  nop
    ctx->pc = 0x177a64u;
    // NOP
label_177a68:
    // 0x177a68: 0xc0604dc  jal         func_181370
    ctx->pc = 0x177A68u;
    SET_GPR_U32(ctx, 31, 0x177A70u);
    ctx->pc = 0x177A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177A68u;
            // 0x177a6c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A70u; }
        if (ctx->pc != 0x177A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177A70u; }
        if (ctx->pc != 0x177A70u) { return; }
    }
    ctx->pc = 0x177A70u;
    // 0x177a70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x177a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177a74: 0xae03010c  sw          $v1, 0x10C($s0)
    ctx->pc = 0x177a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
label_177a78:
    // 0x177a78: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x177a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x177a7c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x177a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x177a80: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x177a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x177a84: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x177A84u;
    {
        const bool branch_taken_0x177a84 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x177a84) {
            ctx->pc = 0x177AF0u;
            goto label_177af0;
        }
    }
    ctx->pc = 0x177A8Cu;
    // 0x177a8c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x177a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x177a90: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x177a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x177a94: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x177a94u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x177a98: 0x0  nop
    ctx->pc = 0x177a98u;
    // NOP
    // 0x177a9c: 0x0  nop
    ctx->pc = 0x177a9cu;
    // NOP
    // 0x177aa0: 0x1010  mfhi        $v0
    ctx->pc = 0x177aa0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x177aa4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x177AA4u;
    {
        const bool branch_taken_0x177aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177aa4) {
            ctx->pc = 0x177AD0u;
            goto label_177ad0;
        }
    }
    ctx->pc = 0x177AACu;
    // 0x177aac: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x177aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x177ab0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x177ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x177ab4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x177ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x177ab8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x177ab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x177abc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x177abcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x177ac0: 0x2484ff7a  addiu       $a0, $a0, -0x86
    ctx->pc = 0x177ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967162));
    // 0x177ac4: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x177AC4u;
    SET_GPR_U32(ctx, 31, 0x177ACCu);
    ctx->pc = 0x177AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177AC4u;
            // 0x177ac8: 0x2465ffb0  addiu       $a1, $v1, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177ACCu; }
        if (ctx->pc != 0x177ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177ACCu; }
        if (ctx->pc != 0x177ACCu) { return; }
    }
    ctx->pc = 0x177ACCu;
    // 0x177acc: 0x0  nop
    ctx->pc = 0x177accu;
    // NOP
label_177ad0:
    // 0x177ad0: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x177ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x177ad4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x177ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x177ad8: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x177ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x177adc: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x177adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x177ae0: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x177AE0u;
    SET_GPR_U32(ctx, 31, 0x177AE8u);
    ctx->pc = 0x177AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177AE0u;
            // 0x177ae4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177AE8u; }
        if (ctx->pc != 0x177AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177AE8u; }
        if (ctx->pc != 0x177AE8u) { return; }
    }
    ctx->pc = 0x177AE8u;
    // 0x177ae8: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x177AE8u;
    {
        const bool branch_taken_0x177ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177ae8) {
            ctx->pc = 0x177C90u;
            goto label_177c90;
        }
    }
    ctx->pc = 0x177AF0u;
label_177af0:
    // 0x177af0: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x177af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x177af4: 0x2463ffa8  addiu       $v1, $v1, -0x58
    ctx->pc = 0x177af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967208));
    // 0x177af8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x177af8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177afc: 0x0  nop
    ctx->pc = 0x177afcu;
    // NOP
    // 0x177b00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x177b00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x177b04: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x177b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x177b08: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x177b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177b0c: 0x2463ffd8  addiu       $v1, $v1, -0x28
    ctx->pc = 0x177b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
    // 0x177b10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x177b10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177b14: 0x0  nop
    ctx->pc = 0x177b14u;
    // NOP
    // 0x177b18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x177b18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x177b1c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x177b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x177b20: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x177b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x177b24: 0x2463ffba  addiu       $v1, $v1, -0x46
    ctx->pc = 0x177b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967226));
    // 0x177b28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x177b28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177b2c: 0x0  nop
    ctx->pc = 0x177b2cu;
    // NOP
    // 0x177b30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x177b30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x177b34: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x177b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x177b38: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x177b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177b3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x177b3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x177b40: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x177b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x177b44: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x177b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x177b48: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x177B48u;
    {
        const bool branch_taken_0x177b48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x177B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177B48u;
            // 0x177b4c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177b48) {
            ctx->pc = 0x177B70u;
            goto label_177b70;
        }
    }
    ctx->pc = 0x177B50u;
    // 0x177b50: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x177B50u;
    {
        const bool branch_taken_0x177b50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x177B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177B50u;
            // 0x177b54: 0x3c060017  lui         $a2, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177b50) {
            ctx->pc = 0x177B70u;
            goto label_177b70;
        }
    }
    ctx->pc = 0x177B58u;
    // 0x177b58: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x177b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x177b5c: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x177b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x177b60: 0x24c65030  addiu       $a2, $a2, 0x5030
    ctx->pc = 0x177b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20528));
    // 0x177b64: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x177b64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177b68: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x177B68u;
    SET_GPR_U32(ctx, 31, 0x177B70u);
    ctx->pc = 0x177B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177B68u;
            // 0x177b6c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177B70u; }
        if (ctx->pc != 0x177B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177B70u; }
        if (ctx->pc != 0x177B70u) { return; }
    }
    ctx->pc = 0x177B70u;
label_177b70:
    // 0x177b70: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x177b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x177b74: 0x2463ff94  addiu       $v1, $v1, -0x6C
    ctx->pc = 0x177b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967188));
    // 0x177b78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x177b78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177b7c: 0x0  nop
    ctx->pc = 0x177b7cu;
    // NOP
    // 0x177b80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x177b80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x177b84: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x177b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x177b88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x177b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177b8c: 0x2463ff88  addiu       $v1, $v1, -0x78
    ctx->pc = 0x177b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967176));
    // 0x177b90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x177b90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177b94: 0x0  nop
    ctx->pc = 0x177b94u;
    // NOP
    // 0x177b98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x177b98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x177b9c: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x177b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x177ba0: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x177ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x177ba4: 0x2463ffa8  addiu       $v1, $v1, -0x58
    ctx->pc = 0x177ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967208));
    // 0x177ba8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x177ba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177bac: 0x0  nop
    ctx->pc = 0x177bacu;
    // NOP
    // 0x177bb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x177bb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x177bb4: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x177bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x177bb8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x177bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177bbc: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x177bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x177bc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x177bc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177bc4: 0x0  nop
    ctx->pc = 0x177bc4u;
    // NOP
    // 0x177bc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x177bc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x177bcc: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x177bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x177bd0: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x177bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x177bd4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x177BD4u;
    {
        const bool branch_taken_0x177bd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x177BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177BD4u;
            // 0x177bd8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177bd4) {
            ctx->pc = 0x177C00u;
            goto label_177c00;
        }
    }
    ctx->pc = 0x177BDCu;
    // 0x177bdc: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x177BDCu;
    {
        const bool branch_taken_0x177bdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x177BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177BDCu;
            // 0x177be0: 0x3c060017  lui         $a2, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177bdc) {
            ctx->pc = 0x177C00u;
            goto label_177c00;
        }
    }
    ctx->pc = 0x177BE4u;
    // 0x177be4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x177be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x177be8: 0x2605003c  addiu       $a1, $s0, 0x3C
    ctx->pc = 0x177be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x177bec: 0x24c65030  addiu       $a2, $a2, 0x5030
    ctx->pc = 0x177becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20528));
    // 0x177bf0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x177bf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177bf4: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x177BF4u;
    SET_GPR_U32(ctx, 31, 0x177BFCu);
    ctx->pc = 0x177BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177BF4u;
            // 0x177bf8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177BFCu; }
        if (ctx->pc != 0x177BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177BFCu; }
        if (ctx->pc != 0x177BFCu) { return; }
    }
    ctx->pc = 0x177BFCu;
    // 0x177bfc: 0x0  nop
    ctx->pc = 0x177bfcu;
    // NOP
label_177c00:
    // 0x177c00: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x177c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x177c04: 0x2463ff6c  addiu       $v1, $v1, -0x94
    ctx->pc = 0x177c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967148));
    // 0x177c08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x177c08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177c0c: 0x0  nop
    ctx->pc = 0x177c0cu;
    // NOP
    // 0x177c10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x177c10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x177c14: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x177c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x177c18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x177c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177c1c: 0x2463ff88  addiu       $v1, $v1, -0x78
    ctx->pc = 0x177c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967176));
    // 0x177c20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x177c20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177c24: 0x0  nop
    ctx->pc = 0x177c24u;
    // NOP
    // 0x177c28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x177c28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x177c2c: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x177c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x177c30: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x177c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x177c34: 0x2463ff94  addiu       $v1, $v1, -0x6C
    ctx->pc = 0x177c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967188));
    // 0x177c38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x177c38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177c3c: 0x0  nop
    ctx->pc = 0x177c3cu;
    // NOP
    // 0x177c40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x177c40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x177c44: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x177c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x177c48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x177c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177c4c: 0x2463ffb0  addiu       $v1, $v1, -0x50
    ctx->pc = 0x177c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967216));
    // 0x177c50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x177c50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177c54: 0x0  nop
    ctx->pc = 0x177c54u;
    // NOP
    // 0x177c58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x177c58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x177c5c: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x177c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x177c60: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x177c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x177c64: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x177C64u;
    {
        const bool branch_taken_0x177c64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x177C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177C64u;
            // 0x177c68: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c64) {
            ctx->pc = 0x177C90u;
            goto label_177c90;
        }
    }
    ctx->pc = 0x177C6Cu;
    // 0x177c6c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x177C6Cu;
    {
        const bool branch_taken_0x177c6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x177C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177C6Cu;
            // 0x177c70: 0x3c060017  lui         $a2, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c6c) {
            ctx->pc = 0x177C90u;
            goto label_177c90;
        }
    }
    ctx->pc = 0x177C74u;
    // 0x177c74: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x177c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x177c78: 0x2605004c  addiu       $a1, $s0, 0x4C
    ctx->pc = 0x177c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x177c7c: 0x24c65030  addiu       $a2, $a2, 0x5030
    ctx->pc = 0x177c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20528));
    // 0x177c80: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x177c80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177c84: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x177C84u;
    SET_GPR_U32(ctx, 31, 0x177C8Cu);
    ctx->pc = 0x177C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177C84u;
            // 0x177c88: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177C8Cu; }
        if (ctx->pc != 0x177C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177C8Cu; }
        if (ctx->pc != 0x177C8Cu) { return; }
    }
    ctx->pc = 0x177C8Cu;
    // 0x177c8c: 0x0  nop
    ctx->pc = 0x177c8cu;
    // NOP
label_177c90:
    // 0x177c90: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x177c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x177c94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x177c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x177c98: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x177c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x177c9c: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x177c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x177ca0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x177ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x177ca4: 0xae030110  sw          $v1, 0x110($s0)
    ctx->pc = 0x177ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
    // 0x177ca8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x177ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177cac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x177CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177CB0u;
            // 0x177cb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1775A0u: goto label_1775a0;
            case 0x1775B8u: goto label_1775b8;
            case 0x177618u: goto label_177618;
            case 0x177620u: goto label_177620;
            case 0x177658u: goto label_177658;
            case 0x177668u: goto label_177668;
            case 0x177688u: goto label_177688;
            case 0x1776F0u: goto label_1776f0;
            case 0x1776F8u: goto label_1776f8;
            case 0x177720u: goto label_177720;
            case 0x1777A0u: goto label_1777a0;
            case 0x177800u: goto label_177800;
            case 0x177848u: goto label_177848;
            case 0x177868u: goto label_177868;
            case 0x1778D8u: goto label_1778d8;
            case 0x1778E0u: goto label_1778e0;
            case 0x177918u: goto label_177918;
            case 0x177928u: goto label_177928;
            case 0x177940u: goto label_177940;
            case 0x177980u: goto label_177980;
            case 0x1779C0u: goto label_1779c0;
            case 0x177A38u: goto label_177a38;
            case 0x177A40u: goto label_177a40;
            case 0x177A58u: goto label_177a58;
            case 0x177A68u: goto label_177a68;
            case 0x177A78u: goto label_177a78;
            case 0x177AD0u: goto label_177ad0;
            case 0x177AF0u: goto label_177af0;
            case 0x177B70u: goto label_177b70;
            case 0x177C00u: goto label_177c00;
            case 0x177C90u: goto label_177c90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x177CB8u;
}
