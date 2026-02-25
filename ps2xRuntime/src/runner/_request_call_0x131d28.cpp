#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _request_call
// Address: 0x131d28 - 0x131db4
void _request_call_0x131d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_request_call_0x131d28");
#endif

    ctx->pc = 0x131d28u;

    // 0x131d28: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x131d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x131d2c: 0x8ca60040  lw          $a2, 0x40($a1)
    ctx->pc = 0x131d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x131d30: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x131d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x131d34: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x131D34u;
    {
        const bool branch_taken_0x131d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x131d34) {
            ctx->pc = 0x131D38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131D34u;
            // 0x131d38: 0x8cc20010  lw          $v0, 0x10($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x131D44u;
            goto label_131d44;
        }
    }
    ctx->pc = 0x131D3Cu;
    // 0x131d3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x131D3Cu;
    {
        const bool branch_taken_0x131d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131D3Cu;
            // 0x131d40: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131d3c) {
            ctx->pc = 0x131D48u;
            goto label_131d48;
        }
    }
    ctx->pc = 0x131D44u;
label_131d44:
    // 0x131d44: 0xac45003c  sw          $a1, 0x3C($v0)
    ctx->pc = 0x131d44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 5));
label_131d48:
    // 0x131d48: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x131d48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
    // 0x131d4c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x131d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x131d50: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x131d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x131d54: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x131d54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x131d58: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x131d58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x131d5c: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x131d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x131d60: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x131d60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x131d64: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x131d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x131d68: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x131d68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x131d6c: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x131d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x131d70: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x131d70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x131d74: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x131d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x131d78: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x131d78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x131d7c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x131d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x131d80: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x131d80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x131d84: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x131d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x131d88: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x131d88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x131d8c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x131d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x131d90: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x131D90u;
    {
        const bool branch_taken_0x131d90 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x131d90) {
            ctx->pc = 0x131DACu;
            goto label_131dac;
        }
    }
    ctx->pc = 0x131D98u;
    // 0x131d98: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x131d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x131d9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x131D9Cu;
    {
        const bool branch_taken_0x131d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x131d9c) {
            ctx->pc = 0x131DACu;
            goto label_131dac;
        }
    }
    ctx->pc = 0x131DA4u;
    // 0x131da4: 0x804bec4  j           func_12FB10
    ctx->pc = 0x131DA4u;
    ctx->pc = 0x12FB10u;
    if (runtime->hasFunction(0x12FB10u)) {
        auto targetFn = runtime->lookupFunction(0x12FB10u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        iWakeupThread_0x12fb10(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x131DACu;
label_131dac:
    // 0x131dac: 0x3e00008  jr          $ra
    ctx->pc = 0x131DACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131D44u: goto label_131d44;
            case 0x131D48u: goto label_131d48;
            case 0x131DACu: goto label_131dac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x131DB4u;
}
