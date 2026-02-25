#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: copy2area
// Address: 0x188990 - 0x188ad0
void copy2area_0x188990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("copy2area_0x188990");
#endif

    ctx->pc = 0x188990u;

    // 0x188990: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x188990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x188994: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x188994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x188998: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x188998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x18899c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x18899cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1889a0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1889a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1889a4: 0x12bf021  addu        $fp, $t1, $t3
    ctx->pc = 0x1889a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x1889a8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1889a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1889ac: 0x5e082a  slt         $at, $v0, $fp
    ctx->pc = 0x1889acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x1889b0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1889b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1889b4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1889b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1889b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1889b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1889bc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1889bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1889c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1889c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1889c4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1889c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1889c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1889c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1889cc: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1889ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1889d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1889d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1889d4: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x1889d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1889d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1889d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1889dc: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x1889dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1889e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1889E0u;
    {
        const bool branch_taken_0x1889e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1889E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1889E0u;
            // 0x1889e4: 0x160802d  daddu       $s0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1889e0) {
            ctx->pc = 0x1889F0u;
            goto label_1889f0;
        }
    }
    ctx->pc = 0x1889E8u;
    // 0x1889e8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1889E8u;
    {
        const bool branch_taken_0x1889e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1889ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1889E8u;
            // 0x1889ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1889e8) {
            ctx->pc = 0x188AA0u;
            goto label_188aa0;
        }
    }
    ctx->pc = 0x1889F0u;
label_1889f0:
    // 0x1889f0: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x1889f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1889f4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1889F4u;
    {
        const bool branch_taken_0x1889f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1889F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1889F4u;
            // 0x1889f8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1889f4) {
            ctx->pc = 0x188A30u;
            goto label_188a30;
        }
    }
    ctx->pc = 0x1889FCu;
    // 0x1889fc: 0xc04ed22  jal         func_13B488
    ctx->pc = 0x1889FCu;
    SET_GPR_U32(ctx, 31, 0x188A04u);
    ctx->pc = 0x188A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1889FCu;
            // 0x188a00: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B488u;
    if (runtime->hasFunction(0x13B488u)) {
        auto targetFn = runtime->lookupFunction(0x13B488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188A04u; }
        if (ctx->pc != 0x188A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x13b488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188A04u; }
        if (ctx->pc != 0x188A04u) { return; }
    }
    ctx->pc = 0x188A04u;
    // 0x188a04: 0x2752821  addu        $a1, $s3, $s5
    ctx->pc = 0x188a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x188a08: 0x2553023  subu        $a2, $s2, $s5
    ctx->pc = 0x188a08u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x188a0c: 0xc04ed22  jal         func_13B488
    ctx->pc = 0x188A0Cu;
    SET_GPR_U32(ctx, 31, 0x188A14u);
    ctx->pc = 0x188A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188A0Cu;
            // 0x188a10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B488u;
    if (runtime->hasFunction(0x13B488u)) {
        auto targetFn = runtime->lookupFunction(0x13B488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188A14u; }
        if (ctx->pc != 0x188A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x13b488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188A14u; }
        if (ctx->pc != 0x188A14u) { return; }
    }
    ctx->pc = 0x188A14u;
    // 0x188a14: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x188a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x188a18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x188a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188a1c: 0x552023  subu        $a0, $v0, $s5
    ctx->pc = 0x188a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x188a20: 0xc04ed22  jal         func_13B488
    ctx->pc = 0x188A20u;
    SET_GPR_U32(ctx, 31, 0x188A28u);
    ctx->pc = 0x188A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188A20u;
            // 0x188a24: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B488u;
    if (runtime->hasFunction(0x13B488u)) {
        auto targetFn = runtime->lookupFunction(0x13B488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188A28u; }
        if (ctx->pc != 0x188A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x13b488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188A28u; }
        if (ctx->pc != 0x188A28u) { return; }
    }
    ctx->pc = 0x188A28u;
    // 0x188a28: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x188A28u;
    {
        const bool branch_taken_0x188a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188a28) {
            ctx->pc = 0x188A98u;
            goto label_188a98;
        }
    }
    ctx->pc = 0x188A30u;
