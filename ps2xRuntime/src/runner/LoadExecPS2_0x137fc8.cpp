#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: LoadExecPS2
// Address: 0x137fc8 - 0x138010
void LoadExecPS2_0x137fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("LoadExecPS2_0x137fc8");
#endif

    ctx->pc = 0x137fc8u;

    // 0x137fc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x137fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x137fcc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x137fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x137fd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x137fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x137fd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x137fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x137fd8: 0xc04df8e  jal         func_137E38
    ctx->pc = 0x137FD8u;
    SET_GPR_U32(ctx, 31, 0x137FE0u);
    ctx->pc = 0x137FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137FD8u;
            // 0x137fdc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137E38u;
    if (runtime->hasFunction(0x137E38u)) {
        auto targetFn = runtime->lookupFunction(0x137E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137FE0u; }
        if (ctx->pc != 0x137FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetArg_0x137e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137FE0u; }
        if (ctx->pc != 0x137FE0u) { return; }
    }
    ctx->pc = 0x137FE0u;
    // 0x137fe0: 0xc04dfd4  jal         func_137F50
    ctx->pc = 0x137FE0u;
    SET_GPR_U32(ctx, 31, 0x137FE8u);
    ctx->pc = 0x137FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137FE0u;
            // 0x137fe4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137F50u;
    if (runtime->hasFunction(0x137F50u)) {
        auto targetFn = runtime->lookupFunction(0x137F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137FE8u; }
        if (ctx->pc != 0x137FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TerminateLibrary_0x137f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137FE8u; }
        if (ctx->pc != 0x137FE8u) { return; }
    }
    ctx->pc = 0x137FE8u;
    // 0x137fe8: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x137fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x137fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x137fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137ff0: 0x8c460840  lw          $a2, 0x840($v0)
    ctx->pc = 0x137ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    // 0x137ff4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x137ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137ff8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x137ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137ffc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x137ffcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138000: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x138000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x138004: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x138004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138008: 0x804ba28  j           func_12E8A0
    ctx->pc = 0x138008u;
    ctx->pc = 0x13800Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138008u;
            // 0x13800c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E8A0u;
    if (runtime->hasFunction(0x12E8A0u)) {
        auto targetFn = runtime->lookupFunction(0x12E8A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        ps2__LoadExecPS2_0x12e8a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x138010u;
}
