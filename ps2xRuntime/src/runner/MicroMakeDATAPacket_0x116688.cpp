#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MicroMakeDATAPacket
// Address: 0x116688 - 0x1166e0
void MicroMakeDATAPacket_0x116688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MicroMakeDATAPacket_0x116688");
#endif

    ctx->pc = 0x116688u;

    // 0x116688: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x116688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11668c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11668cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x116690: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x116690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x116694: 0xc043afc  jal         func_10EBF0
    ctx->pc = 0x116694u;
    SET_GPR_U32(ctx, 31, 0x11669Cu);
    ctx->pc = 0x116698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116694u;
            // 0x116698: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EBF0u;
    if (runtime->hasFunction(0x10EBF0u)) {
        auto targetFn = runtime->lookupFunction(0x10EBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11669Cu; }
        if (ctx->pc != 0x11669Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_ChainStart_0x10ebf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11669Cu; }
        if (ctx->pc != 0x11669Cu) { return; }
    }
    ctx->pc = 0x11669Cu;
    // 0x11669c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11669Cu;
    {
        const bool branch_taken_0x11669c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1166A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11669Cu;
            // 0x1166a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11669c) {
            ctx->pc = 0x1166C8u;
            goto label_1166c8;
        }
    }
    ctx->pc = 0x1166A4u;
    // 0x1166a4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1166a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1166a8: 0xc043d72  jal         func_10F5C8
    ctx->pc = 0x1166A8u;
    SET_GPR_U32(ctx, 31, 0x1166B0u);
    ctx->pc = 0x1166ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1166A8u;
            // 0x1166ac: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F5C8u;
    if (runtime->hasFunction(0x10F5C8u)) {
        auto targetFn = runtime->lookupFunction(0x10F5C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1166B0u; }
        if (ctx->pc != 0x1166B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadPtr_0x10f5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1166B0u; }
        if (ctx->pc != 0x1166B0u) { return; }
    }
    ctx->pc = 0x1166B0u;
    // 0x1166b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1166B0u;
    {
        const bool branch_taken_0x1166b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1166b0) {
            ctx->pc = 0x1166C8u;
            goto label_1166c8;
        }
    }
    ctx->pc = 0x1166B8u;
    // 0x1166b8: 0xc043b18  jal         func_10EC60
    ctx->pc = 0x1166B8u;
    SET_GPR_U32(ctx, 31, 0x1166C0u);
    ctx->pc = 0x1166BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1166B8u;
            // 0x1166bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EC60u;
    if (runtime->hasFunction(0x10EC60u)) {
        auto targetFn = runtime->lookupFunction(0x10EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1166C0u; }
        if (ctx->pc != 0x1166C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_ChainEnd_0x10ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1166C0u; }
        if (ctx->pc != 0x1166C0u) { return; }
    }
    ctx->pc = 0x1166C0u;
    // 0x1166c0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1166C0u;
    {
        const bool branch_taken_0x1166c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1166c0) {
            ctx->pc = 0x1166C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1166C0u;
            // 0x1166c4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1166D0u;
            goto label_1166d0;
        }
    }
    ctx->pc = 0x1166C8u;
label_1166c8:
    // 0x1166c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1166c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1166cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1166ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
label_1166d0:
    // 0x1166d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1166d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1166d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1166d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1166d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1166D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1166DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1166D8u;
            // 0x1166dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1166C8u: goto label_1166c8;
            case 0x1166D0u: goto label_1166d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1166E0u;
}
