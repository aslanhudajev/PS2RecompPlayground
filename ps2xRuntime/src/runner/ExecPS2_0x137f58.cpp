#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ExecPS2
// Address: 0x137f58 - 0x137fc8
void ExecPS2_0x137f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ExecPS2_0x137f58");
#endif

    ctx->pc = 0x137f58u;

    // 0x137f58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x137f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x137f5c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x137f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x137f60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x137f60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137f64: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x137f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x137f68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x137f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x137f6c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x137f6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137f70: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x137f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137f74: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x137f74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x137f78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x137f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137f7c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x137f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x137f80: 0x2484f9d0  addiu       $a0, $a0, -0x630
    ctx->pc = 0x137f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965712));
    // 0x137f84: 0xc04df8e  jal         func_137E38
    ctx->pc = 0x137F84u;
    SET_GPR_U32(ctx, 31, 0x137F8Cu);
    ctx->pc = 0x137F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137F84u;
            // 0x137f88: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137E38u;
    if (runtime->hasFunction(0x137E38u)) {
        auto targetFn = runtime->lookupFunction(0x137E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F8Cu; }
        if (ctx->pc != 0x137F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetArg_0x137e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F8Cu; }
        if (ctx->pc != 0x137F8Cu) { return; }
    }
    ctx->pc = 0x137F8Cu;
    // 0x137f8c: 0xc04dfd4  jal         func_137F50
    ctx->pc = 0x137F8Cu;
    SET_GPR_U32(ctx, 31, 0x137F94u);
    ctx->pc = 0x137F50u;
    if (runtime->hasFunction(0x137F50u)) {
        auto targetFn = runtime->lookupFunction(0x137F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F94u; }
        if (ctx->pc != 0x137F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TerminateLibrary_0x137f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F94u; }
        if (ctx->pc != 0x137F94u) { return; }
    }
    ctx->pc = 0x137F94u;
    // 0x137f94: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x137f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x137f98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x137f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137f9c: 0x8c470840  lw          $a3, 0x840($v0)
    ctx->pc = 0x137f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    // 0x137fa0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x137fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137fa4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x137fa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137fa8: 0xc04ba2c  jal         func_12E8B0
    ctx->pc = 0x137FA8u;
    SET_GPR_U32(ctx, 31, 0x137FB0u);
    ctx->pc = 0x137FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137FA8u;
            // 0x137fac: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E8B0u;
    if (runtime->hasFunction(0x12E8B0u)) {
        auto targetFn = runtime->lookupFunction(0x12E8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137FB0u; }
        if (ctx->pc != 0x137FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__ExecPS2_0x12e8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137FB0u; }
        if (ctx->pc != 0x137FB0u) { return; }
    }
    ctx->pc = 0x137FB0u;
    // 0x137fb0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x137fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137fb4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x137fb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137fb8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x137fb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137fbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x137fbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x137FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137FC0u;
            // 0x137fc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137FC8u;
}
