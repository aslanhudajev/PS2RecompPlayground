#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _waitBdecOut
// Address: 0x1227b0 - 0x122994
void _waitBdecOut_0x1227b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_waitBdecOut_0x1227b0");
#endif

    ctx->pc = 0x1227b0u;

    // 0x1227b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1227b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1227b4: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1227b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1227b8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1227b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1227bc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1227bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1227c0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1227c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1227c4: 0xc048e84  jal         func_123A10
    ctx->pc = 0x1227C4u;
    SET_GPR_U32(ctx, 31, 0x1227CCu);
    ctx->pc = 0x1227C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1227C4u;
            // 0x1227c8: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123A10u;
    if (runtime->hasFunction(0x123A10u)) {
        auto targetFn = runtime->lookupFunction(0x123A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1227CCu; }
        if (ctx->pc != 0x1227CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x123a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1227CCu; }
        if (ctx->pc != 0x1227CCu) { return; }
    }
    ctx->pc = 0x1227CCu;
    // 0x1227cc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1227ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1227d0: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x1227d0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)45088u)));
    // 0x1227d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1227d4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1227d8: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1227D8u;
    {
        const bool branch_taken_0x1227d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1227DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1227D8u;
            // 0x1227dc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1227d8) {
            ctx->pc = 0x122868u;
            goto label_122868;
        }
    }
    ctx->pc = 0x1227E0u;
    // 0x1227e0: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x1227e0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8208u)));
    // 0x1227e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1227e4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1227e8: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x1227e8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)16384u)));
    // 0x1227ec: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1227ECu;
    {
        const bool branch_taken_0x1227ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1227F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1227ECu;
            // 0x1227f0: 0x3c110017  lui         $s1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1227ec) {
            ctx->pc = 0x12286Cu;
            goto label_12286c;
        }
    }
    ctx->pc = 0x1227F4u;
    // 0x1227f4: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x1227f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
label_1227f8:
    // 0x1227f8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1227f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1227fc: 0x3442b420  ori         $v0, $v0, 0xB420
    ctx->pc = 0x1227fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46112u)));
    // 0x122800: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x122800u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x122804: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x122804u;
    {
        const bool branch_taken_0x122804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x122808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122804u;
            // 0x122808: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122804) {
            ctx->pc = 0x12283Cu;
            goto label_12283c;
        }
    }
    ctx->pc = 0x12280Cu;
    // 0x12280c: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x12280cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46080u)));
    // 0x122810: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x122810u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x122814: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x122814u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)256u)));
    // 0x122818: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x122818u;
    {
        const bool branch_taken_0x122818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12281Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122818u;
            // 0x12281c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122818) {
            ctx->pc = 0x12283Cu;
            goto label_12283c;
        }
    }
    ctx->pc = 0x122820u;
    // 0x122820: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x122820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x122824: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x122824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122828: 0x8c4417bc  lw          $a0, 0x17BC($v0)
    ctx->pc = 0x122828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6076)));
    // 0x12282c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12282cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122830: 0xc047de0  jal         func_11F780
    ctx->pc = 0x122830u;
    SET_GPR_U32(ctx, 31, 0x122838u);
    ctx->pc = 0x122834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122830u;
            // 0x122834: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F780u;
    if (runtime->hasFunction(0x11F780u)) {
        auto targetFn = runtime->lookupFunction(0x11F780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122838u; }
        if (ctx->pc != 0x122838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x11f780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122838u; }
        if (ctx->pc != 0x122838u) { return; }
    }
    ctx->pc = 0x122838u;
    // 0x122838: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x122838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_12283c:
    // 0x12283c: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x12283cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)45088u)));
    // 0x122840: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x122840u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x122844: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x122844u;
    {
        const bool branch_taken_0x122844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x122848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122844u;
            // 0x122848: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122844) {
            ctx->pc = 0x122870u;
            goto label_122870;
        }
    }
    ctx->pc = 0x12284Cu;
    // 0x12284c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x12284cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8208u)));
    // 0x122850: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x122850u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x122854: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x122854u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)16384u)));
    // 0x122858: 0x1060ffe7  beqz        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x122858u;
    {
        const bool branch_taken_0x122858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12285Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122858u;
            // 0x12285c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122858) {
            ctx->pc = 0x1227F8u;
            goto label_1227f8;
        }
    }
    ctx->pc = 0x122860u;
    // 0x122860: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x122860u;
    {
        const bool branch_taken_0x122860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122860) {
            ctx->pc = 0x122874u;
            goto label_122874;
        }
    }
    ctx->pc = 0x122868u;
