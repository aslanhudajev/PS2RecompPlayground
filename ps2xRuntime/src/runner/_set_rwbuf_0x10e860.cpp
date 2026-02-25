#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _set_rwbuf
// Address: 0x10e860 - 0x10e8dc
void _set_rwbuf_0x10e860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_set_rwbuf_0x10e860");
#endif

    ctx->pc = 0x10e860u;

    // 0x10e860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10e860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10e864: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x10e864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x10e868: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10e868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10e86c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10e86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10e870: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10e870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e874: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10e874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10e878: 0x24707190  addiu       $s0, $v1, 0x7190
    ctx->pc = 0x10e878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 29072));
    // 0x10e87c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10e87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e880: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x10e880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10e884: 0xac667190  sw          $a2, 0x7190($v1)
    ctx->pc = 0x10e884u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 29072), GPR_U32(ctx, 6));
    // 0x10e888: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x10e888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x10e88c: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x10e88cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x10e890: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x10e890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x10e894: 0xc043a14  jal         func_10E850
    ctx->pc = 0x10E894u;
    SET_GPR_U32(ctx, 31, 0x10E89Cu);
    ctx->pc = 0x10E898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E894u;
            // 0x10e898: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E850u;
    if (runtime->hasFunction(0x10E850u)) {
        auto targetFn = runtime->lookupFunction(0x10E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E89Cu; }
        if (ctx->pc != 0x10E89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _calc_freeq_0x10e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E89Cu; }
        if (ctx->pc != 0x10E89Cu) { return; }
    }
    ctx->pc = 0x10E89Cu;
    // 0x10e89c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x10e89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x10e8a0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x10e8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x10e8a4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x10e8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x10e8a8: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x10e8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x10e8ac: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x10e8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x10e8b0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x10e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10e8b4: 0xacb07188  sw          $s0, 0x7188($a1)
    ctx->pc = 0x10e8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 29064), GPR_U32(ctx, 16));
    // 0x10e8b8: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x10e8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x10e8bc: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x10e8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x10e8c0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x10e8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x10e8c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10e8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e8c8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x10e8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x10e8cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10e8ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e8d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10e8d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x10E8D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E8D4u;
            // 0x10e8d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E8DCu;
}
