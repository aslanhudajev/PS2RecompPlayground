#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _decodeOrSkip
// Address: 0x11fc08 - 0x11fc44
void _decodeOrSkip_0x11fc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_decodeOrSkip_0x11fc08");
#endif

    ctx->pc = 0x11fc08u;

    // 0x11fc08: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x11fc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x11fc0c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11fc0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11fc10: 0x8c4319ac  lw          $v1, 0x19AC($v0)
    ctx->pc = 0x11fc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6572)));
    // 0x11fc14: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11fc18: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FC18u;
    {
        const bool branch_taken_0x11fc18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11FC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FC18u;
            // 0x11fc1c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fc18) {
            ctx->pc = 0x11FC30u;
            goto label_11fc30;
        }
    }
    ctx->pc = 0x11FC20u;
    // 0x11fc20: 0xc047f12  jal         func_11FC48
    ctx->pc = 0x11FC20u;
    SET_GPR_U32(ctx, 31, 0x11FC28u);
    ctx->pc = 0x11FC48u;
    if (runtime->hasFunction(0x11FC48u)) {
        auto targetFn = runtime->lookupFunction(0x11FC48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FC28u; }
        if (ctx->pc != 0x11FC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _decodeOrSkipField_0x11fc48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FC28u; }
        if (ctx->pc != 0x11FC28u) { return; }
    }
    ctx->pc = 0x11FC28u;
    // 0x11fc28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11FC28u;
    {
        const bool branch_taken_0x11fc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FC28u;
            // 0x11fc2c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fc28) {
            ctx->pc = 0x11FC3Cu;
            goto label_11fc3c;
        }
    }
    ctx->pc = 0x11FC30u;
label_11fc30:
    // 0x11fc30: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x11FC30u;
    SET_GPR_U32(ctx, 31, 0x11FC38u);
    ctx->pc = 0x11FAE0u;
    if (runtime->hasFunction(0x11FAE0u)) {
        auto targetFn = runtime->lookupFunction(0x11FAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FC38u; }
        if (ctx->pc != 0x11FC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _decodeOrSkipFrame_0x11fae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FC38u; }
        if (ctx->pc != 0x11FC38u) { return; }
    }
    ctx->pc = 0x11FC38u;
    // 0x11fc38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11fc38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11fc3c:
    // 0x11fc3c: 0x3e00008  jr          $ra
    ctx->pc = 0x11FC3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FC3Cu;
            // 0x11fc40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11FC30u: goto label_11fc30;
            case 0x11FC3Cu: goto label_11fc3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11FC44u;
}