label_122868:
    // 0x122868: 0x3c110017  lui         $s1, 0x17
    ctx->pc = 0x122868u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)23 << 16));
label_12286c:
    // 0x12286c: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x12286cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
label_122870:
    // 0x122870: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x122870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_122874:
    // 0x122874: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x122874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x122878: 0xdc842030  ld          $a0, 0x2030($a0)
    ctx->pc = 0x122878u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8240)));
    // 0x12287c: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x12287cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8224u)));
    // 0x122880: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x122880u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x122884: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x122884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x122888: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x122888u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x12288c: 0x481000a  bgez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x12288Cu;
    {
        const bool branch_taken_0x12288c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x122890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12288Cu;
            // 0x122890: 0xae232098  sw          $v1, 0x2098($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8344), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12288c) {
            ctx->pc = 0x1228B8u;
            goto label_1228b8;
        }
    }
    ctx->pc = 0x122894u;
    // 0x122894: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x122894u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)31u)));
    // 0x122898: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x122898u;
    {
        const bool branch_taken_0x122898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12289Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122898u;
            // 0x12289c: 0x2604209c  addiu       $a0, $s0, 0x209C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122898) {
            ctx->pc = 0x1228ACu;
            goto label_1228ac;
        }
    }
    ctx->pc = 0x1228A0u;
    // 0x1228a0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1228a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1228a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1228A4u;
    {
        const bool branch_taken_0x1228a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1228A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1228A4u;
            // 0x1228a8: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1228a4) {
            ctx->pc = 0x1228B0u;
            goto label_1228b0;
        }
    }
    ctx->pc = 0x1228ACu;
label_1228ac:
    // 0x1228ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1228acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1228b0:
    // 0x1228b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1228B0u;
    {
        const bool branch_taken_0x1228b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1228B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1228B0u;
            // 0x1228b4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1228b0) {
            ctx->pc = 0x1228C0u;
            goto label_1228c0;
        }
    }
    ctx->pc = 0x1228B8u;
label_1228b8:
    // 0x1228b8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1228b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1228bc: 0xae02209c  sw          $v0, 0x209C($s0)
    ctx->pc = 0x1228bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8348), GPR_U32(ctx, 2));
