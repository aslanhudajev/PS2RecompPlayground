#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDmaStart
// Address: 0x2c03f8 - 0x2c0444
void pbDmaStart_0x2c03f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c03f8u;

    // 0x2c03f8: 0x27bdfff0
    ctx->pc = 0x2c03f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c03fc: 0xffbf0000
    ctx->pc = 0x2c03fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c0400: 0x3c020037
    ctx->pc = 0x2c0400u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c0404: 0xac402940
    ctx->pc = 0x2c0404u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10560), GPR_U32(ctx, 0));
    // 0x2c0408: 0x3c020037
    ctx->pc = 0x2c0408u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c040c: 0x2403ffff
    ctx->pc = 0x2c040cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c0410: 0xac432948
    ctx->pc = 0x2c0410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10568), GPR_U32(ctx, 3));
    // 0x2c0414: 0x3c020037
    ctx->pc = 0x2c0414u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c0418: 0xac43294c
    ctx->pc = 0x2c0418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10572), GPR_U32(ctx, 3));
    // 0x2c041c: 0x3c020037
    ctx->pc = 0x2c041cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c0420: 0xac432950
    ctx->pc = 0x2c0420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10576), GPR_U32(ctx, 3));
    // 0x2c0424: 0x3c020037
    ctx->pc = 0x2c0424u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c0428: 0xac432954
    ctx->pc = 0x2c0428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10580), GPR_U32(ctx, 3));
    // 0x2c042c: 0x3c020037
    ctx->pc = 0x2c042cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c0430: 0xc0b00e6
    ctx->pc = 0x2C0430u;
    SET_GPR_U32(ctx, 31, 0x2C0438u);
    ctx->pc = 0x2C0434u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10584), GPR_U32(ctx, 3));
    ctx->pc = 0x2C0398u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbObjDmaStart_0x2c0398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0438u; }
    }
    if (ctx->pc != 0x2C0438u) { return; }
    ctx->pc = 0x2C0438u;
    // 0x2c0438: 0xdfbf0000
    ctx->pc = 0x2c0438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c043c: 0x80b00d6
    ctx->pc = 0x2C043Cu;
    ctx->pc = 0x2C0440u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2C0358u;
    pbTexDmaStart_0x2c0358(rdram, ctx, runtime); return;
    ctx->pc = 0x2C0444u;
}
