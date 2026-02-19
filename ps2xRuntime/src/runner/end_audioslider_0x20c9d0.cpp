#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: end_audioslider
// Address: 0x20c9d0 - 0x20ca2c
void end_audioslider_0x20c9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20c9d0u;

    // 0x20c9d0: 0x27bdffe0
    ctx->pc = 0x20c9d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20c9d4: 0xffbf0010
    ctx->pc = 0x20c9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20c9d8: 0xffb00000
    ctx->pc = 0x20c9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20c9dc: 0x80802d
    ctx->pc = 0x20c9dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c9e0: 0xc0b0b38
    ctx->pc = 0x20C9E0u;
    SET_GPR_U32(ctx, 31, 0x20C9E8u);
    ctx->pc = 0x20C9E4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C9E8u; }
    }
    if (ctx->pc != 0x20C9E8u) { return; }
    ctx->pc = 0x20C9E8u;
    // 0x20c9e8: 0xae020008
    ctx->pc = 0x20c9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x20c9ec: 0xc0b0b38
    ctx->pc = 0x20C9ECu;
    SET_GPR_U32(ctx, 31, 0x20C9F4u);
    ctx->pc = 0x20C9F0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C9F4u; }
    }
    if (ctx->pc != 0x20C9F4u) { return; }
    ctx->pc = 0x20C9F4u;
    // 0x20c9f4: 0xae02000c
    ctx->pc = 0x20c9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x20c9f8: 0xc0b0b38
    ctx->pc = 0x20C9F8u;
    SET_GPR_U32(ctx, 31, 0x20CA00u);
    ctx->pc = 0x20C9FCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CA00u; }
    }
    if (ctx->pc != 0x20CA00u) { return; }
    ctx->pc = 0x20CA00u;
    // 0x20ca00: 0xae020004
    ctx->pc = 0x20ca00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x20ca04: 0xc0b0b38
    ctx->pc = 0x20CA04u;
    SET_GPR_U32(ctx, 31, 0x20CA0Cu);
    ctx->pc = 0x20CA08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CA0Cu; }
    }
    if (ctx->pc != 0x20CA0Cu) { return; }
    ctx->pc = 0x20CA0Cu;
    // 0x20ca0c: 0xae020014
    ctx->pc = 0x20ca0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x20ca10: 0xc0b0b38
    ctx->pc = 0x20CA10u;
    SET_GPR_U32(ctx, 31, 0x20CA18u);
    ctx->pc = 0x20CA14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CA18u; }
    }
    if (ctx->pc != 0x20CA18u) { return; }
    ctx->pc = 0x20CA18u;
    // 0x20ca18: 0xae020010
    ctx->pc = 0x20ca18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x20ca1c: 0xdfbf0010
    ctx->pc = 0x20ca1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20ca20: 0xdfb00000
    ctx->pc = 0x20ca20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ca24: 0x3e00008
    ctx->pc = 0x20CA24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CA28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20CA2Cu;
}
