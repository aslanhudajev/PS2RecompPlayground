#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _ipuVdec
// Address: 0x127f28 - 0x1280a0
void _ipuVdec_0x127f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_ipuVdec_0x127f28");
#endif

    ctx->pc = 0x127f28u;

    // 0x127f28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x127f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x127f2c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x127f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x127f30: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x127f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x127f34: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x127f34u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8208u)));
    // 0x127f38: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x127f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x127f3c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x127f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x127f40: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x127f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x127f44: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x127f44u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)16384u)));
    // 0x127f48: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x127f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x127f4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x127f4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127f50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x127f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x127f54: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x127f54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127f58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x127f58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127f5c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x127f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x127f60: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x127f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x127f64: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x127f64u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 3)));
    // 0x127f68: 0x14c20015  bne         $a2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x127F68u;
    {
        const bool branch_taken_0x127f68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x127F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127F68u;
            // 0x127f6c: 0x58680  sll         $s0, $a1, 26 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127f68) {
            ctx->pc = 0x127FC0u;
            goto label_127fc0;
        }
    }
    ctx->pc = 0x127F70u;
    // 0x127f70: 0x3c130021  lui         $s3, 0x21
    ctx->pc = 0x127f70u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)33 << 16));
    // 0x127f74: 0x0  nop
    ctx->pc = 0x127f74u;
    // NOP
label_127f78:
    // 0x127f78: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x127f78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127f7c: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x127f7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x127f80: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x127F80u;
    {
        const bool branch_taken_0x127f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127F80u;
            // 0x127f84: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127f80) {
            ctx->pc = 0x127F94u;
            goto label_127f94;
        }
    }
    ctx->pc = 0x127F88u;
    // 0x127f88: 0xc04ae14  jal         func_12B850
    ctx->pc = 0x127F88u;
    SET_GPR_U32(ctx, 31, 0x127F90u);
    ctx->pc = 0x127F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127F88u;
            // 0x127f8c: 0x8e240858  lw          $a0, 0x858($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B850u;
    if (runtime->hasFunction(0x12B850u)) {
        auto targetFn = runtime->lookupFunction(0x12B850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127F90u; }
        if (ctx->pc != 0x127F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x12b850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127F90u; }
        if (ctx->pc != 0x127F90u) { return; }
    }
    ctx->pc = 0x127F90u;
    // 0x127f90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x127f90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127f94:
    // 0x127f94: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x127f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x127f98: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x127f98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x127f9c: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x127f9cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8208u)));
    // 0x127fa0: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x127fa0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)16384u)));
    // 0x127fa4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x127fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x127fa8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x127fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x127fac: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x127facu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x127fb0: 0x1045fff1  beq         $v0, $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x127FB0u;
    {
        const bool branch_taken_0x127fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x127FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127FB0u;
            // 0x127fb4: 0x3c033000  lui         $v1, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127fb0) {
            ctx->pc = 0x127F78u;
            goto label_127f78;
        }
    }
    ctx->pc = 0x127FB8u;
    // 0x127fb8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x127FB8u;
    {
        const bool branch_taken_0x127fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127FB8u;
            // 0x127fbc: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127fb8) {
            ctx->pc = 0x127FCCu;
            goto label_127fcc;
        }
    }
    ctx->pc = 0x127FC0u;
label_127fc0:
    // 0x127fc0: 0x3c130021  lui         $s3, 0x21
    ctx->pc = 0x127fc0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)33 << 16));
    // 0x127fc4: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x127fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x127fc8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x127fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_127fcc:
    // 0x127fcc: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x127fccu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 16), GPR_VEC(ctx, 3)));
    // 0x127fd0: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x127fd0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)8192u)));
    // 0x127fd4: 0x31703  sra         $v0, $v1, 28
    ctx->pc = 0x127fd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 28));
    // 0x127fd8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x127fd8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x127fdc: 0x26650180  addiu       $a1, $s3, 0x180
    ctx->pc = 0x127fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x127fe0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x127fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x127fe4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x127fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x127fe8: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x127fe8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x127fec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x127fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x127ff0: 0x4c1000e  bgez        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x127FF0u;
    {
        const bool branch_taken_0x127ff0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x127FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127FF0u;
            // 0x127ff4: 0xae230818  sw          $v1, 0x818($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ff0) {
            ctx->pc = 0x12802Cu;
            goto label_12802c;
        }
    }
    ctx->pc = 0x127FF8u;
    // 0x127ff8: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x127ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x127ffc: 0x36102000  ori         $s0, $s0, 0x2000
    ctx->pc = 0x127ffcu;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)8192u)));
    // 0x128000: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x128000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128004: 0x0  nop
    ctx->pc = 0x128004u;
    // NOP
