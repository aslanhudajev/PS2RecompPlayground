#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBOX_AllocModel
// Address: 0x2c7298 - 0x2c72f0
void MBOX_AllocModel_0x2c7298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c7298u;

    // 0x2c7298: 0x27bdffd0
    ctx->pc = 0x2c7298u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c729c: 0xffbf0020
    ctx->pc = 0x2c729cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c72a0: 0xffb10010
    ctx->pc = 0x2c72a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c72a4: 0xffb00000
    ctx->pc = 0x2c72a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c72a8: 0x80802d
    ctx->pc = 0x2c72a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c72ac: 0x3c05003b
    ctx->pc = 0x2c72acu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2c72b0: 0xc0b4ed2
    ctx->pc = 0x2C72B0u;
    SET_GPR_U32(ctx, 31, 0x2C72B8u);
    ctx->pc = 0x2C72B4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 28864));
    ctx->pc = 0x2D3B48u;
    {
        const uint32_t __entryPc = ctx->pc;
        FileSize_0x2d3b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C72B8u; }
    }
    if (ctx->pc != 0x2C72B8u) { return; }
    ctx->pc = 0x2C72B8u;
    // 0x2c72b8: 0x40882d
    ctx->pc = 0x2c72b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c72bc: 0x200202d
    ctx->pc = 0x2c72bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c72c0: 0x3c05003b
    ctx->pc = 0x2c72c0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2c72c4: 0xc0b4ed2
    ctx->pc = 0x2C72C4u;
    SET_GPR_U32(ctx, 31, 0x2C72CCu);
    ctx->pc = 0x2C72C8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 28880));
    ctx->pc = 0x2D3B48u;
    {
        const uint32_t __entryPc = ctx->pc;
        FileSize_0x2d3b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C72CCu; }
    }
    if (ctx->pc != 0x2C72CCu) { return; }
    ctx->pc = 0x2C72CCu;
    // 0x2c72cc: 0x220202d
    ctx->pc = 0x2c72ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c72d0: 0x40282d
    ctx->pc = 0x2c72d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c72d4: 0xc0b1c36
    ctx->pc = 0x2C72D4u;
    SET_GPR_U32(ctx, 31, 0x2C72DCu);
    ctx->pc = 0x2C72D8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C70D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_AllocModelMem_0x2c70d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C72DCu; }
    }
    if (ctx->pc != 0x2C72DCu) { return; }
    ctx->pc = 0x2C72DCu;
    // 0x2c72dc: 0xdfbf0020
    ctx->pc = 0x2c72dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c72e0: 0xdfb10010
    ctx->pc = 0x2c72e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c72e4: 0xdfb00000
    ctx->pc = 0x2c72e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c72e8: 0x3e00008
    ctx->pc = 0x2C72E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C72ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C72F0u;
}
