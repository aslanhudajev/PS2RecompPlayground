#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitSysCall
// Address: 0x115028 - 0x115068
void InitSysCall_0x115028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitSysCall_0x115028");
#endif

    ctx->pc = 0x115028u;

    // 0x115028: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x115028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11502c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11502cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115030: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x115030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x115034: 0x24100080  addiu       $s0, $zero, 0x80
    ctx->pc = 0x115034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x115038: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11503c: 0x0  nop
    ctx->pc = 0x11503cu;
    // NOP
label_115040:
    // 0x115040: 0xc045406  jal         func_115018
    ctx->pc = 0x115040u;
    SET_GPR_U32(ctx, 31, 0x115048u);
    ctx->pc = 0x115044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115040u;
            // 0x115044: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115018u;
    if (runtime->hasFunction(0x115018u)) {
        auto targetFn = runtime->lookupFunction(0x115018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115048u; }
        if (ctx->pc != 0x115048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setup_0x115018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115048u; }
        if (ctx->pc != 0x115048u) { return; }
    }
    ctx->pc = 0x115048u;
    // 0x115048: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x115048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11504c: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x11504cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x115050: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x115050u;
    {
        const bool branch_taken_0x115050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115050u;
            // 0x115054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115050) {
            ctx->pc = 0x115040u;
            goto label_115040;
        }
    }
    ctx->pc = 0x115058u;
    // 0x115058: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x115058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11505c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11505cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115060: 0x3e00008  jr          $ra
    ctx->pc = 0x115060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115060u;
            // 0x115064: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115040u: goto label_115040;
            default: break;
        }
        return;
    }
    ctx->pc = 0x115068u;
}
