#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage6mapGenerate
// Address: 0x144280 - 0x1444ec
void stage6mapGenerate_0x144280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage6mapGenerate_0x144280");
#endif

    ctx->pc = 0x144280u;

    // 0x144280: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x144280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x144284: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x144284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x144288: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x144288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14428c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14428cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x144290: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x144290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x144294: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x144294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x144298: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x144298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14429c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14429cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1442a0: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1442A0u;
    SET_GPR_U32(ctx, 31, 0x1442A8u);
    ctx->pc = 0x1442A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1442A0u;
            // 0x1442a4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1442A8u; }
        if (ctx->pc != 0x1442A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1442A8u; }
        if (ctx->pc != 0x1442A8u) { return; }
    }
    ctx->pc = 0x1442A8u;
    // 0x1442a8: 0xc0506f0  jal         func_141BC0
    ctx->pc = 0x1442A8u;
    SET_GPR_U32(ctx, 31, 0x1442B0u);
    ctx->pc = 0x141BC0u;
    if (runtime->hasFunction(0x141BC0u)) {
        auto targetFn = runtime->lookupFunction(0x141BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1442B0u; }
        if (ctx->pc != 0x1442B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetNowFrame_0x141bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1442B0u; }
        if (ctx->pc != 0x1442B0u) { return; }
    }
    ctx->pc = 0x1442B0u;
    // 0x1442b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1442b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1442b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1442b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1442b8: 0x1603001b  bne         $s0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1442B8u;
    {
        const bool branch_taken_0x1442b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1442BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1442B8u;
            // 0x1442bc: 0x3c070014  lui         $a3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1442b8) {
            ctx->pc = 0x144328u;
            goto label_144328;
        }
    }
    ctx->pc = 0x1442C0u;
    // 0x1442c0: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x1442c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x1442c4: 0x27b20054  addiu       $s2, $sp, 0x54
    ctx->pc = 0x1442c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1442c8: 0x27b10058  addiu       $s1, $sp, 0x58
    ctx->pc = 0x1442c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1442cc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1442ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1442d0: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1442d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1442d4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1442d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1442d8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1442d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1442dc: 0x24e74500  addiu       $a3, $a3, 0x4500
    ctx->pc = 0x1442dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17664));
    // 0x1442e0: 0xc0520cc  jal         func_148330
    ctx->pc = 0x1442E0u;
    SET_GPR_U32(ctx, 31, 0x1442E8u);
    ctx->pc = 0x1442E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1442E0u;
            // 0x1442e4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1442E8u; }
        if (ctx->pc != 0x1442E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1442E8u; }
        if (ctx->pc != 0x1442E8u) { return; }
    }
    ctx->pc = 0x1442E8u;
    // 0x1442e8: 0x3c02c62b  lui         $v0, 0xC62B
    ctx->pc = 0x1442e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50731 << 16));
    // 0x1442ec: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1442ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1442f0: 0x3443e000  ori         $v1, $v0, 0xE000
    ctx->pc = 0x1442f0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57344u)));
    // 0x1442f4: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x1442f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x1442f8: 0x3c02bf47  lui         $v0, 0xBF47
    ctx->pc = 0x1442f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48967 << 16));
    // 0x1442fc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1442fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x144300: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x144300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x144304: 0x3442ae14  ori         $v0, $v0, 0xAE14
    ctx->pc = 0x144304u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)44564u)));
    // 0x144308: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x144308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14430c: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x14430cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x144310: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x144310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x144314: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x144314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x144318: 0x24e74560  addiu       $a3, $a3, 0x4560
    ctx->pc = 0x144318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17760));
    // 0x14431c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x14431cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x144320: 0xc0520cc  jal         func_148330
    ctx->pc = 0x144320u;
    SET_GPR_U32(ctx, 31, 0x144328u);
    ctx->pc = 0x144324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144320u;
            // 0x144324: 0xafa00068  sw          $zero, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144328u; }
        if (ctx->pc != 0x144328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144328u; }
        if (ctx->pc != 0x144328u) { return; }
    }
    ctx->pc = 0x144328u;
