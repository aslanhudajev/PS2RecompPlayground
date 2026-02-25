#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotCreate_Houkou
// Address: 0x195420 - 0x195638
void EnemyShotCreate_Houkou_0x195420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotCreate_Houkou_0x195420");
#endif

    ctx->pc = 0x195420u;

    // 0x195420: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x195420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x195424: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x195424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x195428: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x195428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19542c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19542cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x195430: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x195430u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195434: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x195438: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x195438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19543c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19543cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195440: 0xc0656fc  jal         func_195BF0
    ctx->pc = 0x195440u;
    SET_GPR_U32(ctx, 31, 0x195448u);
    ctx->pc = 0x195444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195440u;
            // 0x195444: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BF0u;
    if (runtime->hasFunction(0x195BF0u)) {
        auto targetFn = runtime->lookupFunction(0x195BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195448u; }
        if (ctx->pc != 0x195448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotAlloc_0x195bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195448u; }
        if (ctx->pc != 0x195448u) { return; }
    }
    ctx->pc = 0x195448u;
    // 0x195448: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x195448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19544c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19544cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195450: 0x621000d  bgez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x195450u;
    {
        const bool branch_taken_0x195450 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x195454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195450u;
            // 0x195454: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195450) {
            ctx->pc = 0x195488u;
            goto label_195488;
        }
    }
    ctx->pc = 0x195458u;
    // 0x195458: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x195458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x19545c: 0x222001a  div         $zero, $s1, $v0
    ctx->pc = 0x19545cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x195460: 0x0  nop
    ctx->pc = 0x195460u;
    // NOP
    // 0x195464: 0x0  nop
    ctx->pc = 0x195464u;
    // NOP
    // 0x195468: 0x8810  mfhi        $s1
    ctx->pc = 0x195468u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x19546c: 0x26310078  addiu       $s1, $s1, 0x78
    ctx->pc = 0x19546cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x195470: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x195470u;
    {
        const bool branch_taken_0x195470 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x195470) {
            ctx->pc = 0x195480u;
            goto label_195480;
        }
    }
    ctx->pc = 0x195478u;
    // 0x195478: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x195478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19547c: 0x0  nop
    ctx->pc = 0x19547cu;
    // NOP
label_195480:
    // 0x195480: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x195480u;
    {
        const bool branch_taken_0x195480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195480u;
            // 0x195484: 0xae110014  sw          $s1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195480) {
            ctx->pc = 0x1954A0u;
            goto label_1954a0;
        }
    }
    ctx->pc = 0x195488u;
label_195488:
    // 0x195488: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x195488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x19548c: 0x222001a  div         $zero, $s1, $v0
    ctx->pc = 0x19548cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x195490: 0x0  nop
    ctx->pc = 0x195490u;
    // NOP
    // 0x195494: 0x0  nop
    ctx->pc = 0x195494u;
    // NOP
    // 0x195498: 0x8810  mfhi        $s1
    ctx->pc = 0x195498u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x19549c: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x19549cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
label_1954a0:
    // 0x1954a0: 0x620000f  bltz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x1954A0u;
    {
        const bool branch_taken_0x1954a0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1954A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1954A0u;
            // 0x1954a4: 0x2a21001e  slti        $at, $s1, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)30) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1954a0) {
            ctx->pc = 0x1954E0u;
            goto label_1954e0;
        }
    }
    ctx->pc = 0x1954A8u;
    // 0x1954a8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1954A8u;
    {
        const bool branch_taken_0x1954a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1954ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1954A8u;
            // 0x1954ac: 0x111023  negu        $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1954a8) {
            ctx->pc = 0x1954E0u;
            goto label_1954e0;
        }
    }
    ctx->pc = 0x1954B0u;
    // 0x1954b0: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x1954b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x1954b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1954b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1954b8: 0x0  nop
    ctx->pc = 0x1954b8u;
    // NOP
    // 0x1954bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1954bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1954c0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1954c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1954c4: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1954c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1954c8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1954c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1954cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1954ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1954d0: 0x0  nop
    ctx->pc = 0x1954d0u;
    // NOP
    // 0x1954d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1954d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1954d8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1954D8u;
    {
        const bool branch_taken_0x1954d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1954DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1954D8u;
            // 0x1954dc: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1954d8) {
            ctx->pc = 0x1955B0u;
            goto label_1955b0;
        }
    }
    ctx->pc = 0x1954E0u;
label_1954e0:
    // 0x1954e0: 0x2a22001e  slti        $v0, $s1, 0x1E
    ctx->pc = 0x1954e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1954e4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1954E4u;
    {
        const bool branch_taken_0x1954e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1954E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1954E4u;
            // 0x1954e8: 0x2a21003c  slti        $at, $s1, 0x3C (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)60) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1954e4) {
            ctx->pc = 0x195528u;
            goto label_195528;
        }
    }
    ctx->pc = 0x1954ECu;
    // 0x1954ec: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1954ECu;
    {
        const bool branch_taken_0x1954ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1954F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1954ECu;
            // 0x1954f0: 0x2623ffe2  addiu       $v1, $s1, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1954ec) {
            ctx->pc = 0x195528u;
            goto label_195528;
        }
    }
    ctx->pc = 0x1954F4u;
    // 0x1954f4: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1954f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1954f8: 0x31023  negu        $v0, $v1
    ctx->pc = 0x1954f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1954fc: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x1954fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x195500: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x195500u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x195504: 0x31823  negu        $v1, $v1
    ctx->pc = 0x195504u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x195508: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x195508u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19550c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19550cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195510: 0x0  nop
    ctx->pc = 0x195510u;
    // NOP
    // 0x195514: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x195514u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x195518: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x195518u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19551c: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x19551cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x195520: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x195520u;
    {
        const bool branch_taken_0x195520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195520u;
            // 0x195524: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x195520) {
            ctx->pc = 0x1955B0u;
            goto label_1955b0;
        }
    }
    ctx->pc = 0x195528u;
