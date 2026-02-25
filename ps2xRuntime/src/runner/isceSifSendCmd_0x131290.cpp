#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: isceSifSendCmd
// Address: 0x131290 - 0x1312cc
void isceSifSendCmd_0x131290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("isceSifSendCmd_0x131290");
#endif

    ctx->pc = 0x131290u;

    // 0x131290: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x131290u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131294: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x131294u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131298: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x131298u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13129c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13129cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1312a0: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x1312a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1312a4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1312a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1312a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1312a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1312ac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1312acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1312b0: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1312b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1312b4: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x1312b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1312b8: 0xc04c446  jal         func_131118
    ctx->pc = 0x1312B8u;
    SET_GPR_U32(ctx, 31, 0x1312C0u);
    ctx->pc = 0x1312BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1312B8u;
            // 0x1312bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131118u;
    if (runtime->hasFunction(0x131118u)) {
        auto targetFn = runtime->lookupFunction(0x131118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1312C0u; }
        if (ctx->pc != 0x1312C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceSifSendCmd_0x131118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1312C0u; }
        if (ctx->pc != 0x1312C0u) { return; }
    }
    ctx->pc = 0x1312C0u;
    // 0x1312c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1312c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1312c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1312C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1312C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1312C4u;
            // 0x1312c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1312CCu;
}
