#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBOX_ResetModels
// Address: 0x2c6f00 - 0x2c6f4c
void MBOX_ResetModels_0x2c6f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c6f00u;

    // 0x2c6f00: 0x27bdffe0
    ctx->pc = 0x2c6f00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c6f04: 0xffbf0010
    ctx->pc = 0x2c6f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c6f08: 0xffb00000
    ctx->pc = 0x2c6f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c6f0c: 0x3c020036
    ctx->pc = 0x2c6f0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c6f10: 0xc0b11f8
    ctx->pc = 0x2C6F10u;
    SET_GPR_U32(ctx, 31, 0x2C6F18u);
    ctx->pc = 0x2C6F14u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    ctx->pc = 0x2C47E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBResetFonts_0x2c47e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6F18u; }
    }
    if (ctx->pc != 0x2C6F18u) { return; }
    ctx->pc = 0x2C6F18u;
    // 0x2c6f18: 0xc0b22b4
    ctx->pc = 0x2C6F18u;
    SET_GPR_U32(ctx, 31, 0x2C6F20u);
    ctx->pc = 0x2C8AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBInitPsys_0x2c8ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6F20u; }
    }
    if (ctx->pc != 0x2C6F20u) { return; }
    ctx->pc = 0x2C6F20u;
    // 0x2c6f20: 0x3c020038
    ctx->pc = 0x2c6f20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c6f24: 0xac40c500
    ctx->pc = 0x2c6f24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952192), GPR_U32(ctx, 0));
    // 0x2c6f28: 0x8e020038
    ctx->pc = 0x2c6f28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2c6f2c: 0xac400000
    ctx->pc = 0x2c6f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2c6f30: 0x3c030038
    ctx->pc = 0x2c6f30u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2c6f34: 0x2402ffff
    ctx->pc = 0x2c6f34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c6f38: 0xac62c968
    ctx->pc = 0x2c6f38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953320), GPR_U32(ctx, 2));
    // 0x2c6f3c: 0xdfbf0010
    ctx->pc = 0x2c6f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c6f40: 0xdfb00000
    ctx->pc = 0x2c6f40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6f44: 0x3e00008
    ctx->pc = 0x2C6F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6F48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C6F4Cu;
}
