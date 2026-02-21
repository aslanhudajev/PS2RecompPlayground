#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: texcmp
// Address: 0x2c6d38 - 0x2c6d54
void texcmp_0x2c6d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c6d38u;

    // 0x2c6d38: 0x27bdfff0
    ctx->pc = 0x2c6d38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c6d3c: 0xffbf0000
    ctx->pc = 0x2c6d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c6d40: 0xc0bf3c0
    ctx->pc = 0x2C6D40u;
    SET_GPR_U32(ctx, 31, 0x2C6D48u);
    ctx->pc = 0x2C6D44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 30));
    ctx->pc = 0x2FCF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x2fcf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6D48u; }
    }
    if (ctx->pc != 0x2C6D48u) { return; }
    ctx->pc = 0x2C6D48u;
    // 0x2c6d48: 0xdfbf0000
    ctx->pc = 0x2c6d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6d4c: 0x3e00008
    ctx->pc = 0x2C6D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6D50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C6D54u;
}
