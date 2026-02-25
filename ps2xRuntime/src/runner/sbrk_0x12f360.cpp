#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: sbrk
// Address: 0x12f360 - 0x12f40c
void sbrk_0x12f360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sbrk_0x12f360");
#endif

    ctx->pc = 0x12f360u;

    // 0x12f360: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12f360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12f364: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12f364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12f368: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12f368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12f36c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x12f36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x12f370: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12f370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12f374: 0x40116000  mfc0        $s1, Status
    ctx->pc = 0x12f374u;
    SET_GPR_S32(ctx, 17, (int32_t)ctx->cop0_status);
    // 0x12f378: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x12f378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x12f37c: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x12f37cu;
    SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 17), GPR_VEC(ctx, 2)));
    // 0x12f380: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x12F380u;
    {
        const bool branch_taken_0x12f380 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F380u;
            // 0x12f384: 0x3c120021  lui         $s2, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f380) {
            ctx->pc = 0x12F3ACu;
            goto label_12f3ac;
        }
    }
    ctx->pc = 0x12F388u;
label_12f388:
    // 0x12f388: 0x42000039  di
    ctx->pc = 0x12f388u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x12f38c: 0x40f  sync.p
    ctx->pc = 0x12f38cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x12f390: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x12f390u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x12f394: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x12f394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x12f398: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12f398u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12f39c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12F39Cu;
    {
        const bool branch_taken_0x12f39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f39c) {
            ctx->pc = 0x12F388u;
            goto label_12f388;
        }
    }
    ctx->pc = 0x12F3A4u;
    // 0x12f3a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12F3A4u;
    {
        const bool branch_taken_0x12f3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F3A4u;
            // 0x12f3a8: 0x8e4203f4  lw          $v0, 0x3F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f3a4) {
            ctx->pc = 0x12F3B0u;
            goto label_12f3b0;
        }
    }
    ctx->pc = 0x12F3ACu;
label_12f3ac:
    // 0x12f3ac: 0x8e4203f4  lw          $v0, 0x3F4($s2)
    ctx->pc = 0x12f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1012)));
label_12f3b0:
    // 0x12f3b0: 0xc04bb10  jal         func_12EC40
    ctx->pc = 0x12F3B0u;
    SET_GPR_U32(ctx, 31, 0x12F3B8u);
    ctx->pc = 0x12F3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F3B0u;
            // 0x12f3b4: 0x448021  addu        $s0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC40u;
    if (runtime->hasFunction(0x12EC40u)) {
        auto targetFn = runtime->lookupFunction(0x12EC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F3B8u; }
        if (ctx->pc != 0x12F3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndOfHeap_0x12ec40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F3B8u; }
        if (ctx->pc != 0x12F3B8u) { return; }
    }
    ctx->pc = 0x12F3B8u;
    // 0x12f3b8: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x12f3b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x12f3bc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12F3BCu;
    {
        const bool branch_taken_0x12f3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F3BCu;
            // 0x12f3c0: 0x8e4203f4  lw          $v0, 0x3F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f3bc) {
            ctx->pc = 0x12F3E8u;
            goto label_12f3e8;
        }
    }
    ctx->pc = 0x12F3C4u;
    // 0x12f3c4: 0xc04e5ce  jal         func_139738
    ctx->pc = 0x12F3C4u;
    SET_GPR_U32(ctx, 31, 0x12F3CCu);
    ctx->pc = 0x139738u;
    if (runtime->hasFunction(0x139738u)) {
        auto targetFn = runtime->lookupFunction(0x139738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F3CCu; }
        if (ctx->pc != 0x12F3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x139738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F3CCu; }
        if (ctx->pc != 0x12F3CCu) { return; }
    }
    ctx->pc = 0x12F3CCu;
    // 0x12f3cc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x12f3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12f3d0: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x12F3D0u;
    {
        const bool branch_taken_0x12f3d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F3D0u;
            // 0x12f3d4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f3d0) {
            ctx->pc = 0x12F3DCu;
            goto label_12f3dc;
        }
    }
    ctx->pc = 0x12F3D8u;
    // 0x12f3d8: 0x42000038  ei
    ctx->pc = 0x12f3d8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_12f3dc:
    // 0x12f3dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x12f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x12f3e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12F3E0u;
    {
        const bool branch_taken_0x12f3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F3E0u;
            // 0x12f3e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f3e0) {
            ctx->pc = 0x12F3F4u;
            goto label_12f3f4;
        }
    }
    ctx->pc = 0x12F3E8u;
label_12f3e8:
    // 0x12f3e8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x12F3E8u;
    {
        const bool branch_taken_0x12f3e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F3E8u;
            // 0x12f3ec: 0xae5003f4  sw          $s0, 0x3F4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1012), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f3e8) {
            ctx->pc = 0x12F3F4u;
            goto label_12f3f4;
        }
    }
    ctx->pc = 0x12F3F0u;
    // 0x12f3f0: 0x42000038  ei
    ctx->pc = 0x12f3f0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_12f3f4:
    // 0x12f3f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12f3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12f3f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12f3f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f3fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x12f3fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f400: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12f400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f404: 0x3e00008  jr          $ra
    ctx->pc = 0x12F404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F404u;
            // 0x12f408: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F388u: goto label_12f388;
            case 0x12F3ACu: goto label_12f3ac;
            case 0x12F3B0u: goto label_12f3b0;
            case 0x12F3DCu: goto label_12f3dc;
            case 0x12F3E8u: goto label_12f3e8;
            case 0x12F3F4u: goto label_12f3f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12F40Cu;
}
