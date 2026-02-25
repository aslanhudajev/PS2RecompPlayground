#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MicroMakeCODEPacket
// Address: 0x1165f0 - 0x116684
void MicroMakeCODEPacket_0x1165f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MicroMakeCODEPacket_0x1165f0");
#endif

    ctx->pc = 0x1165f0u;

    // 0x1165f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1165f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1165f4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1165f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1165f8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1165f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1165fc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1165fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116600: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x116600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x116604: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x116604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116608: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x116608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11660c: 0xc043afc  jal         func_10EBF0
    ctx->pc = 0x11660Cu;
    SET_GPR_U32(ctx, 31, 0x116614u);
    ctx->pc = 0x116610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11660Cu;
            // 0x116610: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EBF0u;
    if (runtime->hasFunction(0x10EBF0u)) {
        auto targetFn = runtime->lookupFunction(0x10EBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116614u; }
        if (ctx->pc != 0x116614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_ChainStart_0x10ebf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116614u; }
        if (ctx->pc != 0x116614u) { return; }
    }
    ctx->pc = 0x116614u;
    // 0x116614: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x116614u;
    {
        const bool branch_taken_0x116614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116614) {
            ctx->pc = 0x116664u;
            goto label_116664;
        }
    }
    ctx->pc = 0x11661Cu;
    // 0x11661c: 0xc043e3e  jal         func_10F8F8
    ctx->pc = 0x11661Cu;
    SET_GPR_U32(ctx, 31, 0x116624u);
    ctx->pc = 0x116620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11661Cu;
            // 0x116620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F8F8u;
    if (runtime->hasFunction(0x10F8F8u)) {
        auto targetFn = runtime->lookupFunction(0x10F8F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116624u; }
        if (ctx->pc != 0x116624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_CallPtr_0x10f8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116624u; }
        if (ctx->pc != 0x116624u) { return; }
    }
    ctx->pc = 0x116624u;
    // 0x116624: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x116624u;
    {
        const bool branch_taken_0x116624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116624u;
            // 0x116628: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116624) {
            ctx->pc = 0x116664u;
            goto label_116664;
        }
    }
    ctx->pc = 0x11662Cu;
    // 0x11662c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x11662cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x116630: 0xc043d72  jal         func_10F5C8
    ctx->pc = 0x116630u;
    SET_GPR_U32(ctx, 31, 0x116638u);
    ctx->pc = 0x116634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116630u;
            // 0x116634: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F5C8u;
    if (runtime->hasFunction(0x10F5C8u)) {
        auto targetFn = runtime->lookupFunction(0x10F5C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116638u; }
        if (ctx->pc != 0x116638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadPtr_0x10f5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116638u; }
        if (ctx->pc != 0x116638u) { return; }
    }
    ctx->pc = 0x116638u;
    // 0x116638: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x116638u;
    {
        const bool branch_taken_0x116638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11663Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116638u;
            // 0x11663c: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116638) {
            ctx->pc = 0x116664u;
            goto label_116664;
        }
    }
    ctx->pc = 0x116640u;
    // 0x116640: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x116640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x116644: 0xc0439d0  jal         func_10E740
    ctx->pc = 0x116644u;
    SET_GPR_U32(ctx, 31, 0x11664Cu);
    ctx->pc = 0x116648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116644u;
            // 0x116648: 0xb22823  subu        $a1, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E740u;
    if (runtime->hasFunction(0x10E740u)) {
        auto targetFn = runtime->lookupFunction(0x10E740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11664Cu; }
        if (ctx->pc != 0x11664Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAInit_DBuf_0x10e740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11664Cu; }
        if (ctx->pc != 0x11664Cu) { return; }
    }
    ctx->pc = 0x11664Cu;
    // 0x11664c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11664Cu;
    {
        const bool branch_taken_0x11664c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11664c) {
            ctx->pc = 0x116664u;
            goto label_116664;
        }
    }
    ctx->pc = 0x116654u;
    // 0x116654: 0xc043b18  jal         func_10EC60
    ctx->pc = 0x116654u;
    SET_GPR_U32(ctx, 31, 0x11665Cu);
    ctx->pc = 0x116658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116654u;
            // 0x116658: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EC60u;
    if (runtime->hasFunction(0x10EC60u)) {
        auto targetFn = runtime->lookupFunction(0x10EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11665Cu; }
        if (ctx->pc != 0x11665Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_ChainEnd_0x10ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11665Cu; }
        if (ctx->pc != 0x11665Cu) { return; }
    }
    ctx->pc = 0x11665Cu;
    // 0x11665c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x11665Cu;
    {
        const bool branch_taken_0x11665c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11665c) {
            ctx->pc = 0x116660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11665Cu;
            // 0x116660: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11666Cu;
            goto label_11666c;
        }
    }
    ctx->pc = 0x116664u;
label_116664:
    // 0x116664: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x116664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x116668: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x116668u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
label_11666c:
    // 0x11666c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11666cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x116670: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x116670u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x116674: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x116674u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116678: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x116678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11667c: 0x3e00008  jr          $ra
    ctx->pc = 0x11667Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11667Cu;
            // 0x116680: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116664u: goto label_116664;
            case 0x11666Cu: goto label_11666c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x116684u;
}
