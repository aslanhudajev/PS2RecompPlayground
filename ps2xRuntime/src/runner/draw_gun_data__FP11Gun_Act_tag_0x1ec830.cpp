#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: draw_gun_data__FP11Gun_Act_tag
// Address: 0x1ec830 - 0x1ec838
void draw_gun_data__FP11Gun_Act_tag_0x1ec830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("draw_gun_data__FP11Gun_Act_tag");


    ctx->pc = 0x1ec830u;

    // 0x1ec830: 0x3e00008
    ctx->pc = 0x1EC830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EC838u;
}
