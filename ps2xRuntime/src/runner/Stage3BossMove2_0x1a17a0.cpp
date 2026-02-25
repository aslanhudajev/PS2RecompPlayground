#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage3BossMove2
// Address: 0x1a17a0 - 0x1a1b90
void Stage3BossMove2_0x1a17a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage3BossMove2_0x1a17a0");
#endif

    ctx->pc = 0x1a17a0u;

    // 0x1a17a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a17a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a17a4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1a17a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1a17a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a17a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a17ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a17acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a17b0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a17b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a17b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a17b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a17b8: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x1a17b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x1a17bc: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x1A17BCu;
    SET_GPR_U32(ctx, 31, 0x1A17C4u);
    ctx->pc = 0x1A17C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A17BCu;
            // 0x1a17c0: 0xdc25a940  ld          $a1, -0x56C0($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294945088)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A17C4u; }
        if (ctx->pc != 0x1A17C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A17C4u; }
        if (ctx->pc != 0x1A17C4u) { return; }
    }
    ctx->pc = 0x1A17C4u;
    // 0x1a17c4: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a17c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a17c8: 0xac221ac0  sw          $v0, 0x1AC0($at)
    ctx->pc = 0x1a17c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6848), GPR_U32(ctx, 2));
    // 0x1a17cc: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a17ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a17d0: 0x8c241ac0  lw          $a0, 0x1AC0($at)
    ctx->pc = 0x1a17d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6848)));
    // 0x1a17d4: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1A17D4u;
    SET_GPR_U32(ctx, 31, 0x1A17DCu);
    ctx->pc = 0x1A17D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A17D4u;
            // 0x1a17d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A17DCu; }
        if (ctx->pc != 0x1A17DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A17DCu; }
        if (ctx->pc != 0x1A17DCu) { return; }
    }
    ctx->pc = 0x1A17DCu;
    // 0x1a17dc: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a17dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a17e0: 0xac221ac8  sw          $v0, 0x1AC8($at)
    ctx->pc = 0x1a17e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6856), GPR_U32(ctx, 2));
    // 0x1a17e4: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1a17e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a17e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a17e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a17ec: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A17ECu;
    {
        const bool branch_taken_0x1a17ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a17ec) {
            ctx->pc = 0x1A1828u;
            goto label_1a1828;
        }
    }
    ctx->pc = 0x1A17F4u;
    // 0x1a17f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a17f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a17f8: 0x10620069  beq         $v1, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x1A17F8u;
    {
        const bool branch_taken_0x1a17f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a17f8) {
            ctx->pc = 0x1A19A0u;
            goto label_1a19a0;
        }
    }
    ctx->pc = 0x1A1800u;
    // 0x1a1800: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1800u;
    {
        const bool branch_taken_0x1a1800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1800) {
            ctx->pc = 0x1A1810u;
            goto label_1a1810;
        }
    }
    ctx->pc = 0x1A1808u;
    // 0x1a1808: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1A1808u;
    {
        const bool branch_taken_0x1a1808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1808) {
            ctx->pc = 0x1A19A0u;
            goto label_1a19a0;
        }
    }
    ctx->pc = 0x1A1810u;
label_1a1810:
    // 0x1a1810: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1a1810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a1814: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x1A1814u;
    {
        const bool branch_taken_0x1a1814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1814u;
            // 0x1a1818: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1814) {
            ctx->pc = 0x1A19A0u;
            goto label_1a19a0;
        }
    }
    ctx->pc = 0x1A181Cu;
    // 0x1a181c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1A181Cu;
    {
        const bool branch_taken_0x1a181c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A181Cu;
            // 0x1a1820: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a181c) {
            ctx->pc = 0x1A19A0u;
            goto label_1a19a0;
        }
    }
    ctx->pc = 0x1A1824u;
    // 0x1a1824: 0x0  nop
    ctx->pc = 0x1a1824u;
    // NOP
