#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: draw_gun_dataGC1__Fi
// Address: 0x1ec950 - 0x1ec958
void draw_gun_dataGC1__Fi_0x1ec950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("draw_gun_dataGC1__Fi");


    ctx->pc = 0x1ec950u;

    // 0x1ec950: 0x3e00008
    ctx->pc = 0x1EC950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EC958u;
}
