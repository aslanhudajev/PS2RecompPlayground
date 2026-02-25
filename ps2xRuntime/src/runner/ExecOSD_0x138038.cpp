#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ExecOSD
// Address: 0x138038 - 0x138084
void ExecOSD_0x138038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ExecOSD_0x138038");
#endif

    ctx->pc = 0x138038u;

    // 0x138038: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x138038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13803c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x13803cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138040: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x138040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x138044: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x138044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138048: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x138048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13804c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x13804cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x138050: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x138050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138054: 0xc04df8e  jal         func_137E38
    ctx->pc = 0x138054u;
    SET_GPR_U32(ctx, 31, 0x13805Cu);
    ctx->pc = 0x138058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138054u;
            // 0x138058: 0x2484f9d0  addiu       $a0, $a0, -0x630 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137E38u;
    if (runtime->hasFunction(0x137E38u)) {
        auto targetFn = runtime->lookupFunction(0x137E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13805Cu; }
        if (ctx->pc != 0x13805Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetArg_0x137e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13805Cu; }
        if (ctx->pc != 0x13805Cu) { return; }
    }
    ctx->pc = 0x13805Cu;
    // 0x13805c: 0xc04dfd4  jal         func_137F50
    ctx->pc = 0x13805Cu;
    SET_GPR_U32(ctx, 31, 0x138064u);
    ctx->pc = 0x137F50u;
    if (runtime->hasFunction(0x137F50u)) {
        auto targetFn = runtime->lookupFunction(0x137F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138064u; }
        if (ctx->pc != 0x138064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TerminateLibrary_0x137f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138064u; }
        if (ctx->pc != 0x138064u) { return; }
    }
    ctx->pc = 0x138064u;
    // 0x138064: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x138064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x138068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x138068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13806c: 0x8c450840  lw          $a1, 0x840($v0)
    ctx->pc = 0x13806cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    // 0x138070: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x138070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x138074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138078: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x138078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x13807c: 0x804bc20  j           func_12F080
    ctx->pc = 0x13807Cu;
    ctx->pc = 0x138080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13807Cu;
            // 0x138080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F080u;
    if (runtime->hasFunction(0x12F080u)) {
        auto targetFn = runtime->lookupFunction(0x12F080u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        ps2__ExecOSD_0x12f080(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x138084u;
}
