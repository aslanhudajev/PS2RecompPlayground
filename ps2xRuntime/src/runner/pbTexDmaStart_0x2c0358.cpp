#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbTexDmaStart
// Address: 0x2c0358 - 0x2c0398
void pbTexDmaStart_0x2c0358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c0358u;

    // 0x2c0358: 0x27bdfff0
    ctx->pc = 0x2c0358u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c035c: 0xffbf0000
    ctx->pc = 0x2c035cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c0360: 0x3c020037
    ctx->pc = 0x2c0360u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c0364: 0xac402968
    ctx->pc = 0x2c0364u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10600), GPR_U32(ctx, 0));
    // 0x2c0368: 0x3c040037
    ctx->pc = 0x2c0368u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x2c036c: 0x3c020037
    ctx->pc = 0x2c036cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c0370: 0x8c432960
    ctx->pc = 0x2c0370u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 10592)));
    // 0x2c0374: 0xac83295c
    ctx->pc = 0x2c0374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10588), GPR_U32(ctx, 3));
    // 0x2c0378: 0x3c020037
    ctx->pc = 0x2c0378u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c037c: 0xc0aa226
    ctx->pc = 0x2C037Cu;
    SET_GPR_U32(ctx, 31, 0x2C0384u);
    ctx->pc = 0x2C0380u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10640), GPR_U32(ctx, 3));
    ctx->pc = 0x2A8898u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbNextTexPage_0x2a8898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0384u; }
    }
    if (ctx->pc != 0x2C0384u) { return; }
    ctx->pc = 0x2C0384u;
    // 0x2c0384: 0x3c020037
    ctx->pc = 0x2c0384u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c0388: 0xac40293c
    ctx->pc = 0x2c0388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10556), GPR_U32(ctx, 0));
    // 0x2c038c: 0xdfbf0000
    ctx->pc = 0x2c038cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0390: 0x3e00008
    ctx->pc = 0x2C0390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0394u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C0398u;
}
