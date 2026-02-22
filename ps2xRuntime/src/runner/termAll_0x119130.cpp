#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: termAll
// Address: 0x119130 - 0x1191d0
void termAll_0x119130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x119130u;

    // 0x119130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x119134: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x119134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x119138: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11913c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11913cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x119140: 0xc04655c  jal         func_119570
    ctx->pc = 0x119140u;
    SET_GPR_U32(ctx, 31, 0x119148u);
    ctx->pc = 0x119144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119140u;
            // 0x119144: 0x2484a000  addiu       $a0, $a0, -0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119570u;
    if (runtime->hasFunction(0x119570u)) {
        auto targetFn = runtime->lookupFunction(0x119570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119148u; }
        if (ctx->pc != 0x119148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        readBufDelete_0x119570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119148u; }
        if (ctx->pc != 0x119148u) { return; }
    }
    ctx->pc = 0x119148u;
    // 0x119148: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x119148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x11914c: 0xc046a46  jal         func_11A918
    ctx->pc = 0x11914Cu;
    SET_GPR_U32(ctx, 31, 0x119154u);
    ctx->pc = 0x119150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11914Cu;
            // 0x119150: 0x2484e518  addiu       $a0, $a0, -0x1AE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A918u;
    if (runtime->hasFunction(0x11A918u)) {
        auto targetFn = runtime->lookupFunction(0x11A918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119154u; }
        if (ctx->pc != 0x119154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        voBufDelete_0x11a918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119154u; }
        if (ctx->pc != 0x119154u) { return; }
    }
    ctx->pc = 0x119154u;
    // 0x119154: 0xc04383c  jal         func_10E0F0
    ctx->pc = 0x119154u;
    SET_GPR_U32(ctx, 31, 0x11915Cu);
    ctx->pc = 0x119158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119154u;
            // 0x119158: 0x8f8484c4  lw          $a0, -0x7B3C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935748)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E0F0u;
    if (runtime->hasFunction(0x10E0F0u)) {
        auto targetFn = runtime->lookupFunction(0x10E0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11915Cu; }
        if (ctx->pc != 0x11915Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TerminateThread_0x10e0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11915Cu; }
        if (ctx->pc != 0x11915Cu) { return; }
    }
    ctx->pc = 0x11915Cu;
    // 0x11915c: 0xc04382c  jal         func_10E0B0
    ctx->pc = 0x11915Cu;
    SET_GPR_U32(ctx, 31, 0x119164u);
    ctx->pc = 0x119160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11915Cu;
            // 0x119160: 0x8f8484c4  lw          $a0, -0x7B3C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935748)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E0B0u;
    if (runtime->hasFunction(0x10E0B0u)) {
        auto targetFn = runtime->lookupFunction(0x10E0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119164u; }
        if (ctx->pc != 0x119164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteThread_0x10e0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119164u; }
        if (ctx->pc != 0x119164u) { return; }
    }
    ctx->pc = 0x119164u;
    // 0x119164: 0xc04383c  jal         func_10E0F0
    ctx->pc = 0x119164u;
    SET_GPR_U32(ctx, 31, 0x11916Cu);
    ctx->pc = 0x119168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119164u;
            // 0x119168: 0x8f8484c0  lw          $a0, -0x7B40($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935744)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E0F0u;
    if (runtime->hasFunction(0x10E0F0u)) {
        auto targetFn = runtime->lookupFunction(0x10E0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11916Cu; }
        if (ctx->pc != 0x11916Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TerminateThread_0x10e0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11916Cu; }
        if (ctx->pc != 0x11916Cu) { return; }
    }
    ctx->pc = 0x11916Cu;
    // 0x11916c: 0xc04382c  jal         func_10E0B0
    ctx->pc = 0x11916Cu;
    SET_GPR_U32(ctx, 31, 0x119174u);
    ctx->pc = 0x119170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11916Cu;
            // 0x119170: 0x8f8484c0  lw          $a0, -0x7B40($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935744)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E0B0u;
    if (runtime->hasFunction(0x10E0B0u)) {
        auto targetFn = runtime->lookupFunction(0x10E0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119174u; }
        if (ctx->pc != 0x119174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteThread_0x10e0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119174u; }
        if (ctx->pc != 0x119174u) { return; }
    }
    ctx->pc = 0x119174u;
    // 0x119174: 0xc043ac6  jal         func_10EB18
    ctx->pc = 0x119174u;
    SET_GPR_U32(ctx, 31, 0x11917Cu);
    ctx->pc = 0x119178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119174u;
            // 0x119178: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EB18u;
    if (runtime->hasFunction(0x10EB18u)) {
        auto targetFn = runtime->lookupFunction(0x10EB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11917Cu; }
        if (ctx->pc != 0x11917Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DisableDmac_0x10eb18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11917Cu; }
        if (ctx->pc != 0x11917Cu) { return; }
    }
    ctx->pc = 0x11917Cu;
    // 0x11917c: 0x3c100075  lui         $s0, 0x75
    ctx->pc = 0x11917cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)117 << 16));
    // 0x119180: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x119180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x119184: 0x2610e5c8  addiu       $s0, $s0, -0x1A38
    ctx->pc = 0x119184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960584));
    // 0x119188: 0xc0437f4  jal         func_10DFD0
    ctx->pc = 0x119188u;
    SET_GPR_U32(ctx, 31, 0x119190u);
    ctx->pc = 0x11918Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119188u;
            // 0x11918c: 0x8e0500b0  lw          $a1, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DFD0u;
    if (runtime->hasFunction(0x10DFD0u)) {
        auto targetFn = runtime->lookupFunction(0x10DFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119190u; }
        if (ctx->pc != 0x119190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RemoveDmacHandler_0x10dfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119190u; }
        if (ctx->pc != 0x119190u) { return; }
    }
    ctx->pc = 0x119190u;
    // 0x119190: 0xc043a92  jal         func_10EA48
    ctx->pc = 0x119190u;
    SET_GPR_U32(ctx, 31, 0x119198u);
    ctx->pc = 0x119194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119190u;
            // 0x119194: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EA48u;
    if (runtime->hasFunction(0x10EA48u)) {
        auto targetFn = runtime->lookupFunction(0x10EA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119198u; }
        if (ctx->pc != 0x119198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DisableIntc_0x10ea48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119198u; }
        if (ctx->pc != 0x119198u) { return; }
    }
    ctx->pc = 0x119198u;
    // 0x119198: 0x8e0500b4  lw          $a1, 0xB4($s0)
    ctx->pc = 0x119198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x11919c: 0xc0437e8  jal         func_10DFA0
    ctx->pc = 0x11919Cu;
    SET_GPR_U32(ctx, 31, 0x1191A4u);
    ctx->pc = 0x1191A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11919Cu;
            // 0x1191a0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DFA0u;
    if (runtime->hasFunction(0x10DFA0u)) {
        auto targetFn = runtime->lookupFunction(0x10DFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1191A4u; }
        if (ctx->pc != 0x1191A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RemoveIntcHandler_0x10dfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1191A4u; }
        if (ctx->pc != 0x1191A4u) { return; }
    }
    ctx->pc = 0x1191A4u;
    // 0x1191a4: 0xc04683e  jal         func_11A0F8
    ctx->pc = 0x1191A4u;
    SET_GPR_U32(ctx, 31, 0x1191ACu);
    ctx->pc = 0x1191A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1191A4u;
            // 0x1191a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A0F8u;
    if (runtime->hasFunction(0x11A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x11A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1191ACu; }
        if (ctx->pc != 0x1191ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecDelete_0x11a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1191ACu; }
        if (ctx->pc != 0x1191ACu) { return; }
    }
    ctx->pc = 0x1191ACu;
    // 0x1191ac: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x1191acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x1191b0: 0xc0465d4  jal         func_119750
    ctx->pc = 0x1191B0u;
    SET_GPR_U32(ctx, 31, 0x1191B8u);
    ctx->pc = 0x1191B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1191B0u;
            // 0x1191b4: 0x2484e568  addiu       $a0, $a0, -0x1A98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119750u;
    if (runtime->hasFunction(0x119750u)) {
        auto targetFn = runtime->lookupFunction(0x119750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1191B8u; }
        if (ctx->pc != 0x1191B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        audioDecDelete_0x119750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1191B8u; }
        if (ctx->pc != 0x1191B8u) { return; }
    }
    ctx->pc = 0x1191B8u;
    // 0x1191b8: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x1191b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x1191bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1191bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1191c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1191c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1191c4: 0x2484e680  addiu       $a0, $a0, -0x1980
    ctx->pc = 0x1191c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960768));
    // 0x1191c8: 0x8046fce  j           func_11BF38
    ctx->pc = 0x1191C8u;
    ctx->pc = 0x1191CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1191C8u;
            // 0x1191cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11BF38u;
    if (runtime->hasFunction(0x11BF38u)) {
        auto targetFn = runtime->lookupFunction(0x11BF38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        strFileClose_0x11bf38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1191D0u;
}
