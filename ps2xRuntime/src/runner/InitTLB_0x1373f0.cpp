#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitTLB
// Address: 0x1373f0 - 0x137430
void InitTLB_0x1373f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitTLB_0x1373f0");
#endif

    ctx->pc = 0x1373f0u;

    // 0x1373f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1373f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1373f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1373f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1373f8: 0xc04bc30  jal         func_12F0C0
    ctx->pc = 0x1373F8u;
    SET_GPR_U32(ctx, 31, 0x137400u);
    ctx->pc = 0x12F0C0u;
    if (runtime->hasFunction(0x12F0C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137400u; }
        if (ctx->pc != 0x137400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMemorySize_0x12f0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137400u; }
        if (ctx->pc != 0x137400u) { return; }
    }
    ctx->pc = 0x137400u;
    // 0x137400: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x137400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x137404: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x137404u;
    {
        const bool branch_taken_0x137404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x137404) {
            ctx->pc = 0x13741Cu;
            goto label_13741c;
        }
    }
    ctx->pc = 0x13740Cu;
    // 0x13740c: 0xc04dd0c  jal         func_137430
    ctx->pc = 0x13740Cu;
    SET_GPR_U32(ctx, 31, 0x137414u);
    ctx->pc = 0x137430u;
    if (runtime->hasFunction(0x137430u)) {
        auto targetFn = runtime->lookupFunction(0x137430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137414u; }
        if (ctx->pc != 0x137414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitTLB32MB_0x137430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137414u; }
        if (ctx->pc != 0x137414u) { return; }
    }
    ctx->pc = 0x137414u;
    // 0x137414: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x137414u;
    {
        const bool branch_taken_0x137414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137414u;
            // 0x137418: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137414) {
            ctx->pc = 0x137428u;
            goto label_137428;
        }
    }
    ctx->pc = 0x13741Cu;
label_13741c:
    // 0x13741c: 0xc04bc34  jal         func_12F0D0
    ctx->pc = 0x13741Cu;
    SET_GPR_U32(ctx, 31, 0x137424u);
    ctx->pc = 0x12F0D0u;
    if (runtime->hasFunction(0x12F0D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137424u; }
        if (ctx->pc != 0x137424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__InitTLB_0x12f0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137424u; }
        if (ctx->pc != 0x137424u) { return; }
    }
    ctx->pc = 0x137424u;
    // 0x137424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_137428:
    // 0x137428: 0x3e00008  jr          $ra
    ctx->pc = 0x137428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13742Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137428u;
            // 0x13742c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13741Cu: goto label_13741c;
            case 0x137428u: goto label_137428;
            default: break;
        }
        return;
    }
    ctx->pc = 0x137430u;
}