label_144328:
    // 0x144328: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x144328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x14432c: 0x24032ee0  addiu       $v1, $zero, 0x2EE0
    ctx->pc = 0x14432cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12000));
    // 0x144330: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x144330u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x144334: 0x0  nop
    ctx->pc = 0x144334u;
    // NOP
    // 0x144338: 0x0  nop
    ctx->pc = 0x144338u;
    // NOP
    // 0x14433c: 0x1810  mfhi        $v1
    ctx->pc = 0x14433cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x144340: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x144340u;
    {
        const bool branch_taken_0x144340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x144340) {
            ctx->pc = 0x144380u;
            goto label_144380;
        }
    }
    ctx->pc = 0x144348u;
    // 0x144348: 0x3c02c6bb  lui         $v0, 0xC6BB
    ctx->pc = 0x144348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50875 << 16));
    // 0x14434c: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x14434cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x144350: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x144350u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)32768u)));
    // 0x144354: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x144354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x144358: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x144358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x14435c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x14435cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x144360: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x144360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x144364: 0x24e74500  addiu       $a3, $a3, 0x4500
    ctx->pc = 0x144364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17664));
    // 0x144368: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x144368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x14436c: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x14436cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x144370: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x144370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x144374: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x144374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x144378: 0xc0520cc  jal         func_148330
    ctx->pc = 0x144378u;
    SET_GPR_U32(ctx, 31, 0x144380u);
    ctx->pc = 0x14437Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144378u;
            // 0x14437c: 0xafa00068  sw          $zero, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144380u; }
        if (ctx->pc != 0x144380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144380u; }
        if (ctx->pc != 0x144380u) { return; }
    }
    ctx->pc = 0x144380u;
