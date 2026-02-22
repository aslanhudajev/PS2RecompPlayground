#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _request_call
// Address: 0x1103f0 - 0x11047c
void _request_call_0x1103f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1103f0u;

    // 0x1103f0: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x1103f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1103f4: 0x8ca60040  lw          $a2, 0x40($a1)
    ctx->pc = 0x1103f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1103f8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1103f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1103fc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1103FCu;
    {
        const bool branch_taken_0x1103fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1103fc) {
            ctx->pc = 0x110400u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1103FCu;
            // 0x110400: 0x8cc20010  lw          $v0, 0x10($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11040Cu;
            goto label_11040c;
        }
    }
    ctx->pc = 0x110404u;
    // 0x110404: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x110404u;
    {
        const bool branch_taken_0x110404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110404u;
            // 0x110408: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110404) {
            ctx->pc = 0x110410u;
            goto label_110410;
        }
    }
    ctx->pc = 0x11040Cu;
label_11040c:
    // 0x11040c: 0xac45003c  sw          $a1, 0x3C($v0)
    ctx->pc = 0x11040cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 5));
label_110410:
    // 0x110410: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x110410u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
    // 0x110414: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x110414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x110418: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x110418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x11041c: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x11041cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x110420: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x110420u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x110424: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x110424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x110428: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x110428u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x11042c: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x11042cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x110430: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x110430u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x110434: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x110434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x110438: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x110438u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x11043c: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x11043cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x110440: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x110440u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x110444: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x110444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x110448: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x110448u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x11044c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x11044cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x110450: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x110450u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x110454: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x110454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x110458: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x110458u;
    {
        const bool branch_taken_0x110458 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x110458) {
            ctx->pc = 0x110474u;
            goto label_110474;
        }
    }
    ctx->pc = 0x110460u;
    // 0x110460: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x110460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x110464: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x110464u;
    {
        const bool branch_taken_0x110464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110464) {
            ctx->pc = 0x110474u;
            goto label_110474;
        }
    }
    ctx->pc = 0x11046Cu;
    // 0x11046c: 0x8045490  j           func_115240
    ctx->pc = 0x11046Cu;
    ctx->pc = 0x115240u;
    if (runtime->hasFunction(0x115240u)) {
        auto targetFn = runtime->lookupFunction(0x115240u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        iWakeupThread_0x115240(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x110474u;
label_110474:
    // 0x110474: 0x3e00008  jr          $ra
    ctx->pc = 0x110474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11040Cu: goto label_11040c;
            case 0x110410u: goto label_110410;
            case 0x110474u: goto label_110474;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11047Cu;
}
