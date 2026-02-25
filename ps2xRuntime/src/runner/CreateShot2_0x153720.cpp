#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateShot2
// Address: 0x153720 - 0x153a58
void CreateShot2_0x153720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateShot2_0x153720");
#endif

    ctx->pc = 0x153720u;

    // 0x153720: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x153720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x153724: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x153724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x153728: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x153728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15372c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15372cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x153730: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x153730u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153734: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x153734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x153738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15373c: 0xc055048  jal         func_154120
    ctx->pc = 0x15373Cu;
    SET_GPR_U32(ctx, 31, 0x153744u);
    ctx->pc = 0x153740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15373Cu;
            // 0x153740: 0x26250001  addiu       $a1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154120u;
    if (runtime->hasFunction(0x154120u)) {
        auto targetFn = runtime->lookupFunction(0x154120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153744u; }
        if (ctx->pc != 0x153744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateMzlFlash_0x154120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153744u; }
        if (ctx->pc != 0x153744u) { return; }
    }
    ctx->pc = 0x153744u;
    // 0x153744: 0x3c0238e3  lui         $v0, 0x38E3
    ctx->pc = 0x153744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14563 << 16));
    // 0x153748: 0x111fc2  srl         $v1, $s1, 31
    ctx->pc = 0x153748u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
    // 0x15374c: 0x34428e39  ori         $v0, $v0, 0x8E39
    ctx->pc = 0x15374cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)36409u)));
    // 0x153750: 0x510018  mult        $zero, $v0, $s1
    ctx->pc = 0x153750u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x153754: 0x0  nop
    ctx->pc = 0x153754u;
    // NOP
    // 0x153758: 0x0  nop
    ctx->pc = 0x153758u;
    // NOP
    // 0x15375c: 0x1010  mfhi        $v0
    ctx->pc = 0x15375cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x153760: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x153760u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x153764: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x153764u;
    SET_GPR_U32(ctx, 31, 0x15376Cu);
    ctx->pc = 0x153768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153764u;
            // 0x153768: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15376Cu; }
        if (ctx->pc != 0x15376Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15376Cu; }
        if (ctx->pc != 0x15376Cu) { return; }
    }
    ctx->pc = 0x15376Cu;
    // 0x15376c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x15376cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x153770: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x153770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x153774: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x153774u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x153778: 0x8e440098  lw          $a0, 0x98($s2)
    ctx->pc = 0x153778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x15377c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x15377cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x153780: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x153780u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x153784: 0x8e44009c  lw          $a0, 0x9C($s2)
    ctx->pc = 0x153784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x153788: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x153788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x15378c: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x15378cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x153790: 0x8e4400a4  lw          $a0, 0xA4($s2)
    ctx->pc = 0x153790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x153794: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x153794u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x153798: 0x0  nop
    ctx->pc = 0x153798u;
    // NOP
    // 0x15379c: 0x0  nop
    ctx->pc = 0x15379cu;
    // NOP
    // 0x1537a0: 0x2010  mfhi        $a0
    ctx->pc = 0x1537a0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1537a4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1537A4u;
    {
        const bool branch_taken_0x1537a4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1537A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1537A4u;
            // 0x1537a8: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1537a4) {
            ctx->pc = 0x1537B4u;
            goto label_1537b4;
        }
    }
    ctx->pc = 0x1537ACu;
    // 0x1537ac: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1537acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1537b0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1537b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_1537b4:
    // 0x1537b4: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1537b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1537b8: 0x8e4400a4  lw          $a0, 0xA4($s2)
    ctx->pc = 0x1537b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x1537bc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1537bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1537c0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1537c0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1537c4: 0x0  nop
    ctx->pc = 0x1537c4u;
    // NOP
    // 0x1537c8: 0x0  nop
    ctx->pc = 0x1537c8u;
    // NOP
    // 0x1537cc: 0x2010  mfhi        $a0
    ctx->pc = 0x1537ccu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1537d0: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1537D0u;
    {
        const bool branch_taken_0x1537d0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1537D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1537D0u;
            // 0x1537d4: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1537d0) {
            ctx->pc = 0x1537E0u;
            goto label_1537e0;
        }
    }
    ctx->pc = 0x1537D8u;
    // 0x1537d8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1537d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1537dc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1537dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_1537e0:
    // 0x1537e0: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1537e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x1537e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1537e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1537e8: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1537e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1537ec: 0xac440030  sw          $a0, 0x30($v0)
    ctx->pc = 0x1537ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 4));
    // 0x1537f0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1537f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1537f4: 0x8e4400a4  lw          $a0, 0xA4($s2)
    ctx->pc = 0x1537f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x1537f8: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1537f8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1537fc: 0x0  nop
    ctx->pc = 0x1537fcu;
    // NOP
    // 0x153800: 0x0  nop
    ctx->pc = 0x153800u;
    // NOP
    // 0x153804: 0x2010  mfhi        $a0
    ctx->pc = 0x153804u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x153808: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x153808u;
    {
        const bool branch_taken_0x153808 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x15380Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153808u;
            // 0x15380c: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153808) {
            ctx->pc = 0x153818u;
            goto label_153818;
        }
    }
    ctx->pc = 0x153810u;
    // 0x153810: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x153810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x153814: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x153814u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_153818:
    // 0x153818: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x153818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x15381c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15381cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x153820: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x153820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x153824: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x153824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x153828: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x153828u;
    SET_GPR_U32(ctx, 31, 0x153830u);
    ctx->pc = 0x15382Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153828u;
            // 0x15382c: 0xac43003c  sw          $v1, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153830u; }
        if (ctx->pc != 0x153830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153830u; }
        if (ctx->pc != 0x153830u) { return; }
    }
    ctx->pc = 0x153830u;
    // 0x153830: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x153830u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x153834: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x153834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x153838: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x153838u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x15383c: 0x8e440098  lw          $a0, 0x98($s2)
    ctx->pc = 0x15383cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x153840: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x153840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x153844: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x153844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x153848: 0x8e44009c  lw          $a0, 0x9C($s2)
    ctx->pc = 0x153848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x15384c: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x15384cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x153850: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x153850u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x153854: 0x8e4400a4  lw          $a0, 0xA4($s2)
    ctx->pc = 0x153854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x153858: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x153858u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x15385c: 0x0  nop
    ctx->pc = 0x15385cu;
    // NOP
    // 0x153860: 0x0  nop
    ctx->pc = 0x153860u;
    // NOP
    // 0x153864: 0x1810  mfhi        $v1
    ctx->pc = 0x153864u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x153868: 0x32023  negu        $a0, $v1
    ctx->pc = 0x153868u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x15386c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15386Cu;
    {
        const bool branch_taken_0x15386c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x153870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15386Cu;
            // 0x153870: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15386c) {
            ctx->pc = 0x15387Cu;
            goto label_15387c;
        }
    }
    ctx->pc = 0x153874u;
    // 0x153874: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x153874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x153878: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x153878u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_15387c:
    // 0x15387c: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x15387cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x153880: 0x8e4400a4  lw          $a0, 0xA4($s2)
    ctx->pc = 0x153880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x153884: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x153884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x153888: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x153888u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x15388c: 0x0  nop
    ctx->pc = 0x15388cu;
    // NOP
    // 0x153890: 0x0  nop
    ctx->pc = 0x153890u;
    // NOP
    // 0x153894: 0x2010  mfhi        $a0
    ctx->pc = 0x153894u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x153898: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x153898u;
    {
        const bool branch_taken_0x153898 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x15389Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153898u;
            // 0x15389c: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153898) {
            ctx->pc = 0x1538A8u;
            goto label_1538a8;
        }
    }
    ctx->pc = 0x1538A0u;
    // 0x1538a0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1538a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1538a4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1538a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_1538a8:
    // 0x1538a8: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1538a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x1538ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1538acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1538b0: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1538b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1538b4: 0xac440030  sw          $a0, 0x30($v0)
    ctx->pc = 0x1538b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 4));
    // 0x1538b8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1538b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1538bc: 0x8e4400a4  lw          $a0, 0xA4($s2)
    ctx->pc = 0x1538bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x1538c0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1538c0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1538c4: 0x0  nop
    ctx->pc = 0x1538c4u;
    // NOP
    // 0x1538c8: 0x0  nop
    ctx->pc = 0x1538c8u;
    // NOP
    // 0x1538cc: 0x1810  mfhi        $v1
    ctx->pc = 0x1538ccu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1538d0: 0x32023  negu        $a0, $v1
    ctx->pc = 0x1538d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1538d4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1538D4u;
    {
        const bool branch_taken_0x1538d4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1538D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1538D4u;
            // 0x1538d8: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1538d4) {
            ctx->pc = 0x1538E4u;
            goto label_1538e4;
        }
    }
    ctx->pc = 0x1538DCu;
    // 0x1538dc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1538dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1538e0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1538e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_1538e4:
    // 0x1538e4: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x1538e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x1538e8: 0x2a010004  slti        $at, $s0, 0x4
    ctx->pc = 0x1538e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1538ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1538ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1538f0: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x1538f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x1538f4: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1538f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1538f8: 0x10200051  beqz        $at, . + 4 + (0x51 << 2)
    ctx->pc = 0x1538F8u;
    {
        const bool branch_taken_0x1538f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1538FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1538F8u;
            // 0x1538fc: 0xac43003c  sw          $v1, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1538f8) {
            ctx->pc = 0x153A40u;
            goto label_153a40;
        }
    }
    ctx->pc = 0x153900u;
    // 0x153900: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x153900u;
    SET_GPR_U32(ctx, 31, 0x153908u);
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153908u; }
        if (ctx->pc != 0x153908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153908u; }
        if (ctx->pc != 0x153908u) { return; }
    }
    ctx->pc = 0x153908u;
    // 0x153908: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x153908u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x15390c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x15390cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x153910: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x153910u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x153914: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x153914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153918: 0x8e460098  lw          $a2, 0x98($s2)
    ctx->pc = 0x153918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x15391c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x15391cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x153920: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x153920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x153924: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x153924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x153928: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x153928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x15392c: 0x8e46009c  lw          $a2, 0x9C($s2)
    ctx->pc = 0x15392cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x153930: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x153930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x153934: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x153934u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x153938: 0x8e4600a4  lw          $a2, 0xA4($s2)
    ctx->pc = 0x153938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x15393c: 0xc7001a  div         $zero, $a2, $a3
    ctx->pc = 0x15393cu;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x153940: 0x0  nop
    ctx->pc = 0x153940u;
    // NOP
    // 0x153944: 0x0  nop
    ctx->pc = 0x153944u;
    // NOP
    // 0x153948: 0x3010  mfhi        $a2
    ctx->pc = 0x153948u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x15394c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x15394cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x153950: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x153950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
    // 0x153954: 0x8e4600a4  lw          $a2, 0xA4($s2)
    ctx->pc = 0x153954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x153958: 0xc7001a  div         $zero, $a2, $a3
    ctx->pc = 0x153958u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x15395c: 0x0  nop
    ctx->pc = 0x15395cu;
    // NOP
    // 0x153960: 0x0  nop
    ctx->pc = 0x153960u;
    // NOP
    // 0x153964: 0x3010  mfhi        $a2
    ctx->pc = 0x153964u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x153968: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x153968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x15396c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x15396cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x153970: 0xac460014  sw          $a2, 0x14($v0)
    ctx->pc = 0x153970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 6));
    // 0x153974: 0xac450030  sw          $a1, 0x30($v0)
    ctx->pc = 0x153974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 5));
    // 0x153978: 0x8e4500a4  lw          $a1, 0xA4($s2)
    ctx->pc = 0x153978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x15397c: 0xa7001a  div         $zero, $a1, $a3
    ctx->pc = 0x15397cu;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x153980: 0x0  nop
    ctx->pc = 0x153980u;
    // NOP
    // 0x153984: 0x0  nop
    ctx->pc = 0x153984u;
    // NOP
    // 0x153988: 0x2810  mfhi        $a1
    ctx->pc = 0x153988u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x15398c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x15398cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x153990: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x153990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
    // 0x153994: 0xac440034  sw          $a0, 0x34($v0)
    ctx->pc = 0x153994u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 4));
    // 0x153998: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x153998u;
    SET_GPR_U32(ctx, 31, 0x1539A0u);
    ctx->pc = 0x15399Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153998u;
            // 0x15399c: 0xac43003c  sw          $v1, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1539A0u; }
        if (ctx->pc != 0x1539A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1539A0u; }
        if (ctx->pc != 0x1539A0u) { return; }
    }
    ctx->pc = 0x1539A0u;
    // 0x1539a0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1539a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1539a4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1539a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1539a8: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1539a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1539ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1539acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1539b0: 0x8e460098  lw          $a2, 0x98($s2)
    ctx->pc = 0x1539b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x1539b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1539b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1539b8: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1539b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1539bc: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x1539bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x1539c0: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1539c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x1539c4: 0x8e46009c  lw          $a2, 0x9C($s2)
    ctx->pc = 0x1539c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x1539c8: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x1539c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x1539cc: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x1539ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x1539d0: 0x8e4600a4  lw          $a2, 0xA4($s2)
    ctx->pc = 0x1539d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x1539d4: 0xc7001a  div         $zero, $a2, $a3
    ctx->pc = 0x1539d4u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1539d8: 0x0  nop
    ctx->pc = 0x1539d8u;
    // NOP
    // 0x1539dc: 0x0  nop
    ctx->pc = 0x1539dcu;
    // NOP
    // 0x1539e0: 0x3010  mfhi        $a2
    ctx->pc = 0x1539e0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1539e4: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1539e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1539e8: 0x63023  negu        $a2, $a2
    ctx->pc = 0x1539e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x1539ec: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x1539ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
    // 0x1539f0: 0x8e4600a4  lw          $a2, 0xA4($s2)
    ctx->pc = 0x1539f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x1539f4: 0xc7001a  div         $zero, $a2, $a3
    ctx->pc = 0x1539f4u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1539f8: 0x0  nop
    ctx->pc = 0x1539f8u;
    // NOP
    // 0x1539fc: 0x0  nop
    ctx->pc = 0x1539fcu;
    // NOP
    // 0x153a00: 0x3010  mfhi        $a2
    ctx->pc = 0x153a00u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x153a04: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x153a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x153a08: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x153a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x153a0c: 0xac460014  sw          $a2, 0x14($v0)
    ctx->pc = 0x153a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 6));
    // 0x153a10: 0xac450030  sw          $a1, 0x30($v0)
    ctx->pc = 0x153a10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 5));
    // 0x153a14: 0x8e4500a4  lw          $a1, 0xA4($s2)
    ctx->pc = 0x153a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x153a18: 0xa7001a  div         $zero, $a1, $a3
    ctx->pc = 0x153a18u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x153a1c: 0x0  nop
    ctx->pc = 0x153a1cu;
    // NOP
    // 0x153a20: 0x0  nop
    ctx->pc = 0x153a20u;
    // NOP
    // 0x153a24: 0x2810  mfhi        $a1
    ctx->pc = 0x153a24u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x153a28: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x153a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x153a2c: 0x52823  negu        $a1, $a1
    ctx->pc = 0x153a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x153a30: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x153a30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
    // 0x153a34: 0xac440034  sw          $a0, 0x34($v0)
    ctx->pc = 0x153a34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 4));
    // 0x153a38: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x153a38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x153a3c: 0x0  nop
    ctx->pc = 0x153a3cu;
    // NOP
label_153a40:
    // 0x153a40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x153a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x153a44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x153a44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153a48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x153a48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153a4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x153a4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153a50: 0x3e00008  jr          $ra
    ctx->pc = 0x153A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153A50u;
            // 0x153a54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1537B4u: goto label_1537b4;
            case 0x1537E0u: goto label_1537e0;
            case 0x153818u: goto label_153818;
            case 0x15387Cu: goto label_15387c;
            case 0x1538A8u: goto label_1538a8;
            case 0x1538E4u: goto label_1538e4;
            case 0x153A40u: goto label_153a40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x153A58u;
}
