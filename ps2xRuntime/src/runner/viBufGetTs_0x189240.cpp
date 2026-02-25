#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: viBufGetTs
// Address: 0x189240 - 0x189414
void viBufGetTs_0x189240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("viBufGetTs_0x189240");
#endif

    ctx->pc = 0x189240u;

    // 0x189240: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x189240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x189244: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x189244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x189248: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x189248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x18924c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x18924cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x189250: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x189250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x189254: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x189254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x189258: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x189258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18925c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x18925cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189260: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x189260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x189264: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x189264u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189268: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x189268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18926c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18926cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x189270: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x189270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x189274: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x189274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x189278: 0x8c32b410  lw          $s2, -0x4BF0($at)
    ctx->pc = 0x189278u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947856)));
    // 0x18927c: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x18927cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x189280: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x189280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x189284: 0x8c302020  lw          $s0, 0x2020($at)
    ctx->pc = 0x189284u;
    SET_GPR_S32(ctx, 16, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8224))); // MMIO: 0x10002020
    // 0x189288: 0xc04bb28  jal         func_12ECA0
    ctx->pc = 0x189288u;
    SET_GPR_U32(ctx, 31, 0x189290u);
    ctx->pc = 0x18928Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189288u;
            // 0x18928c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12ECA0u;
    if (runtime->hasFunction(0x12ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x12ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189290u; }
        if (ctx->pc != 0x189290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x12eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189290u; }
        if (ctx->pc != 0x189290u) { return; }
    }
    ctx->pc = 0x189290u;
    // 0x189290: 0x8ec60038  lw          $a2, 0x38($s6)
    ctx->pc = 0x189290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 56)));
    // 0x189294: 0x101c02  srl         $v1, $s0, 16
    ctx->pc = 0x189294u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
    // 0x189298: 0x101202  srl         $v0, $s0, 8
    ctx->pc = 0x189298u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x18929c: 0x8ec50008  lw          $a1, 0x8($s6)
    ctx->pc = 0x18929cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x1892a0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1892a0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)3u)));
    // 0x1892a4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1892a4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)15u)));
    // 0x1892a8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1892a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1892ac: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1892acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1892b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1892b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1892b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1892b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1892b8: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x1892b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1892bc: 0x30c2007f  andi        $v0, $a2, 0x7F
    ctx->pc = 0x1892bcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)127u)));
    // 0x1892c0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1892c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1892c4: 0xfea40000  sd          $a0, 0x0($s5)
    ctx->pc = 0x1892c4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 4));
    // 0x1892c8: 0x5a2c0  sll         $s4, $a1, 11
    ctx->pc = 0x1892c8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    // 0x1892cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1892ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1892d0: 0xfea40008  sd          $a0, 0x8($s5)
    ctx->pc = 0x1892d0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 4));
    // 0x1892d4: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x1892d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1892d8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1892d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1892dc: 0x8ed20058  lw          $s2, 0x58($s6)
    ctx->pc = 0x1892dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 88)));
    // 0x1892e0: 0x8ec4005c  lw          $a0, 0x5C($s6)
    ctx->pc = 0x1892e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 92)));
    // 0x1892e4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1892e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1892e8: 0x54001b  divu        $zero, $v0, $s4
    ctx->pc = 0x1892e8u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1892ec: 0x0  nop
    ctx->pc = 0x1892ecu;
    // NOP
    // 0x1892f0: 0x0  nop
    ctx->pc = 0x1892f0u;
    // NOP
    // 0x1892f4: 0xf010  mfhi        $fp
    ctx->pc = 0x1892f4u;
    SET_GPR_U64(ctx, 30, ctx->hi);
    // 0x1892f8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1892F8u;
    {
        const bool branch_taken_0x1892f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1892FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1892F8u;
            // 0x1892fc: 0x92b823  subu        $s7, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1892f8) {
            ctx->pc = 0x1893C0u;
            goto label_1893c0;
        }
    }
    ctx->pc = 0x189300u;
