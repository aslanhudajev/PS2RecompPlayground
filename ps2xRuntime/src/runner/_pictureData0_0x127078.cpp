#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _pictureData0
// Address: 0x127078 - 0x127198
void _pictureData0_0x127078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_pictureData0_0x127078");
#endif

    ctx->pc = 0x127078u;

    // 0x127078: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x127078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12707c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x12707cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x127080: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x127080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x127084: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x127084u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127088: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x127088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12708c: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x12708cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127090: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x127090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x127094: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x127094u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127098: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x127098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x12709c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12709cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1270a0: 0xae400810  sw          $zero, 0x810($s2)
    ctx->pc = 0x1270a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2064), GPR_U32(ctx, 0));
    // 0x1270a4: 0x8e420130  lw          $v0, 0x130($s2)
    ctx->pc = 0x1270a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x1270a8: 0x8e44012c  lw          $a0, 0x12C($s2)
    ctx->pc = 0x1270a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 300)));
    // 0x1270ac: 0x8e430174  lw          $v1, 0x174($s2)
    ctx->pc = 0x1270acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1270b0: 0x828818  mult        $s1, $a0, $v0
    ctx->pc = 0x1270b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1270b4: 0xae400814  sw          $zero, 0x814($s2)
    ctx->pc = 0x1270b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2068), GPR_U32(ctx, 0));
    // 0x1270b8: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x1270b8u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)3u)));
    // 0x1270bc: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x1270bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x1270c0: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x1270c0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x1270c4: 0x0  nop
    ctx->pc = 0x1270c4u;
    // NOP
label_1270c8:
    // 0x1270c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1270c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1270cc:
    // 0x1270cc: 0xc049cb2  jal         func_1272C8
    ctx->pc = 0x1270CCu;
    SET_GPR_U32(ctx, 31, 0x1270D4u);
    ctx->pc = 0x1270D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1270CCu;
            // 0x1270d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272C8u;
    if (runtime->hasFunction(0x1272C8u)) {
        auto targetFn = runtime->lookupFunction(0x1272C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1270D4u; }
        if (ctx->pc != 0x1270D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _slice0_0x1272c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1270D4u; }
        if (ctx->pc != 0x1270D4u) { return; }
    }
    ctx->pc = 0x1270D4u;
    // 0x1270d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1270d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1270d8: 0x1214fffc  beq         $s0, $s4, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1270D8u;
    {
        const bool branch_taken_0x1270d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x1270DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1270D8u;
            // 0x1270dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1270d8) {
            ctx->pc = 0x1270CCu;
            goto label_1270cc;
        }
    }
    ctx->pc = 0x1270E0u;
    // 0x1270e0: 0x1213fff9  beq         $s0, $s3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1270E0u;
    {
        const bool branch_taken_0x1270e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x1270e0) {
            ctx->pc = 0x1270C8u;
            goto label_1270c8;
        }
    }
    ctx->pc = 0x1270E8u;
    // 0x1270e8: 0xc049f74  jal         func_127DD0
    ctx->pc = 0x1270E8u;
    SET_GPR_U32(ctx, 31, 0x1270F0u);
    ctx->pc = 0x1270ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1270E8u;
            // 0x1270ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127DD0u;
    if (runtime->hasFunction(0x127DD0u)) {
        auto targetFn = runtime->lookupFunction(0x127DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1270F0u; }
        if (ctx->pc != 0x1270F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x127dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1270F0u; }
        if (ctx->pc != 0x1270F0u) { return; }
    }
    ctx->pc = 0x1270F0u;
    // 0x1270f0: 0xc049ac8  jal         func_126B20
    ctx->pc = 0x1270F0u;
    SET_GPR_U32(ctx, 31, 0x1270F8u);
    ctx->pc = 0x1270F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1270F0u;
            // 0x1270f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126B20u;
    if (runtime->hasFunction(0x126B20u)) {
        auto targetFn = runtime->lookupFunction(0x126B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1270F8u; }
        if (ctx->pc != 0x1270F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitBdecOut_0x126b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1270F8u; }
        if (ctx->pc != 0x1270F8u) { return; }
    }
    ctx->pc = 0x1270F8u;
    // 0x1270f8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1270F8u;
    {
        const bool branch_taken_0x1270f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1270FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1270F8u;
            // 0x1270fc: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1270f8) {
            ctx->pc = 0x12711Cu;
            goto label_12711c;
        }
    }
    ctx->pc = 0x127100u;
    // 0x127100: 0x8e4210a0  lw          $v0, 0x10A0($s2)
    ctx->pc = 0x127100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4256)));
    // 0x127104: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x127104u;
    {
        const bool branch_taken_0x127104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127104u;
            // 0x127108: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127104) {
            ctx->pc = 0x127114u;
            goto label_127114;
        }
    }
    ctx->pc = 0x12710Cu;
    // 0x12710c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12710Cu;
    {
        const bool branch_taken_0x12710c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12710Cu;
            // 0x127110: 0xae4010a0  sw          $zero, 0x10A0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12710c) {
            ctx->pc = 0x12711Cu;
            goto label_12711c;
        }
    }
    ctx->pc = 0x127114u;
