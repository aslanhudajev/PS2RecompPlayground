#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _nextBit
// Address: 0x128298 - 0x1283e8
void _nextBit_0x128298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_nextBit_0x128298");
#endif

    ctx->pc = 0x128298u;

    // 0x128298: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x128298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12829c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x12829cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1282a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1282a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1282a4: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x1282a4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8208u)));
    // 0x1282a8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1282a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1282ac: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x1282acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x1282b0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1282b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1282b4: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x1282b4u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)16384u)));
    // 0x1282b8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1282b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1282bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1282bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1282c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1282c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1282c4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1282c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1282c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1282c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1282cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1282ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1282d0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1282d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1282d4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1282d4u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x1282d8: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1282D8u;
    {
        const bool branch_taken_0x1282d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1282DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1282D8u;
            // 0x1282dc: 0x3c130021  lui         $s3, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1282d8) {
            ctx->pc = 0x12832Cu;
            goto label_12832c;
        }
    }
    ctx->pc = 0x1282E0u;
    // 0x1282e0: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1282e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1282e4: 0x0  nop
    ctx->pc = 0x1282e4u;
    // NOP
label_1282e8:
    // 0x1282e8: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x1282e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x1282ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1282ECu;
    {
        const bool branch_taken_0x1282ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1282F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1282ECu;
            // 0x1282f0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1282ec) {
            ctx->pc = 0x128300u;
            goto label_128300;
        }
    }
    ctx->pc = 0x1282F4u;
    // 0x1282f4: 0xc04ae14  jal         func_12B850
    ctx->pc = 0x1282F4u;
    SET_GPR_U32(ctx, 31, 0x1282FCu);
    ctx->pc = 0x1282F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1282F4u;
            // 0x1282f8: 0x8e240858  lw          $a0, 0x858($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B850u;
    if (runtime->hasFunction(0x12B850u)) {
        auto targetFn = runtime->lookupFunction(0x12B850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1282FCu; }
        if (ctx->pc != 0x1282FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x12b850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1282FCu; }
        if (ctx->pc != 0x1282FCu) { return; }
    }
    ctx->pc = 0x1282FCu;
    // 0x1282fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1282fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_128300:
    // 0x128300: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x128300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x128304: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x128304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x128308: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x128308u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8208u)));
    // 0x12830c: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x12830cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)16384u)));
    // 0x128310: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x128310u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x128314: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x128314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x128318: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x128318u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x12831c: 0x1045fff2  beq         $v0, $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x12831Cu;
    {
        const bool branch_taken_0x12831c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x128320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12831Cu;
            // 0x128320: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12831c) {
            ctx->pc = 0x1282E8u;
            goto label_1282e8;
        }
    }
    ctx->pc = 0x128324u;
    // 0x128324: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x128324u;
    {
        const bool branch_taken_0x128324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128324u;
            // 0x128328: 0x8e220818  lw          $v0, 0x818($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128324) {
            ctx->pc = 0x128330u;
            goto label_128330;
        }
    }
    ctx->pc = 0x12832Cu;
label_12832c:
    // 0x12832c: 0x8e220818  lw          $v0, 0x818($s1)
    ctx->pc = 0x12832cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2072)));
label_128330:
    // 0x128330: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x128330u;
    {
        const bool branch_taken_0x128330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128330u;
            // 0x128334: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128330) {
            ctx->pc = 0x128348u;
            goto label_128348;
        }
    }
    ctx->pc = 0x128338u;
    // 0x128338: 0x8e22083c  lw          $v0, 0x83C($s1)
    ctx->pc = 0x128338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2108)));
    // 0x12833c: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x12833cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x128340: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x128340u;
    {
        const bool branch_taken_0x128340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128340u;
            // 0x128344: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128340) {
            ctx->pc = 0x128374u;
            goto label_128374;
        }
    }
    ctx->pc = 0x128348u;
label_128348:
    // 0x128348: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x128348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x12834c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x12834cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8192u)));
    // 0x128350: 0x26650180  addiu       $a1, $s3, 0x180
    ctx->pc = 0x128350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x128354: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x128354u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x128358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x128358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12835c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x12835cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x128360: 0xc049f9e  jal         func_127E78
    ctx->pc = 0x128360u;
    SET_GPR_U32(ctx, 31, 0x128368u);
    ctx->pc = 0x128364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128360u;
            // 0x128364: 0xae220818  sw          $v0, 0x818($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127E78u;
    if (runtime->hasFunction(0x127E78u)) {
        auto targetFn = runtime->lookupFunction(0x127E78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128368u; }
        if (ctx->pc != 0x128368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle64_0x127e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128368u; }
        if (ctx->pc != 0x128368u) { return; }
    }
    ctx->pc = 0x128368u;
    // 0x128368: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x128368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12836c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12836cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x128370: 0xae220838  sw          $v0, 0x838($s1)
    ctx->pc = 0x128370u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2104), GPR_U32(ctx, 2));
label_128374:
    // 0x128374: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x128374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x128378: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x128378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x12837c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x12837cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x128380: 0x2442025  or          $a0, $s2, $a0
    ctx->pc = 0x128380u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 18), GPR_VEC(ctx, 4)));
    // 0x128384: 0xae25083c  sw          $a1, 0x83C($s1)
    ctx->pc = 0x128384u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2108), GPR_U32(ctx, 5));
    // 0x128388: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x128388u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8192u)));
    // 0x12838c: 0x8e300838  lw          $s0, 0x838($s1)
    ctx->pc = 0x12838cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2104)));
    // 0x128390: 0x41f02  srl         $v1, $a0, 28
    ctx->pc = 0x128390u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 28));
    // 0x128394: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x128394u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x128398: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x128398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12839c: 0x26620180  addiu       $v0, $s3, 0x180
    ctx->pc = 0x12839cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x1283a0: 0xb22823  subu        $a1, $a1, $s2
    ctx->pc = 0x1283a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x1283a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1283a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1283a8: 0xb08006  srlv        $s0, $s0, $a1
    ctx->pc = 0x1283a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 5) & 0x1F));
    // 0x1283ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1283acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1283b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1283b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1283b4: 0xc049f9e  jal         func_127E78
    ctx->pc = 0x1283B4u;
    SET_GPR_U32(ctx, 31, 0x1283BCu);
    ctx->pc = 0x1283B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1283B4u;
            // 0x1283b8: 0xae220818  sw          $v0, 0x818($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127E78u;
    if (runtime->hasFunction(0x127E78u)) {
        auto targetFn = runtime->lookupFunction(0x127E78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1283BCu; }
        if (ctx->pc != 0x1283BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle64_0x127e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1283BCu; }
        if (ctx->pc != 0x1283BCu) { return; }
    }
    ctx->pc = 0x1283BCu;
    // 0x1283bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1283bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1283c0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1283c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1283c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1283c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1283c8: 0xae220838  sw          $v0, 0x838($s1)
    ctx->pc = 0x1283c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2104), GPR_U32(ctx, 2));
    // 0x1283cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1283ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1283d0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1283d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1283d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1283d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1283d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1283d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1283dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1283dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1283e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1283E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1283E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1283E0u;
            // 0x1283e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1282E8u: goto label_1282e8;
            case 0x128300u: goto label_128300;
            case 0x12832Cu: goto label_12832c;
            case 0x128330u: goto label_128330;
            case 0x128348u: goto label_128348;
            case 0x128374u: goto label_128374;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1283E8u;
}
