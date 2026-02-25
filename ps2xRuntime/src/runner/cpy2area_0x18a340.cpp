#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: cpy2area
// Address: 0x18a340 - 0x18a480
void cpy2area_0x18a340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("cpy2area_0x18a340");
#endif

    ctx->pc = 0x18a340u;

    // 0x18a340: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x18a340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x18a344: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x18a344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x18a348: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x18a348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x18a34c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x18a34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x18a350: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x18a350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x18a354: 0x12bf021  addu        $fp, $t1, $t3
    ctx->pc = 0x18a354u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x18a358: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18a358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18a35c: 0x5e082a  slt         $at, $v0, $fp
    ctx->pc = 0x18a35cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x18a360: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18a360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18a364: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x18a364u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a368: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18a368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18a36c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x18a36cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a370: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18a370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18a374: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x18a374u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a378: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18a378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18a37c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x18a37cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a380: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18a380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18a384: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x18a384u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18a38c: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x18a38cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a390: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A390u;
    {
        const bool branch_taken_0x18a390 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A390u;
            // 0x18a394: 0x160802d  daddu       $s0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a390) {
            ctx->pc = 0x18A3A0u;
            goto label_18a3a0;
        }
    }
    ctx->pc = 0x18A398u;
    // 0x18a398: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x18A398u;
    {
        const bool branch_taken_0x18a398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A398u;
            // 0x18a39c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a398) {
            ctx->pc = 0x18A450u;
            goto label_18a450;
        }
    }
    ctx->pc = 0x18A3A0u;
label_18a3a0:
    // 0x18a3a0: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x18a3a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x18a3a4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18A3A4u;
    {
        const bool branch_taken_0x18a3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A3A4u;
            // 0x18a3a8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a3a4) {
            ctx->pc = 0x18A3E0u;
            goto label_18a3e0;
        }
    }
    ctx->pc = 0x18A3ACu;
    // 0x18a3ac: 0xc04ed22  jal         func_13B488
    ctx->pc = 0x18A3ACu;
    SET_GPR_U32(ctx, 31, 0x18A3B4u);
    ctx->pc = 0x18A3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A3ACu;
            // 0x18a3b0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B488u;
    if (runtime->hasFunction(0x13B488u)) {
        auto targetFn = runtime->lookupFunction(0x13B488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A3B4u; }
        if (ctx->pc != 0x18A3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x13b488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A3B4u; }
        if (ctx->pc != 0x18A3B4u) { return; }
    }
    ctx->pc = 0x18A3B4u;
    // 0x18a3b4: 0x2752821  addu        $a1, $s3, $s5
    ctx->pc = 0x18a3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x18a3b8: 0x2553023  subu        $a2, $s2, $s5
    ctx->pc = 0x18a3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x18a3bc: 0xc04ed22  jal         func_13B488
    ctx->pc = 0x18A3BCu;
    SET_GPR_U32(ctx, 31, 0x18A3C4u);
    ctx->pc = 0x18A3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A3BCu;
            // 0x18a3c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B488u;
    if (runtime->hasFunction(0x13B488u)) {
        auto targetFn = runtime->lookupFunction(0x13B488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A3C4u; }
        if (ctx->pc != 0x18A3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x13b488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A3C4u; }
        if (ctx->pc != 0x18A3C4u) { return; }
    }
    ctx->pc = 0x18A3C4u;
    // 0x18a3c4: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x18a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x18a3c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18a3c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a3cc: 0x552023  subu        $a0, $v0, $s5
    ctx->pc = 0x18a3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x18a3d0: 0xc04ed22  jal         func_13B488
    ctx->pc = 0x18A3D0u;
    SET_GPR_U32(ctx, 31, 0x18A3D8u);
    ctx->pc = 0x18A3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A3D0u;
            // 0x18a3d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B488u;
    if (runtime->hasFunction(0x13B488u)) {
        auto targetFn = runtime->lookupFunction(0x13B488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A3D8u; }
        if (ctx->pc != 0x18A3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x13b488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A3D8u; }
        if (ctx->pc != 0x18A3D8u) { return; }
    }
    ctx->pc = 0x18A3D8u;
    // 0x18a3d8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x18A3D8u;
    {
        const bool branch_taken_0x18a3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a3d8) {
            ctx->pc = 0x18A448u;
            goto label_18a448;
        }
    }
    ctx->pc = 0x18A3E0u;
