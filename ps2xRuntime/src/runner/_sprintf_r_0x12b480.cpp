#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sprintf_r
// Address: 0x12b480 - 0x12b4e8
void _sprintf_r_0x12b480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12b480u;

    // 0x12b480: 0x27bdff20
    ctx->pc = 0x12b480u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x12b484: 0xa0602d
    ctx->pc = 0x12b484u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b488: 0x3c027fff
    ctx->pc = 0x12b488u;
    SET_GPR_S32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x12b48c: 0xafa40054
    ctx->pc = 0x12b48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x12b490: 0x3442ffff
    ctx->pc = 0x12b490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)65535);
    // 0x12b494: 0xc0282d
    ctx->pc = 0x12b494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b498: 0x24030208
    ctx->pc = 0x12b498u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 520));
    // 0x12b49c: 0xffbf0060
    ctx->pc = 0x12b49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x12b4a0: 0xffa700b8
    ctx->pc = 0x12b4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 7));
    // 0x12b4a4: 0x3a0202d
    ctx->pc = 0x12b4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b4a8: 0xffa800c0
    ctx->pc = 0x12b4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 8));
    // 0x12b4ac: 0x27a600b8
    ctx->pc = 0x12b4acu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 184));
    // 0x12b4b0: 0xffa900c8
    ctx->pc = 0x12b4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 9));
    // 0x12b4b4: 0xffaa00d0
    ctx->pc = 0x12b4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 10));
    // 0x12b4b8: 0xffab00d8
    ctx->pc = 0x12b4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 11));
    // 0x12b4bc: 0xa7a3000c
    ctx->pc = 0x12b4bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x12b4c0: 0xafac0010
    ctx->pc = 0x12b4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
    // 0x12b4c4: 0xafa20014
    ctx->pc = 0x12b4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x12b4c8: 0xafac0000
    ctx->pc = 0x12b4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    // 0x12b4cc: 0xc04b0b4
    ctx->pc = 0x12B4CCu;
    SET_GPR_U32(ctx, 31, 0x12B4D4u);
    ctx->pc = 0x12B4D0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x12C2D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        vfprintf_0x12c2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B4D4u; }
    }
    if (ctx->pc != 0x12B4D4u) { return; }
    ctx->pc = 0x12B4D4u;
    // 0x12b4d4: 0x8fa30000
    ctx->pc = 0x12b4d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b4d8: 0xdfbf0060
    ctx->pc = 0x12b4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12b4dc: 0xa0600000
    ctx->pc = 0x12b4dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x12b4e0: 0x3e00008
    ctx->pc = 0x12B4E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B4E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12B4E8u;
}