label_1228c0:
    // 0x1228c0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1228c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1228c4: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x1228c4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8208u)));
    // 0x1228c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1228c8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1228cc: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x1228ccu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)16384u)));
    // 0x1228d0: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1228D0u;
    {
        const bool branch_taken_0x1228d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1228D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1228D0u;
            // 0x1228d4: 0x3c040017  lui         $a0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1228d0) {
            ctx->pc = 0x122978u;
            goto label_122978;
        }
    }
    ctx->pc = 0x1228D8u;
    // 0x1228d8: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x1228d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x1228dc: 0x24844ea0  addiu       $a0, $a0, 0x4EA0
    ctx->pc = 0x1228dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20128));
    // 0x1228e0: 0xc048006  jal         func_120018
    ctx->pc = 0x1228E0u;
    SET_GPR_U32(ctx, 31, 0x1228E8u);
    ctx->pc = 0x1228E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1228E0u;
            // 0x1228e4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120018u;
    if (runtime->hasFunction(0x120018u)) {
        auto targetFn = runtime->lookupFunction(0x120018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1228E8u; }
        if (ctx->pc != 0x1228E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x120018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1228E8u; }
        if (ctx->pc != 0x1228E8u) { return; }
    }
    ctx->pc = 0x1228E8u;
    // 0x1228e8: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1228e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1228ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1228ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1228f0: 0x8e0417bc  lw          $a0, 0x17BC($s0)
    ctx->pc = 0x1228f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6076)));
    // 0x1228f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1228f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1228f8: 0xc047de0  jal         func_11F780
    ctx->pc = 0x1228F8u;
    SET_GPR_U32(ctx, 31, 0x122900u);
    ctx->pc = 0x1228FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1228F8u;
            // 0x1228fc: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F780u;
    if (runtime->hasFunction(0x11F780u)) {
        auto targetFn = runtime->lookupFunction(0x11F780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122900u; }
        if (ctx->pc != 0x122900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x11f780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122900u; }
        if (ctx->pc != 0x122900u) { return; }
    }
    ctx->pc = 0x122900u;
    // 0x122900: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x122900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x122904: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x122904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x122908: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x122908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x12290c: 0xac232010  sw          $v1, 0x2010($at)
    ctx->pc = 0x12290cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 3)); // MMIO: 0x10002010
    // 0x122910: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x122910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122914: 0x8e0417bc  lw          $a0, 0x17BC($s0)
    ctx->pc = 0x122914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6076)));
    // 0x122918: 0xc047de0  jal         func_11F780
    ctx->pc = 0x122918u;
    SET_GPR_U32(ctx, 31, 0x122920u);
    ctx->pc = 0x12291Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122918u;
            // 0x12291c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F780u;
    if (runtime->hasFunction(0x11F780u)) {
        auto targetFn = runtime->lookupFunction(0x11F780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122920u; }
        if (ctx->pc != 0x122920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x11f780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122920u; }
        if (ctx->pc != 0x122920u) { return; }
    }
    ctx->pc = 0x122920u;
    // 0x122920: 0xc0453ee  jal         func_114FB8
    ctx->pc = 0x122920u;
    SET_GPR_U32(ctx, 31, 0x122928u);
    ctx->pc = 0x114FB8u;
    if (runtime->hasFunction(0x114FB8u)) {
        auto targetFn = runtime->lookupFunction(0x114FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122928u; }
        if (ctx->pc != 0x122928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x114fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122928u; }
        if (ctx->pc != 0x122928u) { return; }
    }
    ctx->pc = 0x122928u;
    // 0x122928: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x122928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x12292c: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x12292cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x122930: 0x34a5f520  ori         $a1, $a1, 0xF520
    ctx->pc = 0x122930u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)62752u)));
    // 0x122934: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x122934u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x122938: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x122938u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x10000000
    // 0x12293c: 0x34c6f590  ori         $a2, $a2, 0xF590
    ctx->pc = 0x12293cu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)62864u)));
    // 0x122940: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x122940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x122944: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x122944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x122948: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x122948u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x12294c: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x12294cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)45056u)));
    // 0x122950: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x122950u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x122954: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x122954u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65535u)));
    // 0x122958: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x122958u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x12295c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x12295cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x122960: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x122960u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x122964: 0xc045400  jal         func_115000
    ctx->pc = 0x122964u;
    SET_GPR_U32(ctx, 31, 0x12296Cu);
    ctx->pc = 0x122968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122964u;
            // 0x122968: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115000u;
    if (runtime->hasFunction(0x115000u)) {
        auto targetFn = runtime->lookupFunction(0x115000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12296Cu; }
        if (ctx->pc != 0x12296Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x115000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12296Cu; }
        if (ctx->pc != 0x12296Cu) { return; }
    }
    ctx->pc = 0x12296Cu;
    // 0x12296c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12296cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x122970: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x122970u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)45088u)));
    // 0x122974: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x122974u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
label_122978:
    // 0x122978: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x122978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12297c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x12297cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x122980: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x122980u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x122984: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x122984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x122988: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x122988u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12298c: 0x3e00008  jr          $ra
    ctx->pc = 0x12298Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12298Cu;
            // 0x122990: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1227F8u: goto label_1227f8;
            case 0x12283Cu: goto label_12283c;
            case 0x122868u: goto label_122868;
            case 0x12286Cu: goto label_12286c;
            case 0x122870u: goto label_122870;
            case 0x122874u: goto label_122874;
            case 0x1228ACu: goto label_1228ac;
            case 0x1228B0u: goto label_1228b0;
            case 0x1228B8u: goto label_1228b8;
            case 0x1228C0u: goto label_1228c0;
            case 0x122978u: goto label_122978;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122994u;
}
