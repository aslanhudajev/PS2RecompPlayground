#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: addToActive
// Address: 0x2c90b8 - 0x2c90f0
void addToActive_0x2c90b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c90b8u;

    // 0x2c90b8: 0x27bdffe0
    ctx->pc = 0x2c90b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c90bc: 0xffbf0010
    ctx->pc = 0x2c90bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c90c0: 0xffb00000
    ctx->pc = 0x2c90c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c90c4: 0x80802d
    ctx->pc = 0x2c90c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c90c8: 0x3c05003a
    ctx->pc = 0x2c90c8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2c90cc: 0xc0b2414
    ctx->pc = 0x2C90CCu;
    SET_GPR_U32(ctx, 31, 0x2C90D4u);
    ctx->pc = 0x2C90D0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294945336));
    ctx->pc = 0x2C9050u;
    {
        const uint32_t __entryPc = ctx->pc;
        listAddPsys_0x2c9050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C90D4u; }
    }
    if (ctx->pc != 0x2C90D4u) { return; }
    ctx->pc = 0x2C90D4u;
    // 0x2c90d4: 0x9602002c
    ctx->pc = 0x2c90d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2c90d8: 0x34424000
    ctx->pc = 0x2c90d8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16384));
    // 0x2c90dc: 0xa602002c
    ctx->pc = 0x2c90dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c90e0: 0xdfbf0010
    ctx->pc = 0x2c90e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c90e4: 0xdfb00000
    ctx->pc = 0x2c90e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c90e8: 0x3e00008
    ctx->pc = 0x2C90E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C90ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C90F0u;
}
