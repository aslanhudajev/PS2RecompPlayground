#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxf_CloseLdptnwHn
// Address: 0x16ae18 - 0x16ae58
void adxf_CloseLdptnwHn_0x16ae18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxf_CloseLdptnwHn");


    ctx->pc = 0x16ae18u;

    // 0x16ae18: 0x27bdffe0
    ctx->pc = 0x16ae18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16ae1c: 0xffb00000
    ctx->pc = 0x16ae1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ae20: 0x3c100023
    ctx->pc = 0x16ae20u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x16ae24: 0xffbf0010
    ctx->pc = 0x16ae24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16ae28: 0xc05ae0c
    ctx->pc = 0x16AE28u;
    SET_GPR_U32(ctx, 31, 0x16AE30u);
    ctx->pc = 0x16AE2Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294958408)));
    ctx->pc = 0x16B830u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Close_0x16b830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE30u; }
        else if (ctx->pc != 0x16AE30u) { ctx->pc = 0x16AE30u; }
    }
    if (ctx->pc != 0x16AE30u) { return; }
    ctx->pc = 0x16AE30u;
    // 0x16ae30: 0xae00dd48
    ctx->pc = 0x16ae30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294958408), GPR_U32(ctx, 0));
    // 0x16ae34: 0x3c030023
    ctx->pc = 0x16ae34u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x16ae38: 0x2402ffff
    ctx->pc = 0x16ae38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16ae3c: 0x3c040023
    ctx->pc = 0x16ae3cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x16ae40: 0xdfbf0010
    ctx->pc = 0x16ae40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ae44: 0xdfb00000
    ctx->pc = 0x16ae44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ae48: 0xac62dd4c
    ctx->pc = 0x16ae48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294958412), GPR_U32(ctx, 2));
    // 0x16ae4c: 0xac80dd44
    ctx->pc = 0x16ae4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294958404), GPR_U32(ctx, 0));
    // 0x16ae50: 0x3e00008
    ctx->pc = 0x16AE50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AE54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16AE58u;
}
