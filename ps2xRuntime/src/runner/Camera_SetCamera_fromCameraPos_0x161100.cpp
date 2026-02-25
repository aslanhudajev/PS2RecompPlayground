#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Camera_SetCamera_fromCameraPos
// Address: 0x161100 - 0x161124
void Camera_SetCamera_fromCameraPos_0x161100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Camera_SetCamera_fromCameraPos_0x161100");
#endif

    ctx->pc = 0x161100u;

    // 0x161100: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x161100u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x161104: 0x78a70010  lq          $a3, 0x10($a1)
    ctx->pc = 0x161104u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x161108: 0x78a60020  lq          $a2, 0x20($a1)
    ctx->pc = 0x161108u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x16110c: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x16110cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x161110: 0x7c880000  sq          $t0, 0x0($a0)
    ctx->pc = 0x161110u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 8));
    // 0x161114: 0x7c870010  sq          $a3, 0x10($a0)
    ctx->pc = 0x161114u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 7));
    // 0x161118: 0x7c860020  sq          $a2, 0x20($a0)
    ctx->pc = 0x161118u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 6));
    // 0x16111c: 0x3e00008  jr          $ra
    ctx->pc = 0x16111Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16111Cu;
            // 0x161120: 0x7c830030  sq          $v1, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161124u;
}
