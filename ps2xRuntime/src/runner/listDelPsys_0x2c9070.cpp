#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: listDelPsys
// Address: 0x2c9070 - 0x2c90b8
void listDelPsys_0x2c9070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c9070u;

    // 0x2c9070: 0x27bdffd0
    ctx->pc = 0x2c9070u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c9074: 0xffbf0020
    ctx->pc = 0x2c9074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c9078: 0xffb10010
    ctx->pc = 0x2c9078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c907c: 0xffb00000
    ctx->pc = 0x2c907cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c9080: 0x80882d
    ctx->pc = 0x2c9080u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9084: 0xc0b2406
    ctx->pc = 0x2C9084u;
    SET_GPR_U32(ctx, 31, 0x2C908Cu);
    ctx->pc = 0x2C9088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C9018u;
    {
        const uint32_t __entryPc = ctx->pc;
        listFindHandle_0x2c9018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C908Cu; }
    }
    if (ctx->pc != 0x2C908Cu) { return; }
    ctx->pc = 0x2C908Cu;
    // 0x2c908c: 0x8e030000
    ctx->pc = 0x2c908cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c9090: 0x2463ffff
    ctx->pc = 0x2c9090u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c9094: 0xae030000
    ctx->pc = 0x2c9094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c9098: 0x8e230024
    ctx->pc = 0x2c9098u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2c909c: 0xac430000
    ctx->pc = 0x2c909cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2c90a0: 0xae200024
    ctx->pc = 0x2c90a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x2c90a4: 0xdfbf0020
    ctx->pc = 0x2c90a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c90a8: 0xdfb10010
    ctx->pc = 0x2c90a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c90ac: 0xdfb00000
    ctx->pc = 0x2c90acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c90b0: 0x3e00008
    ctx->pc = 0x2C90B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C90B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C90B8u;
}
