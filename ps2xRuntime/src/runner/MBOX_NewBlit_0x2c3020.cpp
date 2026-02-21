#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBOX_NewBlit
// Address: 0x2c3020 - 0x2c3074
void MBOX_NewBlit_0x2c3020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c3020u;

    // 0x2c3020: 0x27bdffd0
    ctx->pc = 0x2c3020u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c3024: 0xffbf0020
    ctx->pc = 0x2c3024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c3028: 0xffb10010
    ctx->pc = 0x2c3028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c302c: 0xffb00000
    ctx->pc = 0x2c302cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c3030: 0xa0802d
    ctx->pc = 0x2c3030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3034: 0xc0882d
    ctx->pc = 0x2c3034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3038: 0x282d
    ctx->pc = 0x2c3038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c303c: 0xc0b1ba8
    ctx->pc = 0x2C303Cu;
    SET_GPR_U32(ctx, 31, 0x2C3044u);
    ctx->pc = 0x2C3040u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Err_0x2c6ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3044u; }
    }
    if (ctx->pc != 0x2C3044u) { return; }
    ctx->pc = 0x2C3044u;
    // 0x2c3044: 0x202d
    ctx->pc = 0x2c3044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3048: 0x40282d
    ctx->pc = 0x2c3048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c304c: 0x200302d
    ctx->pc = 0x2c304cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3050: 0x220382d
    ctx->pc = 0x2c3050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3054: 0x2408ffff
    ctx->pc = 0x2c3054u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c3058: 0xc0b0b54
    ctx->pc = 0x2C3058u;
    SET_GPR_U32(ctx, 31, 0x2C3060u);
    ctx->pc = 0x2C305Cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3060u; }
    }
    if (ctx->pc != 0x2C3060u) { return; }
    ctx->pc = 0x2C3060u;
    // 0x2c3060: 0xdfbf0020
    ctx->pc = 0x2c3060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c3064: 0xdfb10010
    ctx->pc = 0x2c3064u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3068: 0xdfb00000
    ctx->pc = 0x2c3068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c306c: 0x3e00008
    ctx->pc = 0x2C306Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3070u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C3074u;
}