label_128008:
    // 0x128008: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x128008u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x12800c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12800Cu;
    {
        const bool branch_taken_0x12800c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12800Cu;
            // 0x128010: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12800c) {
            ctx->pc = 0x128020u;
            goto label_128020;
        }
    }
    ctx->pc = 0x128014u;
    // 0x128014: 0x8e240858  lw          $a0, 0x858($s1)
    ctx->pc = 0x128014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x128018: 0xc04ae14  jal         func_12B850
    ctx->pc = 0x128018u;
    SET_GPR_U32(ctx, 31, 0x128020u);
    ctx->pc = 0x12801Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128018u;
            // 0x12801c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B850u;
    if (runtime->hasFunction(0x12B850u)) {
        auto targetFn = runtime->lookupFunction(0x12B850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128020u; }
        if (ctx->pc != 0x128020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x12b850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128020u; }
        if (ctx->pc != 0x128020u) { return; }
    }
    ctx->pc = 0x128020u;
label_128020:
    // 0x128020: 0xde060000  ld          $a2, 0x0($s0)
    ctx->pc = 0x128020u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x128024: 0x4c0fff8  bltz        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x128024u;
    {
        const bool branch_taken_0x128024 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x128028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128024u;
            // 0x128028: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128024) {
            ctx->pc = 0x128008u;
            goto label_128008;
        }
    }
    ctx->pc = 0x12802Cu;
label_12802c:
    // 0x12802c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x12802cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x128030: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x128030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x128034: 0xdc842030  ld          $a0, 0x2030($a0)
    ctx->pc = 0x128034u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8240)));
    // 0x128038: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x128038u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8224u)));
    // 0x12803c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12803cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x128040: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x128040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x128044: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x128044u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x128048: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x128048u;
    {
        const bool branch_taken_0x128048 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x12804Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128048u;
            // 0x12804c: 0xae230838  sw          $v1, 0x838($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128048) {
            ctx->pc = 0x128060u;
            goto label_128060;
        }
    }
    ctx->pc = 0x128050u;
    // 0x128050: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x128050u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)31u)));
    // 0x128054: 0x21023  negu        $v0, $v0
    ctx->pc = 0x128054u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x128058: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x128058u;
    {
        const bool branch_taken_0x128058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12805Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128058u;
            // 0x12805c: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)31u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128058) {
            ctx->pc = 0x128064u;
            goto label_128064;
        }
    }
    ctx->pc = 0x128060u;
label_128060:
    // 0x128060: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x128060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_128064:
    // 0x128064: 0xae22083c  sw          $v0, 0x83C($s1)
    ctx->pc = 0x128064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2108), GPR_U32(ctx, 2));
    // 0x128068: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x128068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x12806c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x12806cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x128070: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x128070u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)65535u)));
    // 0x128074: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x128074u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x128078: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x128078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x12807c: 0xae23011c  sw          $v1, 0x11C($s1)
    ctx->pc = 0x12807cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 3));
    // 0x128080: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x128080u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x128084: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x128084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x128088: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x128088u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12808c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12808cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128090: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x128090u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128094: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x128094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128098: 0x3e00008  jr          $ra
    ctx->pc = 0x128098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12809Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128098u;
            // 0x12809c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127F78u: goto label_127f78;
            case 0x127F94u: goto label_127f94;
            case 0x127FC0u: goto label_127fc0;
            case 0x127FCCu: goto label_127fcc;
            case 0x128008u: goto label_128008;
            case 0x128020u: goto label_128020;
            case 0x12802Cu: goto label_12802c;
            case 0x128060u: goto label_128060;
            case 0x128064u: goto label_128064;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1280A0u;
}
