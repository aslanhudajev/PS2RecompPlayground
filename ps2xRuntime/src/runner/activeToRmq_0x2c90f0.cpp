#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: activeToRmq
// Address: 0x2c90f0 - 0x2c9140
void activeToRmq_0x2c90f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c90f0u;

    // 0x2c90f0: 0x27bdffd0
    ctx->pc = 0x2c90f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c90f4: 0xffbf0020
    ctx->pc = 0x2c90f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c90f8: 0xffb10010
    ctx->pc = 0x2c90f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c90fc: 0xffb00000
    ctx->pc = 0x2c90fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c9100: 0x80882d
    ctx->pc = 0x2c9100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9104: 0x3c10003a
    ctx->pc = 0x2c9104u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2c9108: 0x2610aa38
    ctx->pc = 0x2c9108u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294945336));
    // 0x2c910c: 0xc0b241c
    ctx->pc = 0x2C910Cu;
    SET_GPR_U32(ctx, 31, 0x2C9114u);
    ctx->pc = 0x2C9110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C9070u;
    {
        const uint32_t __entryPc = ctx->pc;
        listDelPsys_0x2c9070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9114u; }
    }
    if (ctx->pc != 0x2C9114u) { return; }
    ctx->pc = 0x2C9114u;
    // 0x2c9114: 0x220202d
    ctx->pc = 0x2c9114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9118: 0xc0b2414
    ctx->pc = 0x2C9118u;
    SET_GPR_U32(ctx, 31, 0x2C9120u);
    ctx->pc = 0x2C911Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 8));
    ctx->pc = 0x2C9050u;
    {
        const uint32_t __entryPc = ctx->pc;
        listAddPsys_0x2c9050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9120u; }
    }
    if (ctx->pc != 0x2C9120u) { return; }
    ctx->pc = 0x2C9120u;
    // 0x2c9120: 0x9622002c
    ctx->pc = 0x2c9120u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2c9124: 0x34428000
    ctx->pc = 0x2c9124u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32768));
    // 0x2c9128: 0xa622002c
    ctx->pc = 0x2c9128u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c912c: 0xdfbf0020
    ctx->pc = 0x2c912cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9130: 0xdfb10010
    ctx->pc = 0x2c9130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9134: 0xdfb00000
    ctx->pc = 0x2c9134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9138: 0x3e00008
    ctx->pc = 0x2C9138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C913Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9140u;
}