label_195528:
    // 0x195528: 0x2a22003c  slti        $v0, $s1, 0x3C
    ctx->pc = 0x195528u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x19552c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19552Cu;
    {
        const bool branch_taken_0x19552c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x195530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19552Cu;
            // 0x195530: 0x2a21005a  slti        $at, $s1, 0x5A (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)90) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19552c) {
            ctx->pc = 0x195570u;
            goto label_195570;
        }
    }
    ctx->pc = 0x195534u;
    // 0x195534: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x195534u;
    {
        const bool branch_taken_0x195534 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x195538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195534u;
            // 0x195538: 0x2623ffc4  addiu       $v1, $s1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195534) {
            ctx->pc = 0x195570u;
            goto label_195570;
        }
    }
    ctx->pc = 0x19553Cu;
    // 0x19553c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x19553cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x195540: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x195540u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195544: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x195544u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x195548: 0x21023  negu        $v0, $v0
    ctx->pc = 0x195548u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x19554c: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x19554cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x195550: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x195550u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x195554: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x195554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x195558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x195558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19555c: 0x0  nop
    ctx->pc = 0x19555cu;
    // NOP
    // 0x195560: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x195560u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x195564: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x195564u;
    {
        const bool branch_taken_0x195564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195564u;
            // 0x195568: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x195564) {
            ctx->pc = 0x1955B0u;
            goto label_1955b0;
        }
    }
    ctx->pc = 0x19556Cu;
    // 0x19556c: 0x0  nop
    ctx->pc = 0x19556cu;
    // NOP
label_195570:
    // 0x195570: 0x2a22005a  slti        $v0, $s1, 0x5A
    ctx->pc = 0x195570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x195574: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x195574u;
    {
        const bool branch_taken_0x195574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x195578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195574u;
            // 0x195578: 0x2a210078  slti        $at, $s1, 0x78 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)120) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x195574) {
            ctx->pc = 0x1955B0u;
            goto label_1955b0;
        }
    }
    ctx->pc = 0x19557Cu;
    // 0x19557c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x19557Cu;
    {
        const bool branch_taken_0x19557c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x195580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19557Cu;
            // 0x195580: 0x2623ffa6  addiu       $v1, $s1, -0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967206));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19557c) {
            ctx->pc = 0x1955B0u;
            goto label_1955b0;
        }
    }
    ctx->pc = 0x195584u;
    // 0x195584: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x195584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x195588: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x195588u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19558c: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x19558cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x195590: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x195590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x195594: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x195594u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195598: 0x0  nop
    ctx->pc = 0x195598u;
    // NOP
    // 0x19559c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19559cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1955a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1955a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1955a4: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x1955a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1955a8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1955a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1955ac: 0x0  nop
    ctx->pc = 0x1955acu;
    // NOP
label_1955b0:
    // 0x1955b0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1955b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1955b4: 0xc04b6ee  jal         func_12DBB8
    ctx->pc = 0x1955B4u;
    SET_GPR_U32(ctx, 31, 0x1955BCu);
    ctx->pc = 0x1955B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1955B4u;
            // 0x1955b8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1955BCu; }
        if (ctx->pc != 0x1955BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1955BCu; }
        if (ctx->pc != 0x1955BCu) { return; }
    }
    ctx->pc = 0x1955BCu;
    // 0x1955bc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1955bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1955c0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1955c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1955c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1955c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1955c8: 0xc04b758  jal         func_12DD60
    ctx->pc = 0x1955C8u;
    SET_GPR_U32(ctx, 31, 0x1955D0u);
    ctx->pc = 0x1955CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1955C8u;
            // 0x1955cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD60u;
    if (runtime->hasFunction(0x12DD60u)) {
        auto targetFn = runtime->lookupFunction(0x12DD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1955D0u; }
        if (ctx->pc != 0x1955D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x12dd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1955D0u; }
        if (ctx->pc != 0x1955D0u) { return; }
    }
    ctx->pc = 0x1955D0u;
    // 0x1955d0: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x1955d0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1955d4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1955d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1955d8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1955d8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1955dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1955dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1955e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1955e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1955e4: 0x2463a590  addiu       $v1, $v1, -0x5A70
    ctx->pc = 0x1955e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944144));
    // 0x1955e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1955e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1955ec: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1955ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1955f0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1955f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1955f4: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1955f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1955f8: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1955f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1955fc: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1955fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195600: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x195600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x195604: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x195604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x195608: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x195608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19560c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19560cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x195610: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x195610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x195614: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x195614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x195618: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x195618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x19561c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19561cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x195620: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x195620u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195624: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x195624u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195628: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195628u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19562c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19562cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195630: 0x3e00008  jr          $ra
    ctx->pc = 0x195630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195630u;
            // 0x195634: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195480u: goto label_195480;
            case 0x195488u: goto label_195488;
            case 0x1954A0u: goto label_1954a0;
            case 0x1954E0u: goto label_1954e0;
            case 0x195528u: goto label_195528;
            case 0x195570u: goto label_195570;
            case 0x1955B0u: goto label_1955b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x195638u;
}