label_188a30:
    // 0x188a30: 0x2b2b823  subu        $s7, $s5, $s2
    ctx->pc = 0x188a30u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x188a34: 0x217102a  slt         $v0, $s0, $s7
    ctx->pc = 0x188a34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x188a38: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x188A38u;
    {
        const bool branch_taken_0x188a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188A38u;
            // 0x188a3c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188a38) {
            ctx->pc = 0x188A78u;
            goto label_188a78;
        }
    }
    ctx->pc = 0x188A40u;
    // 0x188a40: 0xc04ed22  jal         func_13B488
    ctx->pc = 0x188A40u;
    SET_GPR_U32(ctx, 31, 0x188A48u);
    ctx->pc = 0x188A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188A40u;
            // 0x188a44: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B488u;
    if (runtime->hasFunction(0x13B488u)) {
        auto targetFn = runtime->lookupFunction(0x13B488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188A48u; }
        if (ctx->pc != 0x188A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x13b488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188A48u; }
        if (ctx->pc != 0x188A48u) { return; }
    }
    ctx->pc = 0x188A48u;
    // 0x188a48: 0x2d22021  addu        $a0, $s6, $s2
    ctx->pc = 0x188a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x188a4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x188a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188a50: 0xc04ed22  jal         func_13B488
    ctx->pc = 0x188A50u;
    SET_GPR_U32(ctx, 31, 0x188A58u);
    ctx->pc = 0x188A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188A50u;
            // 0x188a54: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B488u;
    if (runtime->hasFunction(0x13B488u)) {
        auto targetFn = runtime->lookupFunction(0x13B488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188A58u; }
        if (ctx->pc != 0x188A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x13b488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188A58u; }
        if (ctx->pc != 0x188A58u) { return; }
    }
    ctx->pc = 0x188A58u;
    // 0x188a58: 0x2351021  addu        $v0, $s1, $s5
    ctx->pc = 0x188a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x188a5c: 0x2173023  subu        $a2, $s0, $s7
    ctx->pc = 0x188a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x188a60: 0x522823  subu        $a1, $v0, $s2
    ctx->pc = 0x188a60u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x188a64: 0xc04ed22  jal         func_13B488
    ctx->pc = 0x188A64u;
    SET_GPR_U32(ctx, 31, 0x188A6Cu);
    ctx->pc = 0x188A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188A64u;
            // 0x188a68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B488u;
    if (runtime->hasFunction(0x13B488u)) {
        auto targetFn = runtime->lookupFunction(0x13B488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188A6Cu; }
        if (ctx->pc != 0x188A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x13b488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188A6Cu; }
        if (ctx->pc != 0x188A6Cu) { return; }
    }
    ctx->pc = 0x188A6Cu;
    // 0x188a6c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x188A6Cu;
    {
        const bool branch_taken_0x188a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188a6c) {
            ctx->pc = 0x188A98u;
            goto label_188a98;
        }
    }
    ctx->pc = 0x188A74u;
    // 0x188a74: 0x0  nop
    ctx->pc = 0x188a74u;
    // NOP
label_188a78:
    // 0x188a78: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x188a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188a7c: 0xc04ed22  jal         func_13B488
    ctx->pc = 0x188A7Cu;
    SET_GPR_U32(ctx, 31, 0x188A84u);
    ctx->pc = 0x188A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188A7Cu;
            // 0x188a80: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B488u;
    if (runtime->hasFunction(0x13B488u)) {
        auto targetFn = runtime->lookupFunction(0x13B488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188A84u; }
        if (ctx->pc != 0x188A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x13b488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188A84u; }
        if (ctx->pc != 0x188A84u) { return; }
    }
    ctx->pc = 0x188A84u;
    // 0x188a84: 0x2d22021  addu        $a0, $s6, $s2
    ctx->pc = 0x188a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x188a88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x188a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188a8c: 0xc04ed22  jal         func_13B488
    ctx->pc = 0x188A8Cu;
    SET_GPR_U32(ctx, 31, 0x188A94u);
    ctx->pc = 0x188A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188A8Cu;
            // 0x188a90: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B488u;
    if (runtime->hasFunction(0x13B488u)) {
        auto targetFn = runtime->lookupFunction(0x13B488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188A94u; }
        if (ctx->pc != 0x188A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x13b488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188A94u; }
        if (ctx->pc != 0x188A94u) { return; }
    }
    ctx->pc = 0x188A94u;
    // 0x188a94: 0x0  nop
    ctx->pc = 0x188a94u;
    // NOP
label_188a98:
    // 0x188a98: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x188a98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188a9c: 0x0  nop
    ctx->pc = 0x188a9cu;
    // NOP
label_188aa0:
    // 0x188aa0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x188aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x188aa4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x188aa4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x188aa8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x188aa8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x188aac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x188aacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x188ab0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x188ab0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x188ab4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x188ab4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x188ab8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x188ab8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x188abc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x188abcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188ac0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x188ac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188ac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x188ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x188AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188AC8u;
            // 0x188acc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1889F0u: goto label_1889f0;
            case 0x188A30u: goto label_188a30;
            case 0x188A78u: goto label_188a78;
            case 0x188A98u: goto label_188a98;
            case 0x188AA0u: goto label_188aa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188AD0u;
}
