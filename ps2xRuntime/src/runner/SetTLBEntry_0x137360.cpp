#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SetTLBEntry
// Address: 0x137360 - 0x137390
void SetTLBEntry_0x137360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SetTLBEntry_0x137360");
#endif

    ctx->pc = 0x137360u;

    // 0x137360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x137360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x137364: 0x2482fff3  addiu       $v0, $a0, -0xD
    ctx->pc = 0x137364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967283));
    // 0x137368: 0x2c420023  sltiu       $v0, $v0, 0x23
    ctx->pc = 0x137368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x13736c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13736Cu;
    {
        const bool branch_taken_0x13736c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13736Cu;
            // 0x137370: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13736c) {
            ctx->pc = 0x13737Cu;
            goto label_13737c;
        }
    }
    ctx->pc = 0x137374u;
    // 0x137374: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x137374u;
    {
        const bool branch_taken_0x137374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137374u;
            // 0x137378: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137374) {
            ctx->pc = 0x137384u;
            goto label_137384;
        }
    }
    ctx->pc = 0x13737Cu;
label_13737c:
    // 0x13737c: 0xc04dcd4  jal         func_137350
    ctx->pc = 0x13737Cu;
    SET_GPR_U32(ctx, 31, 0x137384u);
    ctx->pc = 0x137350u;
    if (runtime->hasFunction(0x137350u)) {
        auto targetFn = runtime->lookupFunction(0x137350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137384u; }
        if (ctx->pc != 0x137384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__SetTLBEntry_0x137350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137384u; }
        if (ctx->pc != 0x137384u) { return; }
    }
    ctx->pc = 0x137384u;
label_137384:
    // 0x137384: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137388: 0x3e00008  jr          $ra
    ctx->pc = 0x137388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13738Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137388u;
            // 0x13738c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13737Cu: goto label_13737c;
            case 0x137384u: goto label_137384;
            default: break;
        }
        return;
    }
    ctx->pc = 0x137390u;
}
