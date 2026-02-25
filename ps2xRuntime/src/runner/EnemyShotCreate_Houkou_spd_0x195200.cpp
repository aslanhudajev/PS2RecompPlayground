#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotCreate_Houkou_spd
// Address: 0x195200 - 0x195420
void EnemyShotCreate_Houkou_spd_0x195200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotCreate_Houkou_spd_0x195200");
#endif

    ctx->pc = 0x195200u;

    // 0x195200: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x195200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x195204: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x195204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x195208: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x195208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x19520c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x19520cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x195210: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x195210u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195214: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x195214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x195218: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x195218u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19521c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19521cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x195220: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x195220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195224: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x195224u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x195228: 0xc0656fc  jal         func_195BF0
    ctx->pc = 0x195228u;
    SET_GPR_U32(ctx, 31, 0x195230u);
    ctx->pc = 0x19522Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195228u;
            // 0x19522c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BF0u;
    if (runtime->hasFunction(0x195BF0u)) {
        auto targetFn = runtime->lookupFunction(0x195BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195230u; }
        if (ctx->pc != 0x195230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotAlloc_0x195bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195230u; }
        if (ctx->pc != 0x195230u) { return; }
    }
    ctx->pc = 0x195230u;
    // 0x195230: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x195230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x195234: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x195234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195238: 0x621000d  bgez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x195238u;
    {
        const bool branch_taken_0x195238 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x19523Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195238u;
            // 0x19523c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195238) {
            ctx->pc = 0x195270u;
            goto label_195270;
        }
    }
    ctx->pc = 0x195240u;
    // 0x195240: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x195240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x195244: 0x222001a  div         $zero, $s1, $v0
    ctx->pc = 0x195244u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x195248: 0x0  nop
    ctx->pc = 0x195248u;
    // NOP
    // 0x19524c: 0x0  nop
    ctx->pc = 0x19524cu;
    // NOP
    // 0x195250: 0x8810  mfhi        $s1
    ctx->pc = 0x195250u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x195254: 0x26310078  addiu       $s1, $s1, 0x78
    ctx->pc = 0x195254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x195258: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x195258u;
    {
        const bool branch_taken_0x195258 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x195258) {
            ctx->pc = 0x195268u;
            goto label_195268;
        }
    }
    ctx->pc = 0x195260u;
    // 0x195260: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x195260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195264: 0x0  nop
    ctx->pc = 0x195264u;
    // NOP
label_195268:
    // 0x195268: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x195268u;
    {
        const bool branch_taken_0x195268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19526Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195268u;
            // 0x19526c: 0xae110014  sw          $s1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195268) {
            ctx->pc = 0x195288u;
            goto label_195288;
        }
    }
    ctx->pc = 0x195270u;
label_195270:
    // 0x195270: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x195270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x195274: 0x222001a  div         $zero, $s1, $v0
    ctx->pc = 0x195274u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x195278: 0x0  nop
    ctx->pc = 0x195278u;
    // NOP
    // 0x19527c: 0x0  nop
    ctx->pc = 0x19527cu;
    // NOP
    // 0x195280: 0x8810  mfhi        $s1
    ctx->pc = 0x195280u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x195284: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x195284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
label_195288:
    // 0x195288: 0x620000f  bltz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x195288u;
    {
        const bool branch_taken_0x195288 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x19528Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195288u;
            // 0x19528c: 0x2a21001e  slti        $at, $s1, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)30) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x195288) {
            ctx->pc = 0x1952C8u;
            goto label_1952c8;
        }
    }
    ctx->pc = 0x195290u;
    // 0x195290: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x195290u;
    {
        const bool branch_taken_0x195290 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x195294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195290u;
            // 0x195294: 0x111023  negu        $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195290) {
            ctx->pc = 0x1952C8u;
            goto label_1952c8;
        }
    }
    ctx->pc = 0x195298u;
    // 0x195298: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x195298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x19529c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19529cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1952a0: 0x0  nop
    ctx->pc = 0x1952a0u;
    // NOP
    // 0x1952a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1952a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1952a8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1952a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1952ac: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1952acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1952b0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1952b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1952b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1952b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1952b8: 0x0  nop
    ctx->pc = 0x1952b8u;
    // NOP
    // 0x1952bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1952bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1952c0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1952C0u;
    {
        const bool branch_taken_0x1952c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1952C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1952C0u;
            // 0x1952c4: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1952c0) {
            ctx->pc = 0x195398u;
            goto label_195398;
        }
    }
    ctx->pc = 0x1952C8u;
label_1952c8:
    // 0x1952c8: 0x2a22001e  slti        $v0, $s1, 0x1E
    ctx->pc = 0x1952c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1952cc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1952CCu;
    {
        const bool branch_taken_0x1952cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1952D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1952CCu;
            // 0x1952d0: 0x2a21003c  slti        $at, $s1, 0x3C (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)60) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1952cc) {
            ctx->pc = 0x195310u;
            goto label_195310;
        }
    }
    ctx->pc = 0x1952D4u;
    // 0x1952d4: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1952D4u;
    {
        const bool branch_taken_0x1952d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1952D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1952D4u;
            // 0x1952d8: 0x2623ffe2  addiu       $v1, $s1, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1952d4) {
            ctx->pc = 0x195310u;
            goto label_195310;
        }
    }
    ctx->pc = 0x1952DCu;
    // 0x1952dc: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1952dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1952e0: 0x31023  negu        $v0, $v1
    ctx->pc = 0x1952e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1952e4: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1952e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x1952e8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1952e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1952ec: 0x31823  negu        $v1, $v1
    ctx->pc = 0x1952ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1952f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1952f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1952f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1952f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1952f8: 0x0  nop
    ctx->pc = 0x1952f8u;
    // NOP
    // 0x1952fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1952fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x195300: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x195300u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x195304: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x195304u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x195308: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x195308u;
    {
        const bool branch_taken_0x195308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19530Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195308u;
            // 0x19530c: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x195308) {
            ctx->pc = 0x195398u;
            goto label_195398;
        }
    }
    ctx->pc = 0x195310u;