label_1a1828:
    // 0x1a1828: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a1828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a182c: 0x1840005c  blez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1A182Cu;
    {
        const bool branch_taken_0x1a182c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a182c) {
            ctx->pc = 0x1A19A0u;
            goto label_1a19a0;
        }
    }
    ctx->pc = 0x1A1834u;
    // 0x1a1834: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1a1834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1a1838: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1a1838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1a183c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a183cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a1840: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a1840u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a1844: 0x0  nop
    ctx->pc = 0x1a1844u;
    // NOP
    // 0x1a1848: 0x0  nop
    ctx->pc = 0x1a1848u;
    // NOP
    // 0x1a184c: 0x1010  mfhi        $v0
    ctx->pc = 0x1a184cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a1850: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x1A1850u;
    {
        const bool branch_taken_0x1a1850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1850) {
            ctx->pc = 0x1A19A0u;
            goto label_1a19a0;
        }
    }
    ctx->pc = 0x1A1858u;
    // 0x1a1858: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a1858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a185c: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1a185cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1a1860: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1a1860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a1864: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1a1864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a1868: 0xc068fec  jal         func_1A3FB0
    ctx->pc = 0x1A1868u;
    SET_GPR_U32(ctx, 31, 0x1A1870u);
    ctx->pc = 0x1A186Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1868u;
            // 0x1a186c: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3FB0u;
    if (runtime->hasFunction(0x1A3FB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A3FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1870u; }
        if (ctx->pc != 0x1A1870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D2_0x1a3fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1870u; }
        if (ctx->pc != 0x1A1870u) { return; }
    }
    ctx->pc = 0x1A1870u;
    // 0x1a1870: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1a1870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a1874: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1a1874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a1878: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a187c: 0x24630073  addiu       $v1, $v1, 0x73
    ctx->pc = 0x1a187cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 115));
    // 0x1a1880: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x1a1880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x1a1884: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a1884u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a1888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a1888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a188c: 0x0  nop
    ctx->pc = 0x1a188cu;
    // NOP
    // 0x1a1890: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1a1890u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1a1894: 0xc05d080  jal         func_174200
    ctx->pc = 0x1A1894u;
    SET_GPR_U32(ctx, 31, 0x1A189Cu);
    ctx->pc = 0x1A1898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1894u;
            // 0x1a1898: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A189Cu; }
        if (ctx->pc != 0x1A189Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A189Cu; }
        if (ctx->pc != 0x1A189Cu) { return; }
    }
    ctx->pc = 0x1A189Cu;
    // 0x1a189c: 0xc065d00  jal         func_197400
    ctx->pc = 0x1A189Cu;
    SET_GPR_U32(ctx, 31, 0x1A18A4u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A18A4u; }
        if (ctx->pc != 0x1A18A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A18A4u; }
        if (ctx->pc != 0x1A18A4u) { return; }
    }
    ctx->pc = 0x1A18A4u;
    // 0x1a18a4: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1a18a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a18a8: 0x1420001f  bnez        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A18A8u;
    {
        const bool branch_taken_0x1a18a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a18a8) {
            ctx->pc = 0x1A1928u;
            goto label_1a1928;
        }
    }
    ctx->pc = 0x1A18B0u;
    // 0x1a18b0: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1a18b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a18b4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1a18b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1a18b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a18b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a18bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a18bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a18c0: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1a18c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x1a18c4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1a18c4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1a18c8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a18c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a18cc: 0x24840073  addiu       $a0, $a0, 0x73
    ctx->pc = 0x1a18ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 115));
    // 0x1a18d0: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1A18D0u;
    SET_GPR_U32(ctx, 31, 0x1A18D8u);
    ctx->pc = 0x1A18D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A18D0u;
            // 0x1a18d4: 0x2465fff6  addiu       $a1, $v1, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A18D8u; }
        if (ctx->pc != 0x1A18D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A18D8u; }
        if (ctx->pc != 0x1A18D8u) { return; }
    }
    ctx->pc = 0x1A18D8u;
    // 0x1a18d8: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1a18d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a18dc: 0x3c024013  lui         $v0, 0x4013
    ctx->pc = 0x1a18dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16403 << 16));
    // 0x1a18e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a18e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a18e4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1a18e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1a18e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a18e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a18ec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a18ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a18f0: 0x24840073  addiu       $a0, $a0, 0x73
    ctx->pc = 0x1a18f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 115));
    // 0x1a18f4: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1A18F4u;
    SET_GPR_U32(ctx, 31, 0x1A18FCu);
    ctx->pc = 0x1A18F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A18F4u;
            // 0x1a18f8: 0x2465fff6  addiu       $a1, $v1, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A18FCu; }
        if (ctx->pc != 0x1A18FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A18FCu; }
        if (ctx->pc != 0x1A18FCu) { return; }
    }
    ctx->pc = 0x1A18FCu;
    // 0x1a18fc: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1a18fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a1900: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a1900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a1904: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a1904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1908: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a1908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a190c: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1a190cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x1a1910: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1a1910u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1a1914: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a1914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a1918: 0x24840073  addiu       $a0, $a0, 0x73
    ctx->pc = 0x1a1918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 115));
    // 0x1a191c: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1A191Cu;
    SET_GPR_U32(ctx, 31, 0x1A1924u);
    ctx->pc = 0x1A1920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A191Cu;
            // 0x1a1920: 0x2465fff6  addiu       $a1, $v1, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1924u; }
        if (ctx->pc != 0x1A1924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1924u; }
        if (ctx->pc != 0x1A1924u) { return; }
    }
    ctx->pc = 0x1A1924u;
    // 0x1a1924: 0x0  nop
    ctx->pc = 0x1a1924u;
    // NOP
