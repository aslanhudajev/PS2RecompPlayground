#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: GetVoiceStatus
// Address: 0x10bf40 - 0x10bf78
void GetVoiceStatus_0x10bf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("GetVoiceStatus_0x10bf40");
#endif

    ctx->pc = 0x10bf40u;

    // 0x10bf40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10bf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10bf44: 0x8f828390  lw          $v0, -0x7C70($gp)
    ctx->pc = 0x10bf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
    // 0x10bf48: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10BF48u;
    {
        const bool branch_taken_0x10bf48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BF48u;
            // 0x10bf4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bf48) {
            ctx->pc = 0x10BF68u;
            goto label_10bf68;
        }
    }
    ctx->pc = 0x10BF50u;
    // 0x10bf50: 0x34861700  ori         $a2, $a0, 0x1700
    ctx->pc = 0x10bf50u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)5888u)));
    // 0x10bf54: 0x34058040  ori         $a1, $zero, 0x8040
    ctx->pc = 0x10bf54u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32832u)));
    // 0x10bf58: 0xc045c80  jal         func_117200
    ctx->pc = 0x10BF58u;
    SET_GPR_U32(ctx, 31, 0x10BF60u);
    ctx->pc = 0x10BF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BF58u;
            // 0x10bf5c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BF60u; }
        if (ctx->pc != 0x10BF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BF60u; }
        if (ctx->pc != 0x10BF60u) { return; }
    }
    ctx->pc = 0x10BF60u;
    // 0x10bf60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10BF60u;
    {
        const bool branch_taken_0x10bf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BF60u;
            // 0x10bf64: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bf60) {
            ctx->pc = 0x10BF70u;
            goto label_10bf70;
        }
    }
    ctx->pc = 0x10BF68u;
label_10bf68:
    // 0x10bf68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10bf68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10bf6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10bf70:
    // 0x10bf70: 0x3e00008  jr          $ra
    ctx->pc = 0x10BF70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BF70u;
            // 0x10bf74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10BF68u: goto label_10bf68;
            case 0x10BF70u: goto label_10bf70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10BF78u;
}
