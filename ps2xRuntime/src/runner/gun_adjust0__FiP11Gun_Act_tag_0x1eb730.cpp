#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: gun_adjust0__FiP11Gun_Act_tag
// Address: 0x1eb730 - 0x1eb74c
void gun_adjust0__FiP11Gun_Act_tag_0x1eb730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("gun_adjust0__FiP11Gun_Act_tag");


    ctx->pc = 0x1eb730u;

    // 0x1eb730: 0x27bdfff0
    ctx->pc = 0x1eb730u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eb734: 0x7fbf0000
    ctx->pc = 0x1eb734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1eb738: 0xc07ae48
    ctx->pc = 0x1EB738u;
    SET_GPR_U32(ctx, 31, 0x1EB740u);
    ctx->pc = 0x1EB920u;
    {
        const uint32_t __entryPc = ctx->pc;
        gun_teaching__FiP11Gun_Act_tag_0x1eb920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB740u; }
        else if (ctx->pc != 0x1EB740u) { ctx->pc = 0x1EB740u; }
    }
    if (ctx->pc != 0x1EB740u) { return; }
    ctx->pc = 0x1EB740u;
    // 0x1eb740: 0x7bbf0000
    ctx->pc = 0x1eb740u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb744: 0x3e00008
    ctx->pc = 0x1EB744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB748u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB74Cu;
}