label_144380:
    // 0x144380: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x144380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x144384: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x144384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x144388: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x144388u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x14438c: 0x0  nop
    ctx->pc = 0x14438cu;
    // NOP
    // 0x144390: 0x0  nop
    ctx->pc = 0x144390u;
    // NOP
    // 0x144394: 0x1810  mfhi        $v1
    ctx->pc = 0x144394u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x144398: 0x1460004d  bnez        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x144398u;
    {
        const bool branch_taken_0x144398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x144398) {
            ctx->pc = 0x1444D0u;
            goto label_1444d0;
        }
    }
    ctx->pc = 0x1443A0u;
    // 0x1443a0: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x1443a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x1443a4: 0x27b20054  addiu       $s2, $sp, 0x54
    ctx->pc = 0x1443a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1443a8: 0x3c02c5fa  lui         $v0, 0xC5FA
    ctx->pc = 0x1443a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50682 << 16));
    // 0x1443ac: 0x27b10058  addiu       $s1, $sp, 0x58
    ctx->pc = 0x1443acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1443b0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1443b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1443b4: 0x27b00064  addiu       $s0, $sp, 0x64
    ctx->pc = 0x1443b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1443b8: 0x3c02bf47  lui         $v0, 0xBF47
    ctx->pc = 0x1443b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48967 << 16));
    // 0x1443bc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1443bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1443c0: 0x3442ae14  ori         $v0, $v0, 0xAE14
    ctx->pc = 0x1443c0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)44564u)));
    // 0x1443c4: 0x27b30068  addiu       $s3, $sp, 0x68
    ctx->pc = 0x1443c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1443c8: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x1443c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x1443cc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1443ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1443d0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1443D0u;
    SET_GPR_U32(ctx, 31, 0x1443D8u);
    ctx->pc = 0x1443D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1443D0u;
            // 0x1443d4: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1443D8u; }
        if (ctx->pc != 0x1443D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1443D8u; }
        if (ctx->pc != 0x1443D8u) { return; }
    }
    ctx->pc = 0x1443D8u;
    // 0x1443d8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1443d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1443dc: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1443dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1443e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1443e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1443e4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1443e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1443e8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1443e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1443ec: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1443ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1443f0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1443f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1443f4: 0x24e74620  addiu       $a3, $a3, 0x4620
    ctx->pc = 0x1443f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17952));
    // 0x1443f8: 0xc0520cc  jal         func_148330
    ctx->pc = 0x1443F8u;
    SET_GPR_U32(ctx, 31, 0x144400u);
    ctx->pc = 0x1443FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1443F8u;
            // 0x1443fc: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144400u; }
        if (ctx->pc != 0x144400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144400u; }
        if (ctx->pc != 0x144400u) { return; }
    }
    ctx->pc = 0x144400u;
    // 0x144400: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x144400u;
    SET_GPR_U32(ctx, 31, 0x144408u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144408u; }
        if (ctx->pc != 0x144408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144408u; }
        if (ctx->pc != 0x144408u) { return; }
    }
    ctx->pc = 0x144408u;
    // 0x144408: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x144408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x14440c: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x14440cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x144410: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x144410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x144414: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x144414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x144418: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x144418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14441c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x14441cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x144420: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x144420u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x144424: 0x24e74620  addiu       $a3, $a3, 0x4620
    ctx->pc = 0x144424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17952));
    // 0x144428: 0xc0520cc  jal         func_148330
    ctx->pc = 0x144428u;
    SET_GPR_U32(ctx, 31, 0x144430u);
    ctx->pc = 0x14442Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144428u;
            // 0x14442c: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144430u; }
        if (ctx->pc != 0x144430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144430u; }
        if (ctx->pc != 0x144430u) { return; }
    }
    ctx->pc = 0x144430u;
    // 0x144430: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x144430u;
    SET_GPR_U32(ctx, 31, 0x144438u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144438u; }
        if (ctx->pc != 0x144438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144438u; }
        if (ctx->pc != 0x144438u) { return; }
    }
    ctx->pc = 0x144438u;
    // 0x144438: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x144438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x14443c: 0x3c03c5fa  lui         $v1, 0xC5FA
    ctx->pc = 0x14443cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50682 << 16));
    // 0x144440: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x144440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x144444: 0x0  nop
    ctx->pc = 0x144444u;
    // NOP
    // 0x144448: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x144448u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14444c: 0x3c02bf47  lui         $v0, 0xBF47
    ctx->pc = 0x14444cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48967 << 16));
    // 0x144450: 0x3442ae14  ori         $v0, $v0, 0xAE14
    ctx->pc = 0x144450u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)44564u)));
    // 0x144454: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x144454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x144458: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x144458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x14445c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x14445cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x144460: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x144460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x144464: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x144464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x144468: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x144468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14446c: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x14446Cu;
    SET_GPR_U32(ctx, 31, 0x144474u);
    ctx->pc = 0x144470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14446Cu;
            // 0x144470: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144474u; }
        if (ctx->pc != 0x144474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144474u; }
        if (ctx->pc != 0x144474u) { return; }
    }
    ctx->pc = 0x144474u;
    // 0x144474: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x144474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x144478: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x144478u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x14447c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14447cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x144480: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x144480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x144484: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x144484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x144488: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x144488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14448c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x14448cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x144490: 0x24e745c0  addiu       $a3, $a3, 0x45C0
    ctx->pc = 0x144490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17856));
    // 0x144494: 0xc0520cc  jal         func_148330
    ctx->pc = 0x144494u;
    SET_GPR_U32(ctx, 31, 0x14449Cu);
    ctx->pc = 0x144498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144494u;
            // 0x144498: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14449Cu; }
        if (ctx->pc != 0x14449Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14449Cu; }
        if (ctx->pc != 0x14449Cu) { return; }
    }
    ctx->pc = 0x14449Cu;
    // 0x14449c: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x14449Cu;
    SET_GPR_U32(ctx, 31, 0x1444A4u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1444A4u; }
        if (ctx->pc != 0x1444A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1444A4u; }
        if (ctx->pc != 0x1444A4u) { return; }
    }
    ctx->pc = 0x1444A4u;
    // 0x1444a4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1444a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1444a8: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1444a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1444ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1444acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1444b0: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1444b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1444b4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1444b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1444b8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1444b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1444bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1444bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1444c0: 0x24e745c0  addiu       $a3, $a3, 0x45C0
    ctx->pc = 0x1444c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17856));
    // 0x1444c4: 0xc0520cc  jal         func_148330
    ctx->pc = 0x1444C4u;
    SET_GPR_U32(ctx, 31, 0x1444CCu);
    ctx->pc = 0x1444C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1444C4u;
            // 0x1444c8: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1444CCu; }
        if (ctx->pc != 0x1444CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1444CCu; }
        if (ctx->pc != 0x1444CCu) { return; }
    }
    ctx->pc = 0x1444CCu;
    // 0x1444cc: 0x0  nop
    ctx->pc = 0x1444ccu;
    // NOP
label_1444d0:
    // 0x1444d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1444d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1444d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1444d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1444d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1444d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1444dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1444dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1444e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1444e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1444e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1444E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1444E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1444E4u;
            // 0x1444e8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144328u: goto label_144328;
            case 0x144380u: goto label_144380;
            case 0x1444D0u: goto label_1444d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1444ECu;
}
