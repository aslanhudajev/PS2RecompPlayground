#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Constant
// Address: 0x11a330 - 0x11a410
void Constant_0x11a330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Constant_0x11a330");
#endif

    ctx->pc = 0x11a330u;

    // 0x11a330: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11a330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11a334: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x11a334u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a338: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11a338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11a33c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11a33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11a340: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11a340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11a344: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11a344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a348: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11a348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11a34c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a350: 0x8e28fff0  lw          $t0, -0x10($s1)
    ctx->pc = 0x11a350u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967280)));
    // 0x11a354: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A354u;
    {
        const bool branch_taken_0x11a354 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A354u;
            // 0x11a358: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a354) {
            ctx->pc = 0x11A368u;
            goto label_11a368;
        }
    }
    ctx->pc = 0x11A35Cu;
    // 0x11a35c: 0x24021200  addiu       $v0, $zero, 0x1200
    ctx->pc = 0x11a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4608));
    // 0x11a360: 0x24081200  addiu       $t0, $zero, 0x1200
    ctx->pc = 0x11a360u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4608));
    // 0x11a364: 0xae22fff0  sw          $v0, -0x10($s1)
    ctx->pc = 0x11a364u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967280), GPR_U32(ctx, 2));
label_11a368:
    // 0x11a368: 0x31070200  andi        $a3, $t0, 0x200
    ctx->pc = 0x11a368u;
    SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)512u)));
    // 0x11a36c: 0x3106fc00  andi        $a2, $t0, 0xFC00
    ctx->pc = 0x11a36cu;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)64512u)));
    // 0x11a370: 0x7102b  sltu        $v0, $zero, $a3
    ctx->pc = 0x11a370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11a374: 0x3c130001  lui         $s3, 0x1
    ctx->pc = 0x11a374u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)1 << 16));
    // 0x11a378: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x11a378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11a37c: 0x1132824  and         $a1, $t0, $s3
    ctx->pc = 0x11a37cu;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 8), GPR_VEC(ctx, 19)));
    // 0x11a380: 0x86100b  movn        $v0, $a0, $a2
    ctx->pc = 0x11a380u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x11a384: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x11a384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11a388: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x11a388u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x11a38c: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x11a38cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11a390: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x11a390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x11a394: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x11A394u;
    {
        const bool branch_taken_0x11a394 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A394u;
            // 0x11a398: 0x2228021  addu        $s0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a394) {
            ctx->pc = 0x11A3B0u;
            goto label_11a3b0;
        }
    }
    ctx->pc = 0x11A39Cu;
    // 0x11a39c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11a39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a3a0: 0xc04b76a  jal         func_12DDA8
    ctx->pc = 0x11A3A0u;
    SET_GPR_U32(ctx, 31, 0x11A3A8u);
    ctx->pc = 0x11A3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A3A0u;
            // 0x11a3a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDA8u;
    if (runtime->hasFunction(0x12DDA8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A3A8u; }
        if (ctx->pc != 0x11A3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x12dda8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A3A8u; }
        if (ctx->pc != 0x11A3A8u) { return; }
    }
    ctx->pc = 0x11A3A8u;
    // 0x11a3a8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x11a3a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x11a3ac: 0x8e28fff0  lw          $t0, -0x10($s1)
    ctx->pc = 0x11a3acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967280)));
label_11a3b0:
    // 0x11a3b0: 0x3102fc00  andi        $v0, $t0, 0xFC00
    ctx->pc = 0x11a3b0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)64512u)));
    // 0x11a3b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A3B4u;
    {
        const bool branch_taken_0x11a3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A3B4u;
            // 0x11a3b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a3b4) {
            ctx->pc = 0x11A3CCu;
            goto label_11a3cc;
        }
    }
    ctx->pc = 0x11A3BCu;
    // 0x11a3bc: 0xc04b76a  jal         func_12DDA8
    ctx->pc = 0x11A3BCu;
    SET_GPR_U32(ctx, 31, 0x11A3C4u);
    ctx->pc = 0x11A3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A3BCu;
            // 0x11a3c0: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDA8u;
    if (runtime->hasFunction(0x12DDA8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A3C4u; }
        if (ctx->pc != 0x11A3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x12dda8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A3C4u; }
        if (ctx->pc != 0x11A3C4u) { return; }
    }
    ctx->pc = 0x11A3C4u;
    // 0x11a3c4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x11a3c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x11a3c8: 0x8e28fff0  lw          $t0, -0x10($s1)
    ctx->pc = 0x11a3c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967280)));
label_11a3cc:
    // 0x11a3cc: 0x1131024  and         $v0, $t0, $s3
    ctx->pc = 0x11a3ccu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 8), GPR_VEC(ctx, 19)));
    // 0x11a3d0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11A3D0u;
    {
        const bool branch_taken_0x11a3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A3D0u;
            // 0x11a3d4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a3d0) {
            ctx->pc = 0x11A3F8u;
            goto label_11a3f8;
        }
    }
    ctx->pc = 0x11A3D8u;
    // 0x11a3d8: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x11a3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x11a3dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11a3dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a3e0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11a3e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a3e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11a3e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a3e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11a3e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a3ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a3ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a3f0: 0x804b76a  j           func_12DDA8
    ctx->pc = 0x11A3F0u;
    ctx->pc = 0x11A3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A3F0u;
            // 0x11a3f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDA8u;
    if (runtime->hasFunction(0x12DDA8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceVu0CopyVector_0x12dda8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x11A3F8u;
label_11a3f8:
    // 0x11a3f8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11a3f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a3fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11a3fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a400: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11a400u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a404: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a408: 0x3e00008  jr          $ra
    ctx->pc = 0x11A408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A408u;
            // 0x11a40c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11A368u: goto label_11a368;
            case 0x11A3B0u: goto label_11a3b0;
            case 0x11A3CCu: goto label_11a3cc;
            case 0x11A3F8u: goto label_11a3f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11A410u;
}
