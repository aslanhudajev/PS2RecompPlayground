#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: voBufDecCount
// Address: 0x11aa78 - 0x11aa98
void voBufDecCount_0x11aa78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11aa78u;

    // 0x11aa78: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x11aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x11aa7c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11AA7Cu;
    {
        const bool branch_taken_0x11aa7c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x11aa7c) {
            ctx->pc = 0x11AA90u;
            goto label_11aa90;
        }
    }
    ctx->pc = 0x11AA84u;
    // 0x11aa84: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x11aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x11aa88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11aa8c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x11aa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_11aa90:
    // 0x11aa90: 0x3e00008  jr          $ra
    ctx->pc = 0x11AA90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11AA90u: goto label_11aa90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11AA98u;
}