label_1a1928:
    // 0x1a1928: 0xc065d00  jal         func_197400
    ctx->pc = 0x1A1928u;
    SET_GPR_U32(ctx, 31, 0x1A1930u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1930u; }
        if (ctx->pc != 0x1A1930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1930u; }
        if (ctx->pc != 0x1A1930u) { return; }
    }
    ctx->pc = 0x1A1930u;
    // 0x1a1930: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A1930u;
    {
        const bool branch_taken_0x1a1930 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a1930) {
            ctx->pc = 0x1A1978u;
            goto label_1a1978;
        }
    }
    ctx->pc = 0x1A1938u;
    // 0x1a1938: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a1938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1a193c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1a193cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a1940: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a1940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a1944: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1a1944u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a1948: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a194c: 0x24640066  addiu       $a0, $v1, 0x66
    ctx->pc = 0x1a194cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 102));
    // 0x1a1950: 0xc065254  jal         func_194950
    ctx->pc = 0x1A1950u;
    SET_GPR_U32(ctx, 31, 0x1A1958u);
    ctx->pc = 0x1A1954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1950u;
            // 0x1a1954: 0x2445000f  addiu       $a1, $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1958u; }
        if (ctx->pc != 0x1A1958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1958u; }
        if (ctx->pc != 0x1A1958u) { return; }
    }
    ctx->pc = 0x1A1958u;
    // 0x1a1958: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1a1958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x1a195c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1a195cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a1960: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a1960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a1964: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1a1964u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a1968: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a196c: 0x2464007a  addiu       $a0, $v1, 0x7A
    ctx->pc = 0x1a196cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 122));
    // 0x1a1970: 0xc065254  jal         func_194950
    ctx->pc = 0x1A1970u;
    SET_GPR_U32(ctx, 31, 0x1A1978u);
    ctx->pc = 0x1A1974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1970u;
            // 0x1a1974: 0x2445000f  addiu       $a1, $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194950u;
    if (runtime->hasFunction(0x194950u)) {
        auto targetFn = runtime->lookupFunction(0x194950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1978u; }
        if (ctx->pc != 0x1A1978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_boss_0x194950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1978u; }
        if (ctx->pc != 0x1A1978u) { return; }
    }
    ctx->pc = 0x1A1978u;
label_1a1978:
    // 0x1a1978: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1a1978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a197c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a197cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1980: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1a1980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
    // 0x1a1984: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a1984u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1a1988: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a1988u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a198c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a198cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a1990: 0x24840073  addiu       $a0, $a0, 0x73
    ctx->pc = 0x1a1990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 115));
    // 0x1a1994: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1A1994u;
    SET_GPR_U32(ctx, 31, 0x1A199Cu);
    ctx->pc = 0x1A1998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1994u;
            // 0x1a1998: 0x2465fff6  addiu       $a1, $v1, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A199Cu; }
        if (ctx->pc != 0x1A199Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A199Cu; }
        if (ctx->pc != 0x1A199Cu) { return; }
    }
    ctx->pc = 0x1A199Cu;
    // 0x1a199c: 0x0  nop
    ctx->pc = 0x1a199cu;
    // NOP