label_18a3e0:
    // 0x18a3e0: 0x2b2b823  subu        $s7, $s5, $s2
    ctx->pc = 0x18a3e0u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x18a3e4: 0x217102a  slt         $v0, $s0, $s7
    ctx->pc = 0x18a3e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x18a3e8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18A3E8u;
    {
        const bool branch_taken_0x18a3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A3E8u;
            // 0x18a3ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a3e8) {
            ctx->pc = 0x18A428u;
            goto label_18a428;
        }
    }
    ctx->pc = 0x18A3F0u;
    // 0x18a3f0: 0xc04ed22  jal         func_13B488
    ctx->pc = 0x18A3F0u;
    SET_GPR_U32(ctx, 31, 0x18A3F8u);
    ctx->pc = 0x18A3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A3F0u;
            // 0x18a3f4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B488u;
    if (runtime->hasFunction(0x13B488u)) {
        auto targetFn = runtime->lookupFunction(0x13B488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A3F8u; }
        if (ctx->pc != 0x18A3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x13b488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A3F8u; }
        if (ctx->pc != 0x18A3F8u) { return; }
    }
    ctx->pc = 0x18A3F8u;
    // 0x18a3f8: 0x2d22021  addu        $a0, $s6, $s2
    ctx->pc = 0x18a3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x18a3fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18a3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a400: 0xc04ed22  jal         func_13B488
    ctx->pc = 0x18A400u;
    SET_GPR_U32(ctx, 31, 0x18A408u);
    ctx->pc = 0x18A404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A400u;
            // 0x18a404: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B488u;
    if (runtime->hasFunction(0x13B488u)) {
        auto targetFn = runtime->lookupFunction(0x13B488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A408u; }
        if (ctx->pc != 0x18A408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x13b488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A408u; }
        if (ctx->pc != 0x18A408u) { return; }
    }
    ctx->pc = 0x18A408u;
    // 0x18a408: 0x2351021  addu        $v0, $s1, $s5
    ctx->pc = 0x18a408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x18a40c: 0x2173023  subu        $a2, $s0, $s7
    ctx->pc = 0x18a40cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x18a410: 0x522823  subu        $a1, $v0, $s2
    ctx->pc = 0x18a410u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x18a414: 0xc04ed22  jal         func_13B488
    ctx->pc = 0x18A414u;
    SET_GPR_U32(ctx, 31, 0x18A41Cu);
    ctx->pc = 0x18A418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A414u;
            // 0x18a418: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B488u;
    if (runtime->hasFunction(0x13B488u)) {
        auto targetFn = runtime->lookupFunction(0x13B488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A41Cu; }
        if (ctx->pc != 0x18A41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x13b488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A41Cu; }
        if (ctx->pc != 0x18A41Cu) { return; }
    }
    ctx->pc = 0x18A41Cu;
    // 0x18a41c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18A41Cu;
    {
        const bool branch_taken_0x18a41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a41c) {
            ctx->pc = 0x18A448u;
            goto label_18a448;
        }
    }
    ctx->pc = 0x18A424u;
    // 0x18a424: 0x0  nop
    ctx->pc = 0x18a424u;
    // NOP
label_18a428:
    // 0x18a428: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18a428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a42c: 0xc04ed22  jal         func_13B488
    ctx->pc = 0x18A42Cu;
    SET_GPR_U32(ctx, 31, 0x18A434u);
    ctx->pc = 0x18A430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A42Cu;
            // 0x18a430: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B488u;
    if (runtime->hasFunction(0x13B488u)) {
        auto targetFn = runtime->lookupFunction(0x13B488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A434u; }
        if (ctx->pc != 0x18A434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x13b488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A434u; }
        if (ctx->pc != 0x18A434u) { return; }
    }
    ctx->pc = 0x18A434u;
    // 0x18a434: 0x2d22021  addu        $a0, $s6, $s2
    ctx->pc = 0x18a434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x18a438: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18a438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a43c: 0xc04ed22  jal         func_13B488
    ctx->pc = 0x18A43Cu;
    SET_GPR_U32(ctx, 31, 0x18A444u);
    ctx->pc = 0x18A440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A43Cu;
            // 0x18a440: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B488u;
    if (runtime->hasFunction(0x13B488u)) {
        auto targetFn = runtime->lookupFunction(0x13B488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A444u; }
        if (ctx->pc != 0x18A444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x13b488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A444u; }
        if (ctx->pc != 0x18A444u) { return; }
    }
    ctx->pc = 0x18A444u;
    // 0x18a444: 0x0  nop
    ctx->pc = 0x18a444u;
    // NOP
label_18a448:
    // 0x18a448: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x18a448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a44c: 0x0  nop
    ctx->pc = 0x18a44cu;
    // NOP
label_18a450:
    // 0x18a450: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x18a450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18a454: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x18a454u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18a458: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x18a458u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18a45c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18a45cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18a460: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18a460u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18a464: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18a464u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a468: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18a468u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a46c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18a46cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a470: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18a470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a474: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a478: 0x3e00008  jr          $ra
    ctx->pc = 0x18A478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A478u;
            // 0x18a47c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18A3A0u: goto label_18a3a0;
            case 0x18A3E0u: goto label_18a3e0;
            case 0x18A428u: goto label_18a428;
            case 0x18A448u: goto label_18a448;
            case 0x18A450u: goto label_18a450;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18A480u;
}
