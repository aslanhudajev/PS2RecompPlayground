#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _Error
// Address: 0x12c078 - 0x12c0cc
void ps2__Error_0x12c078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ps2__Error_0x12c078");
#endif

    ctx->pc = 0x12c078u;

    // 0x12c078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12c078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12c07c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12c07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12c080: 0x8c830858  lw          $v1, 0x858($a0)
    ctx->pc = 0x12c080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2136)));
    // 0x12c084: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x12C084u;
    {
        const bool branch_taken_0x12c084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c084) {
            ctx->pc = 0x12C0B8u;
            goto label_12c0b8;
        }
    }
    ctx->pc = 0x12C08Cu;
    // 0x12c08c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x12C08Cu;
    {
        const bool branch_taken_0x12c08c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c08c) {
            ctx->pc = 0x12C0B8u;
            goto label_12c0b8;
        }
    }
    ctx->pc = 0x12C094u;
    // 0x12c094: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x12c094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12c098: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12C098u;
    {
        const bool branch_taken_0x12c098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C098u;
            // 0x12c09c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c098) {
            ctx->pc = 0x12C0B8u;
            goto label_12c0b8;
        }
    }
    ctx->pc = 0x12C0A0u;
    // 0x12c0a0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x12c0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x12c0a4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x12c0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x12c0a8: 0xc04ae00  jal         func_12B800
    ctx->pc = 0x12C0A8u;
    SET_GPR_U32(ctx, 31, 0x12C0B0u);
    ctx->pc = 0x12C0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C0A8u;
            // 0x12c0ac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B800u;
    if (runtime->hasFunction(0x12B800u)) {
        auto targetFn = runtime->lookupFunction(0x12B800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C0B0u; }
        if (ctx->pc != 0x12C0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x12b800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C0B0u; }
        if (ctx->pc != 0x12C0B0u) { return; }
    }
    ctx->pc = 0x12C0B0u;
    // 0x12c0b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12C0B0u;
    {
        const bool branch_taken_0x12c0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C0B0u;
            // 0x12c0b4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c0b0) {
            ctx->pc = 0x12C0C4u;
            goto label_12c0c4;
        }
    }
    ctx->pc = 0x12C0B8u;
label_12c0b8:
    // 0x12c0b8: 0xc04b00c  jal         func_12C030
    ctx->pc = 0x12C0B8u;
    SET_GPR_U32(ctx, 31, 0x12C0C0u);
    ctx->pc = 0x12C0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C0B8u;
            // 0x12c0bc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C030u;
    if (runtime->hasFunction(0x12C030u)) {
        auto targetFn = runtime->lookupFunction(0x12C030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C0C0u; }
        if (ctx->pc != 0x12C0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__ErrMessage_0x12c030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C0C0u; }
        if (ctx->pc != 0x12C0C0u) { return; }
    }
    ctx->pc = 0x12C0C0u;
    // 0x12c0c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12c0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12c0c4:
    // 0x12c0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x12C0C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C0C4u;
            // 0x12c0c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12C0B8u: goto label_12c0b8;
            case 0x12C0C4u: goto label_12c0c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12C0CCu;
}