label_1a19a0:
    // 0x1a19a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a19a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a19a4: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1a19a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1a19a8: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1a19a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a19ac: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1a19acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a19b0: 0xc068fec  jal         func_1A3FB0
    ctx->pc = 0x1A19B0u;
    SET_GPR_U32(ctx, 31, 0x1A19B8u);
    ctx->pc = 0x1A19B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A19B0u;
            // 0x1a19b4: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3FB0u;
    if (runtime->hasFunction(0x1A3FB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A3FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A19B8u; }
        if (ctx->pc != 0x1A19B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D2_0x1a3fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A19B8u; }
        if (ctx->pc != 0x1A19B8u) { return; }
    }
    ctx->pc = 0x1A19B8u;
    // 0x1a19b8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1a19b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a19bc: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1a19bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1a19c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a19c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a19c4: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1a19c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1a19c8: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x1A19C8u;
    SET_GPR_U32(ctx, 31, 0x1A19D0u);
    ctx->pc = 0x1A19CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A19C8u;
            // 0x1a19cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A19D0u; }
        if (ctx->pc != 0x1A19D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A19D0u; }
        if (ctx->pc != 0x1A19D0u) { return; }
    }
    ctx->pc = 0x1A19D0u;
    // 0x1a19d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a19d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a19d4: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1a19d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a19d8: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x1A19D8u;
    SET_GPR_U32(ctx, 31, 0x1A19E0u);
    ctx->pc = 0x1A19DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A19D8u;
            // 0x1a19dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A19E0u; }
        if (ctx->pc != 0x1A19E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A19E0u; }
        if (ctx->pc != 0x1A19E0u) { return; }
    }
    ctx->pc = 0x1A19E0u;
    // 0x1a19e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a19e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a19e4: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1a19e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a19e8: 0xc04b804  jal         func_12E010
    ctx->pc = 0x1A19E8u;
    SET_GPR_U32(ctx, 31, 0x1A19F0u);
    ctx->pc = 0x1A19ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A19E8u;
            // 0x1a19ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A19F0u; }
        if (ctx->pc != 0x1A19F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A19F0u; }
        if (ctx->pc != 0x1A19F0u) { return; }
    }
    ctx->pc = 0x1A19F0u;
    // 0x1a19f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a19f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a19f4: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1a19f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a19f8: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x1A19F8u;
    SET_GPR_U32(ctx, 31, 0x1A1A00u);
    ctx->pc = 0x1A19FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A19F8u;
            // 0x1a19fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1A00u; }
        if (ctx->pc != 0x1A1A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1A00u; }
        if (ctx->pc != 0x1A1A00u) { return; }
    }
    ctx->pc = 0x1A1A00u;
    // 0x1a1a00: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a1a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1a04: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a1a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1a08: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x1A1A08u;
    SET_GPR_U32(ctx, 31, 0x1A1A10u);
    ctx->pc = 0x1A1A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1A08u;
            // 0x1a1a0c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1A10u; }
        if (ctx->pc != 0x1A1A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1A10u; }
        if (ctx->pc != 0x1A1A10u) { return; }
    }
    ctx->pc = 0x1A1A10u;
    // 0x1a1a10: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a1a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a1a14: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a1a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a1a18: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1a1a18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a1a1c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A1A1Cu;
    {
        const bool branch_taken_0x1a1a1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1a1c) {
            ctx->pc = 0x1A1A70u;
            goto label_1a1a70;
        }
    }
    ctx->pc = 0x1A1A24u;
    // 0x1a1a24: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1a1a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1a1a28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1A28u;
    {
        const bool branch_taken_0x1a1a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1a28) {
            ctx->pc = 0x1A1A40u;
            goto label_1a1a40;
        }
    }
    ctx->pc = 0x1A1A30u;
    // 0x1a1a30: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x1A1A30u;
    SET_GPR_U32(ctx, 31, 0x1A1A38u);
    ctx->pc = 0x1A1A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1A30u;
            // 0x1a1a34: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1A38u; }
        if (ctx->pc != 0x1A1A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1A38u; }
        if (ctx->pc != 0x1A1A38u) { return; }
    }
    ctx->pc = 0x1A1A38u;
    // 0x1a1a38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1A38u;
    {
        const bool branch_taken_0x1a1a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1a38) {
            ctx->pc = 0x1A1A48u;
            goto label_1a1a48;
        }
    }
    ctx->pc = 0x1A1A40u;
