#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: isAudioOK
// Address: 0x118e38 - 0x118e6c
void isAudioOK_0x118e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("isAudioOK_0x118e38");
#endif

    ctx->pc = 0x118e38u;

    // 0x118e38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x118e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x118e3c: 0x8f828410  lw          $v0, -0x7BF0($gp)
    ctx->pc = 0x118e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935568)));
    // 0x118e40: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x118E40u;
    {
        const bool branch_taken_0x118e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118E40u;
            // 0x118e44: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e40) {
            ctx->pc = 0x118E5Cu;
            goto label_118e5c;
        }
    }
    ctx->pc = 0x118E48u;
    // 0x118e48: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x118e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x118e4c: 0xc0466ac  jal         func_119AB0
    ctx->pc = 0x118E4Cu;
    SET_GPR_U32(ctx, 31, 0x118E54u);
    ctx->pc = 0x118E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118E4Cu;
            // 0x118e50: 0x2484e568  addiu       $a0, $a0, -0x1A98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119AB0u;
    if (runtime->hasFunction(0x119AB0u)) {
        auto targetFn = runtime->lookupFunction(0x119AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118E54u; }
        if (ctx->pc != 0x118E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        audioDecIsPreset_0x119ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118E54u; }
        if (ctx->pc != 0x118E54u) { return; }
    }
    ctx->pc = 0x118E54u;
    // 0x118e54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x118E54u;
    {
        const bool branch_taken_0x118e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118E54u;
            // 0x118e58: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e54) {
            ctx->pc = 0x118E64u;
            goto label_118e64;
        }
    }
    ctx->pc = 0x118E5Cu;
label_118e5c:
    // 0x118e5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x118e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118e60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x118e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_118e64:
    // 0x118e64: 0x3e00008  jr          $ra
    ctx->pc = 0x118E64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118E64u;
            // 0x118e68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118E5Cu: goto label_118e5c;
            case 0x118E64u: goto label_118e64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x118E6Cu;
}
