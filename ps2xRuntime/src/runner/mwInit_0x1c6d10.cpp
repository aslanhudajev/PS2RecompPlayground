#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwInit
// Address: 0x1c6d10 - 0x1c6d48
void mwInit_0x1c6d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwInit");


    ctx->pc = 0x1c6d10u;

    // 0x1c6d10: 0x3c02002c
    ctx->pc = 0x1c6d10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1c6d14: 0x24444ef0
    ctx->pc = 0x1c6d14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 20208));
    // 0x1c6d18: 0x3c02002c
    ctx->pc = 0x1c6d18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1c6d1c: 0x24454f04
    ctx->pc = 0x1c6d1cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 20228));
    // 0x1c6d20: 0x3c02002d
    ctx->pc = 0x1c6d20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
    // 0x1c6d24: 0x2446b7e0
    ctx->pc = 0x1c6d24u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294948832));
    // 0x1c6d28: 0x27bdfff0
    ctx->pc = 0x1c6d28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6d2c: 0x3c02002d
    ctx->pc = 0x1c6d2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
    // 0x1c6d30: 0x7fbf0000
    ctx->pc = 0x1c6d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1c6d34: 0xc071e44
    ctx->pc = 0x1C6D34u;
    SET_GPR_U32(ctx, 31, 0x1C6D3Cu);
    ctx->pc = 0x1C6D38u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 21964));
    ctx->pc = 0x1C7910u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___initialize_cpp_rts_0x1c7910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6D3Cu; }
        else if (ctx->pc != 0x1C6D3Cu) { ctx->pc = 0x1C6D3Cu; }
    }
    if (ctx->pc != 0x1C6D3Cu) { return; }
    ctx->pc = 0x1C6D3Cu;
    // 0x1c6d3c: 0x7bbf0000
    ctx->pc = 0x1c6d3cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6d40: 0x3e00008
    ctx->pc = 0x1C6D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6D44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C6D48u;
}
