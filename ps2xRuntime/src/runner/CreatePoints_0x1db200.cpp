#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreatePoints
// Address: 0x1db200 - 0x1db364
void CreatePoints_0x1db200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreatePoints_0x1db200");
#endif

    ctx->pc = 0x1db200u;

    // 0x1db200: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1db200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1db204: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1db204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1db208: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1db208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1db20c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1db20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1db210: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1db210u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db214: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1db214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1db218: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1db218u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db21c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1db21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1db220: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1db220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db224: 0x1a000048  blez        $s0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1DB224u;
    {
        const bool branch_taken_0x1db224 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1DB228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB224u;
            // 0x1db228: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db224) {
            ctx->pc = 0x1DB348u;
            goto label_1db348;
        }
    }
    ctx->pc = 0x1DB22Cu;
    // 0x1db22c: 0xc076e20  jal         func_1DB880
    ctx->pc = 0x1DB22Cu;
    SET_GPR_U32(ctx, 31, 0x1DB234u);
    ctx->pc = 0x1DB880u;
    if (runtime->hasFunction(0x1DB880u)) {
        auto targetFn = runtime->lookupFunction(0x1DB880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB234u; }
        if (ctx->pc != 0x1DB234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PointsAlloc_0x1db880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB234u; }
        if (ctx->pc != 0x1DB234u) { return; }
    }
    ctx->pc = 0x1DB234u;
    // 0x1db234: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1db234u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1db238: 0x3c04001e  lui         $a0, 0x1E
    ctx->pc = 0x1db238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
    // 0x1db23c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1db23cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db240: 0xac530008  sw          $s3, 0x8($v0)
    ctx->pc = 0x1db240u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 19));
    // 0x1db244: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1db244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1db248: 0x2484b170  addiu       $a0, $a0, -0x4E90
    ctx->pc = 0x1db248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947184));
    // 0x1db24c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1db24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1db250: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x1db250u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db254: 0x240803e8  addiu       $t0, $zero, 0x3E8
    ctx->pc = 0x1db254u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1db258: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1db258u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1db25c: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x1db25cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1db260: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x1db260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1db264: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1db264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1db268: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1db268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1db26c: 0xac440038  sw          $a0, 0x38($v0)
    ctx->pc = 0x1db26cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 4));
    // 0x1db270: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x1db270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1db274: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1db274u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1db278: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1db278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1db27c: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x1db27cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x1db280: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x1db280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1db284: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1db284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1db288: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x1db288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x1db28c: 0x3c046666  lui         $a0, 0x6666
    ctx->pc = 0x1db28cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26214 << 16));
    // 0x1db290: 0x34866667  ori         $a2, $a0, 0x6667
    ctx->pc = 0x1db290u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)26215u)));
    // 0x1db294: 0x0  nop
    ctx->pc = 0x1db294u;
    // NOP
label_1db298:
    // 0x1db298: 0x68001a  div         $zero, $v1, $t0
    ctx->pc = 0x1db298u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1db29c: 0x0  nop
    ctx->pc = 0x1db29cu;
    // NOP
    // 0x1db2a0: 0x0  nop
    ctx->pc = 0x1db2a0u;
    // NOP
    // 0x1db2a4: 0x2012  mflo        $a0
    ctx->pc = 0x1db2a4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1db2a8: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DB2A8u;
    {
        const bool branch_taken_0x1db2a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db2a8) {
            ctx->pc = 0x1DB2E0u;
            goto label_1db2e0;
        }
    }
    ctx->pc = 0x1DB2B0u;
    // 0x1db2b0: 0x68001a  div         $zero, $v1, $t0
    ctx->pc = 0x1db2b0u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1db2b4: 0x82fc2  srl         $a1, $t0, 31
    ctx->pc = 0x1db2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x1db2b8: 0x0  nop
    ctx->pc = 0x1db2b8u;
    // NOP
    // 0x1db2bc: 0x1810  mfhi        $v1
    ctx->pc = 0x1db2bcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1db2c0: 0xc80018  mult        $zero, $a2, $t0
    ctx->pc = 0x1db2c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1db2c4: 0x0  nop
    ctx->pc = 0x1db2c4u;
    // NOP
    // 0x1db2c8: 0x0  nop
    ctx->pc = 0x1db2c8u;
    // NOP
    // 0x1db2cc: 0x2010  mfhi        $a0
    ctx->pc = 0x1db2ccu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1db2d0: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x1db2d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x1db2d4: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1DB2D4u;
    {
        const bool branch_taken_0x1db2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB2D4u;
            // 0x1db2d8: 0x854021  addu        $t0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2d4) {
            ctx->pc = 0x1DB298u;
            goto label_1db298;
        }
    }
    ctx->pc = 0x1DB2DCu;
    // 0x1db2dc: 0x0  nop
    ctx->pc = 0x1db2dcu;
    // NOP
label_1db2e0:
    // 0x1db2e0: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x1db2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1db2e4: 0x68001a  div         $zero, $v1, $t0
    ctx->pc = 0x1db2e4u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1db2e8: 0x3c046666  lui         $a0, 0x6666
    ctx->pc = 0x1db2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26214 << 16));
    // 0x1db2ec: 0x34846667  ori         $a0, $a0, 0x6667
    ctx->pc = 0x1db2ecu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)26215u)));
    // 0x1db2f0: 0x82fc2  srl         $a1, $t0, 31
    ctx->pc = 0x1db2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x1db2f4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1db2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1db2f8: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x1db2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1db2fc: 0x3812  mflo        $a3
    ctx->pc = 0x1db2fcu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x1db300: 0x68001a  div         $zero, $v1, $t0
    ctx->pc = 0x1db300u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1db304: 0xacc70018  sw          $a3, 0x18($a2)
    ctx->pc = 0x1db304u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 7));
    // 0x1db308: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1db308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1db30c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1db30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1db310: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1db310u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1db314: 0x1810  mfhi        $v1
    ctx->pc = 0x1db314u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1db318: 0x880018  mult        $zero, $a0, $t0
    ctx->pc = 0x1db318u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1db31c: 0x0  nop
    ctx->pc = 0x1db31cu;
    // NOP
    // 0x1db320: 0x0  nop
    ctx->pc = 0x1db320u;
    // NOP
    // 0x1db324: 0x2010  mfhi        $a0
    ctx->pc = 0x1db324u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1db328: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x1db328u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x1db32c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1DB32Cu;
    {
        const bool branch_taken_0x1db32c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB32Cu;
            // 0x1db330: 0x854021  addu        $t0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db32c) {
            ctx->pc = 0x1DB2E0u;
            goto label_1db2e0;
        }
    }
    ctx->pc = 0x1DB334u;
    // 0x1db334: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB334u;
    {
        const bool branch_taken_0x1db334 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1DB338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB334u;
            // 0x1db338: 0x101943  sra         $v1, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db334) {
            ctx->pc = 0x1DB344u;
            goto label_1db344;
        }
    }
    ctx->pc = 0x1DB33Cu;
    // 0x1db33c: 0x2603001f  addiu       $v1, $s0, 0x1F
    ctx->pc = 0x1db33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x1db340: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1db340u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1db344:
    // 0x1db344: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1db344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_1db348:
    // 0x1db348: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1db348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1db34c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1db34cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db350: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1db350u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db354: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1db354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db358: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1db358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db35c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB35Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB35Cu;
            // 0x1db360: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB298u: goto label_1db298;
            case 0x1DB2E0u: goto label_1db2e0;
            case 0x1DB344u: goto label_1db344;
            case 0x1DB348u: goto label_1db348;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DB364u;
}