label_1a1a40:
    // 0x1a1a40: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1A1A40u;
    SET_GPR_U32(ctx, 31, 0x1A1A48u);
    ctx->pc = 0x1A1A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1A40u;
            // 0x1a1a44: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1A48u; }
        if (ctx->pc != 0x1A1A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1A48u; }
        if (ctx->pc != 0x1A1A48u) { return; }
    }
    ctx->pc = 0x1A1A48u;
label_1a1a48:
    // 0x1a1a48: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1a1a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1a1a4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1A4Cu;
    {
        const bool branch_taken_0x1a1a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1a4c) {
            ctx->pc = 0x1A1A60u;
            goto label_1a1a60;
        }
    }
    ctx->pc = 0x1A1A54u;
    // 0x1a1a54: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A1A54u;
    {
        const bool branch_taken_0x1a1a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1A54u;
            // 0x1a1a58: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1a54) {
            ctx->pc = 0x1A1A80u;
            goto label_1a1a80;
        }
    }
    ctx->pc = 0x1A1A5Cu;
    // 0x1a1a5c: 0x0  nop
    ctx->pc = 0x1a1a5cu;
    // NOP
label_1a1a60:
    // 0x1a1a60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1a64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A1A64u;
    {
        const bool branch_taken_0x1a1a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1A64u;
            // 0x1a1a68: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1a64) {
            ctx->pc = 0x1A1A80u;
            goto label_1a1a80;
        }
    }
    ctx->pc = 0x1A1A6Cu;
    // 0x1a1a6c: 0x0  nop
    ctx->pc = 0x1a1a6cu;
    // NOP
label_1a1a70:
    // 0x1a1a70: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1A1A70u;
    SET_GPR_U32(ctx, 31, 0x1A1A78u);
    ctx->pc = 0x1A1A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1A70u;
            // 0x1a1a74: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1A78u; }
        if (ctx->pc != 0x1A1A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1A78u; }
        if (ctx->pc != 0x1A1A78u) { return; }
    }
    ctx->pc = 0x1A1A78u;
    // 0x1a1a78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1a7c: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1a1a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1a1a80:
    // 0x1a1a80: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a1a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a1a84: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1a1a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1a1a88: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1a1a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a1a8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a1a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a1a90: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1a1a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1a1a94: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a1a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a1a98: 0x1c400019  bgtz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A1A98u;
    {
        const bool branch_taken_0x1a1a98 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1a1a98) {
            ctx->pc = 0x1A1B00u;
            goto label_1a1b00;
        }
    }
    ctx->pc = 0x1A1AA0u;
    // 0x1a1aa0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a1aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a1aa4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a1aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a1aa8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a1aa8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a1aac: 0x0  nop
    ctx->pc = 0x1a1aacu;
    // NOP
    // 0x1a1ab0: 0x0  nop
    ctx->pc = 0x1a1ab0u;
    // NOP
    // 0x1a1ab4: 0x1010  mfhi        $v0
    ctx->pc = 0x1a1ab4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a1ab8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A1AB8u;
    {
        const bool branch_taken_0x1a1ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1ab8) {
            ctx->pc = 0x1A1AE0u;
            goto label_1a1ae0;
        }
    }
    ctx->pc = 0x1A1AC0u;
    // 0x1a1ac0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1a1ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a1ac4: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x1a1ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x1a1ac8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a1ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a1acc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a1accu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a1ad0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a1ad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a1ad4: 0x24840072  addiu       $a0, $a0, 0x72
    ctx->pc = 0x1a1ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 114));
    // 0x1a1ad8: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1A1AD8u;
    SET_GPR_U32(ctx, 31, 0x1A1AE0u);
    ctx->pc = 0x1A1ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1AD8u;
            // 0x1a1adc: 0x2465ffd8  addiu       $a1, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1AE0u; }
        if (ctx->pc != 0x1A1AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1AE0u; }
        if (ctx->pc != 0x1A1AE0u) { return; }
    }
    ctx->pc = 0x1A1AE0u;