label_189300:
    // 0x189300: 0x8ec50054  lw          $a1, 0x54($s6)
    ctx->pc = 0x189300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 84)));
    // 0x189304: 0x8ec20050  lw          $v0, 0x50($s6)
    ctx->pc = 0x189304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 80)));
    // 0x189308: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x189308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18930c: 0xb71821  addu        $v1, $a1, $s7
    ctx->pc = 0x18930cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x189310: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x189310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x189314: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x189314u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x189318: 0x0  nop
    ctx->pc = 0x189318u;
    // NOP
    // 0x18931c: 0x0  nop
    ctx->pc = 0x18931cu;
    // NOP
    // 0x189320: 0x2810  mfhi        $a1
    ctx->pc = 0x189320u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x189324: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x189324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x189328: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x189328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18932c: 0x380c0  sll         $s0, $v1, 3
    ctx->pc = 0x18932cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x189330: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x189330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x189334: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x189334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x189338: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x189338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x18933c: 0xc062508  jal         func_189420
    ctx->pc = 0x18933Cu;
    SET_GPR_U32(ctx, 31, 0x189344u);
    ctx->pc = 0x189340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18933Cu;
            // 0x189340: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189420u;
    if (runtime->hasFunction(0x189420u)) {
        auto targetFn = runtime->lookupFunction(0x189420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189344u; }
        if (ctx->pc != 0x189344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsPtsInRegion_0x189420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189344u; }
        if (ctx->pc != 0x189344u) { return; }
    }
    ctx->pc = 0x189344u;
    // 0x189344: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x189344u;
    {
        const bool branch_taken_0x189344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189344) {
            ctx->pc = 0x1893B8u;
            goto label_1893b8;
        }
    }
    ctx->pc = 0x18934Cu;
    // 0x18934c: 0x8ec20050  lw          $v0, 0x50($s6)
    ctx->pc = 0x18934cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 80)));
    // 0x189350: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x189350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x189354: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x189354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x189358: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x189358u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18935c: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x18935cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x189360: 0x8ec20050  lw          $v0, 0x50($s6)
    ctx->pc = 0x189360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 80)));
    // 0x189364: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x189364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x189368: 0xdc420008  ld          $v0, 0x8($v0)
    ctx->pc = 0x189368u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18936c: 0xfea20008  sd          $v0, 0x8($s5)
    ctx->pc = 0x18936cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 2));
    // 0x189370: 0x8ec20050  lw          $v0, 0x50($s6)
    ctx->pc = 0x189370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 80)));
    // 0x189374: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x189374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x189378: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x189378u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18937c: 0x8ec20050  lw          $v0, 0x50($s6)
    ctx->pc = 0x18937cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 80)));
    // 0x189380: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x189380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x189384: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x189384u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x189388: 0x8ec30058  lw          $v1, 0x58($s6)
    ctx->pc = 0x189388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 88)));
    // 0x18938c: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18938Cu;
    {
        const bool branch_taken_0x18938c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x189390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18938Cu;
            // 0x189390: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18938c) {
            ctx->pc = 0x1893A0u;
            goto label_1893a0;
        }
    }
    ctx->pc = 0x189394u;
    // 0x189394: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x189394u;
    {
        const bool branch_taken_0x189394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189394) {
            ctx->pc = 0x1893A8u;
            goto label_1893a8;
        }
    }
    ctx->pc = 0x18939Cu;
    // 0x18939c: 0x0  nop
    ctx->pc = 0x18939cu;
    // NOP
label_1893a0:
    // 0x1893a0: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x1893a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1893a4: 0x0  nop
    ctx->pc = 0x1893a4u;
    // NOP
label_1893a8:
    // 0x1893a8: 0x8ec20058  lw          $v0, 0x58($s6)
    ctx->pc = 0x1893a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 88)));
    // 0x1893ac: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1893acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1893b0: 0xaec20058  sw          $v0, 0x58($s6)
    ctx->pc = 0x1893b0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 88), GPR_U32(ctx, 2));
    // 0x1893b4: 0x0  nop
    ctx->pc = 0x1893b4u;
    // NOP
label_1893b8:
    // 0x1893b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1893b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1893bc: 0x0  nop
    ctx->pc = 0x1893bcu;
    // NOP
label_1893c0:
    // 0x1893c0: 0x232082a  slt         $at, $s1, $s2
    ctx->pc = 0x1893c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1893c4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1893C4u;
    {
        const bool branch_taken_0x1893c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1893c4) {
            ctx->pc = 0x1893D8u;
            goto label_1893d8;
        }
    }
    ctx->pc = 0x1893CCu;
    // 0x1893cc: 0x1260ffcc  beqz        $s3, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1893CCu;
    {
        const bool branch_taken_0x1893cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1893cc) {
            ctx->pc = 0x189300u;
            goto label_189300;
        }
    }
    ctx->pc = 0x1893D4u;
    // 0x1893d4: 0x0  nop
    ctx->pc = 0x1893d4u;
    // NOP
label_1893d8:
    // 0x1893d8: 0xc04bb20  jal         func_12EC80
    ctx->pc = 0x1893D8u;
    SET_GPR_U32(ctx, 31, 0x1893E0u);
    ctx->pc = 0x1893DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1893D8u;
            // 0x1893dc: 0x8ec40040  lw          $a0, 0x40($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC80u;
    if (runtime->hasFunction(0x12EC80u)) {
        auto targetFn = runtime->lookupFunction(0x12EC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1893E0u; }
        if (ctx->pc != 0x1893E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x12ec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1893E0u; }
        if (ctx->pc != 0x1893E0u) { return; }
    }
    ctx->pc = 0x1893E0u;
    // 0x1893e0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1893e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1893e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1893e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1893e8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1893e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1893ec: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1893ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1893f0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1893f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1893f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1893f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1893f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1893f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1893fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1893fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189400: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x189400u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189404: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x189404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189408: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x189408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18940c: 0x3e00008  jr          $ra
    ctx->pc = 0x18940Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18940Cu;
            // 0x189410: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189300u: goto label_189300;
            case 0x1893A0u: goto label_1893a0;
            case 0x1893A8u: goto label_1893a8;
            case 0x1893B8u: goto label_1893b8;
            case 0x1893C0u: goto label_1893c0;
            case 0x1893D8u: goto label_1893d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x189414u;
}
