#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _register
// Address: 0x110888 - 0x110910
void _register_0x110888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_register_0x110888");
#endif

    ctx->pc = 0x110888u;

    // 0x110888: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x110888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11088c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11088cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x110890: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x110890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x110894: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x110894u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110898: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x110898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11089c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11089cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1108a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1108a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1108a4: 0xc043afc  jal         func_10EBF0
    ctx->pc = 0x1108A4u;
    SET_GPR_U32(ctx, 31, 0x1108ACu);
    ctx->pc = 0x1108A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1108A4u;
            // 0x1108a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EBF0u;
    if (runtime->hasFunction(0x10EBF0u)) {
        auto targetFn = runtime->lookupFunction(0x10EBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1108ACu; }
        if (ctx->pc != 0x1108ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_ChainStart_0x10ebf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1108ACu; }
        if (ctx->pc != 0x1108ACu) { return; }
    }
    ctx->pc = 0x1108ACu;
    // 0x1108ac: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1108ACu;
    {
        const bool branch_taken_0x1108ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1108B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1108ACu;
            // 0x1108b0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1108ac) {
            ctx->pc = 0x1108FCu;
            goto label_1108fc;
        }
    }
    ctx->pc = 0x1108B4u;
    // 0x1108b4: 0xc043cd0  jal         func_10F340
    ctx->pc = 0x1108B4u;
    SET_GPR_U32(ctx, 31, 0x1108BCu);
    ctx->pc = 0x10F340u;
    if (runtime->hasFunction(0x10F340u)) {
        auto targetFn = runtime->lookupFunction(0x10F340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1108BCu; }
        if (ctx->pc != 0x1108BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_WaitMicro_0x10f340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1108BCu; }
        if (ctx->pc != 0x1108BCu) { return; }
    }
    ctx->pc = 0x1108BCu;
    // 0x1108bc: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1108BCu;
    {
        const bool branch_taken_0x1108bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1108C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1108BCu;
            // 0x1108c0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1108bc) {
            ctx->pc = 0x1108FCu;
            goto label_1108fc;
        }
    }
    ctx->pc = 0x1108C4u;
    // 0x1108c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1108c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1108c8: 0xc043fc8  jal         func_10FF20
    ctx->pc = 0x1108C8u;
    SET_GPR_U32(ctx, 31, 0x1108D0u);
    ctx->pc = 0x1108CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1108C8u;
            // 0x1108cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF20u;
    if (runtime->hasFunction(0x10FF20u)) {
        auto targetFn = runtime->lookupFunction(0x10FF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1108D0u; }
        if (ctx->pc != 0x1108D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadGS_0x10ff20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1108D0u; }
        if (ctx->pc != 0x1108D0u) { return; }
    }
    ctx->pc = 0x1108D0u;
    // 0x1108d0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1108D0u;
    {
        const bool branch_taken_0x1108d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1108D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1108D0u;
            // 0x1108d4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1108d0) {
            ctx->pc = 0x1108FCu;
            goto label_1108fc;
        }
    }
    ctx->pc = 0x1108D8u;
    // 0x1108d8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1108d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1108dc: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1108dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1108e0: 0x248471e8  addiu       $a0, $a0, 0x71E8
    ctx->pc = 0x1108e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29160));
    // 0x1108e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1108e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1108e8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1108e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1108ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1108ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1108f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1108f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1108f4: 0x8043b18  j           func_10EC60
    ctx->pc = 0x1108F4u;
    ctx->pc = 0x1108F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1108F4u;
            // 0x1108f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EC60u;
    if (runtime->hasFunction(0x10EC60u)) {
        auto targetFn = runtime->lookupFunction(0x10EC60u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceHiDMAMake_ChainEnd_0x10ec60(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1108FCu;
label_1108fc:
    // 0x1108fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1108fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110900: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x110900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110904: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x110904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110908: 0x3e00008  jr          $ra
    ctx->pc = 0x110908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11090Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110908u;
            // 0x11090c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1108FCu: goto label_1108fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x110910u;
}
