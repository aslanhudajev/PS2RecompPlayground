#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _peepBit
// Address: 0x1280a0 - 0x1281a8
void _peepBit_0x1280a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_peepBit_0x1280a0");
#endif

    ctx->pc = 0x1280a0u;

    // 0x1280a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1280a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1280a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1280a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1280a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1280a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1280ac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1280acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1280b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1280b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1280b4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1280b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1280b8: 0x8e020818  lw          $v0, 0x818($s0)
    ctx->pc = 0x1280b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2072)));
    // 0x1280bc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1280BCu;
    {
        const bool branch_taken_0x1280bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1280C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1280BCu;
            // 0x1280c0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1280bc) {
            ctx->pc = 0x1280D4u;
            goto label_1280d4;
        }
    }
    ctx->pc = 0x1280C4u;
    // 0x1280c4: 0x8e02083c  lw          $v0, 0x83C($s0)
    ctx->pc = 0x1280c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2108)));
    // 0x1280c8: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x1280c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1280cc: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x1280CCu;
    {
        const bool branch_taken_0x1280cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1280cc) {
            ctx->pc = 0x1280D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1280CCu;
            // 0x1280d0: 0x8e030838  lw          $v1, 0x838($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128188u;
            goto label_128188;
        }
    }
    ctx->pc = 0x1280D4u;
label_1280d4:
    // 0x1280d4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1280d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1280d8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1280d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1280dc: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x1280dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8208u)));
    // 0x1280e0: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x1280e0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)16384u)));
    // 0x1280e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1280e4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1280e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1280e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1280ec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1280ecu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1280f0: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1280F0u;
    {
        const bool branch_taken_0x1280f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1280F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1280F0u;
            // 0x1280f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1280f0) {
            ctx->pc = 0x128148u;
            goto label_128148;
        }
    }
    ctx->pc = 0x1280F8u;
    // 0x1280f8: 0x3c110021  lui         $s1, 0x21
    ctx->pc = 0x1280f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)33 << 16));
    // 0x1280fc: 0x0  nop
    ctx->pc = 0x1280fcu;
    // NOP
label_128100:
    // 0x128100: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x128100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128104: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x128104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x128108: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x128108u;
    {
        const bool branch_taken_0x128108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12810Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128108u;
            // 0x12810c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128108) {
            ctx->pc = 0x12811Cu;
            goto label_12811c;
        }
    }
    ctx->pc = 0x128110u;
    // 0x128110: 0xc04ae14  jal         func_12B850
    ctx->pc = 0x128110u;
    SET_GPR_U32(ctx, 31, 0x128118u);
    ctx->pc = 0x128114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128110u;
            // 0x128114: 0x8e040858  lw          $a0, 0x858($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B850u;
    if (runtime->hasFunction(0x12B850u)) {
        auto targetFn = runtime->lookupFunction(0x12B850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128118u; }
        if (ctx->pc != 0x128118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x12b850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128118u; }
        if (ctx->pc != 0x128118u) { return; }
    }
    ctx->pc = 0x128118u;
    // 0x128118: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12811c:
    // 0x12811c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12811cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x128120: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x128120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x128124: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x128124u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8208u)));
    // 0x128128: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x128128u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)16384u)));
    // 0x12812c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12812cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x128130: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x128130u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x128134: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x128134u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x128138: 0x1045fff1  beq         $v0, $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x128138u;
    {
        const bool branch_taken_0x128138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x12813Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128138u;
            // 0x12813c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128138) {
            ctx->pc = 0x128100u;
            goto label_128100;
        }
    }
    ctx->pc = 0x128140u;
    // 0x128140: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x128140u;
    {
        const bool branch_taken_0x128140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128140u;
            // 0x128144: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128140) {
            ctx->pc = 0x128154u;
            goto label_128154;
        }
    }
    ctx->pc = 0x128148u;
label_128148:
    // 0x128148: 0x3c110021  lui         $s1, 0x21
    ctx->pc = 0x128148u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)33 << 16));
    // 0x12814c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x12814cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x128150: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x128150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_128154:
    // 0x128154: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x128154u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8192u)));
    // 0x128158: 0x26250180  addiu       $a1, $s1, 0x180
    ctx->pc = 0x128158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
    // 0x12815c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x12815cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x128160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128164: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x128164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x128168: 0xc049f9e  jal         func_127E78
    ctx->pc = 0x128168u;
    SET_GPR_U32(ctx, 31, 0x128170u);
    ctx->pc = 0x12816Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128168u;
            // 0x12816c: 0xae020818  sw          $v0, 0x818($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127E78u;
    if (runtime->hasFunction(0x127E78u)) {
        auto targetFn = runtime->lookupFunction(0x127E78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128170u; }
        if (ctx->pc != 0x128170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle64_0x127e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128170u; }
        if (ctx->pc != 0x128170u) { return; }
    }
    ctx->pc = 0x128170u;
    // 0x128170: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x128170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x128174: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x128174u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x128178: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x128178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12817c: 0xae020838  sw          $v0, 0x838($s0)
    ctx->pc = 0x12817cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2104), GPR_U32(ctx, 2));
    // 0x128180: 0xae03083c  sw          $v1, 0x83C($s0)
    ctx->pc = 0x128180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2108), GPR_U32(ctx, 3));
    // 0x128184: 0x8e030838  lw          $v1, 0x838($s0)
    ctx->pc = 0x128184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2104)));
label_128188:
    // 0x128188: 0x121023  negu        $v0, $s2
    ctx->pc = 0x128188u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x12818c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12818cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128190: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x128190u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128194: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x128194u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x128198: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x128198u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12819c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12819cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1281a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1281A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1281A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1281A0u;
            // 0x1281a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1280D4u: goto label_1280d4;
            case 0x128100u: goto label_128100;
            case 0x12811Cu: goto label_12811c;
            case 0x128148u: goto label_128148;
            case 0x128154u: goto label_128154;
            case 0x128188u: goto label_128188;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1281A8u;
}