label_195310:
    // 0x195310: 0x2a22003c  slti        $v0, $s1, 0x3C
    ctx->pc = 0x195310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x195314: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x195314u;
    {
        const bool branch_taken_0x195314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x195318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195314u;
            // 0x195318: 0x2a21005a  slti        $at, $s1, 0x5A (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)90) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x195314) {
            ctx->pc = 0x195358u;
            goto label_195358;
        }
    }
    ctx->pc = 0x19531Cu;
    // 0x19531c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x19531Cu;
    {
        const bool branch_taken_0x19531c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x195320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19531Cu;
            // 0x195320: 0x2623ffc4  addiu       $v1, $s1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19531c) {
            ctx->pc = 0x195358u;
            goto label_195358;
        }
    }
    ctx->pc = 0x195324u;
    // 0x195324: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x195324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x195328: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x195328u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19532c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19532cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x195330: 0x21023  negu        $v0, $v0
    ctx->pc = 0x195330u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x195334: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x195334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x195338: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x195338u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19533c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x19533cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x195340: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x195340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195344: 0x0  nop
    ctx->pc = 0x195344u;
    // NOP
    // 0x195348: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x195348u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19534c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x19534Cu;
    {
        const bool branch_taken_0x19534c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19534Cu;
            // 0x195350: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19534c) {
            ctx->pc = 0x195398u;
            goto label_195398;
        }
    }
    ctx->pc = 0x195354u;
    // 0x195354: 0x0  nop
    ctx->pc = 0x195354u;
    // NOP
label_195358:
    // 0x195358: 0x2a22005a  slti        $v0, $s1, 0x5A
    ctx->pc = 0x195358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x19535c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19535Cu;
    {
        const bool branch_taken_0x19535c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x195360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19535Cu;
            // 0x195360: 0x2a210078  slti        $at, $s1, 0x78 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)120) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19535c) {
            ctx->pc = 0x195398u;
            goto label_195398;
        }
    }
    ctx->pc = 0x195364u;
    // 0x195364: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x195364u;
    {
        const bool branch_taken_0x195364 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x195368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195364u;
            // 0x195368: 0x2623ffa6  addiu       $v1, $s1, -0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967206));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195364) {
            ctx->pc = 0x195398u;
            goto label_195398;
        }
    }
    ctx->pc = 0x19536Cu;
    // 0x19536c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x19536cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x195370: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x195370u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x195374: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x195374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x195378: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x195378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19537c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19537cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195380: 0x0  nop
    ctx->pc = 0x195380u;
    // NOP
    // 0x195384: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x195384u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x195388: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x195388u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19538c: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x19538cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x195390: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x195390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x195394: 0x0  nop
    ctx->pc = 0x195394u;
    // NOP
label_195398:
    // 0x195398: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x195398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x19539c: 0xc04b6ee  jal         func_12DBB8
    ctx->pc = 0x19539Cu;
    SET_GPR_U32(ctx, 31, 0x1953A4u);
    ctx->pc = 0x1953A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19539Cu;
            // 0x1953a0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1953A4u; }
        if (ctx->pc != 0x1953A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1953A4u; }
        if (ctx->pc != 0x1953A4u) { return; }
    }
    ctx->pc = 0x1953A4u;
    // 0x1953a4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1953a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1953a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1953a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1953ac: 0xc04b758  jal         func_12DD60
    ctx->pc = 0x1953ACu;
    SET_GPR_U32(ctx, 31, 0x1953B4u);
    ctx->pc = 0x1953B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1953ACu;
            // 0x1953b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD60u;
    if (runtime->hasFunction(0x12DD60u)) {
        auto targetFn = runtime->lookupFunction(0x12DD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1953B4u; }
        if (ctx->pc != 0x1953B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x12dd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1953B4u; }
        if (ctx->pc != 0x1953B4u) { return; }
    }
    ctx->pc = 0x1953B4u;
    // 0x1953b4: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x1953b4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1953b8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1953b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1953bc: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1953bcu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1953c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1953c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1953c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1953c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1953c8: 0x2463a590  addiu       $v1, $v1, -0x5A70
    ctx->pc = 0x1953c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944144));
    // 0x1953cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1953ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1953d0: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1953d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1953d4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1953d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1953d8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1953d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1953dc: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1953dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1953e0: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1953e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1953e4: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1953e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1953e8: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x1953e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x1953ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1953ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1953f0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1953f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1953f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1953f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1953f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1953f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1953fc: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x1953fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x195400: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x195400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x195404: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x195404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x195408: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x195408u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19540c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x19540cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195410: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x195410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195414: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x195414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195418: 0x3e00008  jr          $ra
    ctx->pc = 0x195418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19541Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195418u;
            // 0x19541c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195268u: goto label_195268;
            case 0x195270u: goto label_195270;
            case 0x195288u: goto label_195288;
            case 0x1952C8u: goto label_1952c8;
            case 0x195310u: goto label_195310;
            case 0x195358u: goto label_195358;
            case 0x195398u: goto label_195398;
            default: break;
        }
        return;
    }
    ctx->pc = 0x195420u;
}