label_127114:
    // 0x127114: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x127114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x127118: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x127118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_12711c:
    // 0x12711c: 0x2611ffff  addiu       $s1, $s0, -0x1
    ctx->pc = 0x12711cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x127120: 0x2e130001  sltiu       $s3, $s0, 0x1
    ctx->pc = 0x127120u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x127124: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x127124u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)54272u)));
label_127128:
    // 0x127128: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x127128u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x12712c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x12712cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x127130: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x127130u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x127134: 0x0  nop
    ctx->pc = 0x127134u;
    // NOP
    // 0x127138: 0x0  nop
    ctx->pc = 0x127138u;
    // NOP
    // 0x12713c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12713Cu;
    {
        const bool branch_taken_0x12713c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12713c) {
            ctx->pc = 0x127128u;
            goto label_127128;
        }
    }
    ctx->pc = 0x127144u;
    // 0x127144: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x127144u;
    {
        const bool branch_taken_0x127144 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x127148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127144u;
            // 0x127148: 0x2e220002  sltiu       $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127144) {
            ctx->pc = 0x127160u;
            goto label_127160;
        }
    }
    ctx->pc = 0x12714Cu;
    // 0x12714c: 0x8e450810  lw          $a1, 0x810($s2)
    ctx->pc = 0x12714cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2064)));
    // 0x127150: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127154: 0xc0496ca  jal         func_125B28
    ctx->pc = 0x127154u;
    SET_GPR_U32(ctx, 31, 0x12715Cu);
    ctx->pc = 0x127158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127154u;
            // 0x127158: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125B28u;
    if (runtime->hasFunction(0x125B28u)) {
        auto targetFn = runtime->lookupFunction(0x125B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12715Cu; }
        if (ctx->pc != 0x12715Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _doMC_0x125b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12715Cu; }
        if (ctx->pc != 0x12715Cu) { return; }
    }
    ctx->pc = 0x12715Cu;
    // 0x12715c: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x12715cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_127160:
    // 0x127160: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x127160u;
    {
        const bool branch_taken_0x127160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127160u;
            // 0x127164: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127160) {
            ctx->pc = 0x127174u;
            goto label_127174;
        }
    }
    ctx->pc = 0x127168u;
    // 0x127168: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x127168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12716c: 0xc04b01e  jal         func_12C078
    ctx->pc = 0x12716Cu;
    SET_GPR_U32(ctx, 31, 0x127174u);
    ctx->pc = 0x127170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12716Cu;
            // 0x127170: 0x24a5f200  addiu       $a1, $a1, -0xE00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C078u;
    if (runtime->hasFunction(0x12C078u)) {
        auto targetFn = runtime->lookupFunction(0x12C078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127174u; }
        if (ctx->pc != 0x127174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x12c078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127174u; }
        if (ctx->pc != 0x127174u) { return; }
    }
    ctx->pc = 0x127174u;
label_127174:
    // 0x127174: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x127174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127178: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x127178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12717c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x12717cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x127180: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x127180u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127184: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x127184u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127188: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x127188u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12718c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12718cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127190: 0x3e00008  jr          $ra
    ctx->pc = 0x127190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127190u;
            // 0x127194: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1270C8u: goto label_1270c8;
            case 0x1270CCu: goto label_1270cc;
            case 0x127114u: goto label_127114;
            case 0x12711Cu: goto label_12711c;
            case 0x127128u: goto label_127128;
            case 0x127160u: goto label_127160;
            case 0x127174u: goto label_127174;
            default: break;
        }
        return;
    }
    ctx->pc = 0x127198u;
}