label_1a1ae0:
    // 0x1a1ae0: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x1a1ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1a1ae4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a1ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a1ae8: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x1a1ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x1a1aec: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x1a1aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1a1af0: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x1A1AF0u;
    SET_GPR_U32(ctx, 31, 0x1A1AF8u);
    ctx->pc = 0x1A1AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1AF0u;
            // 0x1a1af4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1AF8u; }
        if (ctx->pc != 0x1A1AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1AF8u; }
        if (ctx->pc != 0x1A1AF8u) { return; }
    }
    ctx->pc = 0x1A1AF8u;
    // 0x1a1af8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1A1AF8u;
    {
        const bool branch_taken_0x1a1af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1af8) {
            ctx->pc = 0x1A1B80u;
            goto label_1a1b80;
        }
    }
    ctx->pc = 0x1A1B00u;
label_1a1b00:
    // 0x1a1b00: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1a1b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a1b04: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a1b04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x1a1b08: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a1b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a1b0c: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1a1b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1a1b10: 0x24c60790  addiu       $a2, $a2, 0x790
    ctx->pc = 0x1a1b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1936));
    // 0x1a1b14: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1a1b14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b18: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1a1b18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b1c: 0x2442005a  addiu       $v0, $v0, 0x5A
    ctx->pc = 0x1a1b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
    // 0x1a1b20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a1b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1b24: 0x0  nop
    ctx->pc = 0x1a1b24u;
    // NOP
    // 0x1a1b28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a1b28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a1b2c: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1a1b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1a1b30: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1b34: 0x2442ff74  addiu       $v0, $v0, -0x8C
    ctx->pc = 0x1a1b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967156));
    // 0x1a1b38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a1b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1b3c: 0x0  nop
    ctx->pc = 0x1a1b3cu;
    // NOP
    // 0x1a1b40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a1b40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a1b44: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1a1b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1a1b48: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1a1b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1a1b4c: 0x24420082  addiu       $v0, $v0, 0x82
    ctx->pc = 0x1a1b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 130));
    // 0x1a1b50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a1b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1b54: 0x0  nop
    ctx->pc = 0x1a1b54u;
    // NOP
    // 0x1a1b58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a1b58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a1b5c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1a1b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1a1b60: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1b64: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x1a1b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1a1b68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a1b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1b6c: 0x0  nop
    ctx->pc = 0x1a1b6cu;
    // NOP
    // 0x1a1b70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a1b70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a1b74: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1A1B74u;
    SET_GPR_U32(ctx, 31, 0x1A1B7Cu);
    ctx->pc = 0x1A1B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1B74u;
            // 0x1a1b78: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1B7Cu; }
        if (ctx->pc != 0x1A1B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1B7Cu; }
        if (ctx->pc != 0x1A1B7Cu) { return; }
    }
    ctx->pc = 0x1A1B7Cu;
    // 0x1a1b7c: 0x0  nop
    ctx->pc = 0x1a1b7cu;
    // NOP
label_1a1b80:
    // 0x1a1b80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a1b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1b84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a1b84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1b88: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1B88u;
            // 0x1a1b8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1810u: goto label_1a1810;
            case 0x1A1828u: goto label_1a1828;
            case 0x1A1928u: goto label_1a1928;
            case 0x1A1978u: goto label_1a1978;
            case 0x1A19A0u: goto label_1a19a0;
            case 0x1A1A40u: goto label_1a1a40;
            case 0x1A1A48u: goto label_1a1a48;
            case 0x1A1A60u: goto label_1a1a60;
            case 0x1A1A70u: goto label_1a1a70;
            case 0x1A1A80u: goto label_1a1a80;
            case 0x1A1AE0u: goto label_1a1ae0;
            case 0x1A1B00u: goto label_1a1b00;
            case 0x1A1B80u: goto label_1a1b80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A1B90u;
}
