#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBOX_FindObject
// Address: 0x2c6a38 - 0x2c6a5c
void MBOX_FindObject_0x2c6a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c6a38u;

    // 0x2c6a38: 0x27bdfff0
    ctx->pc = 0x2c6a38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c6a3c: 0xffbf0000
    ctx->pc = 0x2c6a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c6a40: 0x2405ffff
    ctx->pc = 0x2c6a40u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c6a44: 0x2406ffff
    ctx->pc = 0x2c6a44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c6a48: 0xc0b19fe
    ctx->pc = 0x2C6A48u;
    SET_GPR_U32(ctx, 31, 0x2C6A50u);
    ctx->pc = 0x2C6A4Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C67F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_Sub_0x2c67f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6A50u; }
    }
    if (ctx->pc != 0x2C6A50u) { return; }
    ctx->pc = 0x2C6A50u;
    // 0x2c6a50: 0xdfbf0000
    ctx->pc = 0x2c6a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6a54: 0x3e00008
    ctx->pc = 0x2C6A54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6A58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C6A5Cu;
}
