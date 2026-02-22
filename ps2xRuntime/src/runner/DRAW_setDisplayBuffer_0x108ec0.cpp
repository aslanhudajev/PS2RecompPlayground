#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DRAW_setDisplayBuffer
// Address: 0x108ec0 - 0x108f68
void DRAW_setDisplayBuffer_0x108ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x108ec0u;

    // 0x108ec0: 0x30840001
    ctx->pc = 0x108ec0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 1));
    // 0x108ec4: 0x27bdfff0
    ctx->pc = 0x108ec4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x108ec8: 0xa7848494
    ctx->pc = 0x108ec8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935700), (uint16_t)GPR_U32(ctx, 4));
    // 0x108ecc: 0xffbf0000
    ctx->pc = 0x108eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x108ed0: 0xc0432fc
    ctx->pc = 0x108ED0u;
    SET_GPR_U32(ctx, 31, 0x108ED8u);
    ctx->pc = 0x108ED4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CBF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x10cbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108ED8u; }
    }
    if (ctx->pc != 0x108ED8u) { return; }
    ctx->pc = 0x108ED8u;
    // 0x108ed8: 0x97848494
    ctx->pc = 0x108ed8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935700)));
    // 0x108edc: 0x24030038
    ctx->pc = 0x108edcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 56));
    // 0x108ee0: 0x3c020014
    ctx->pc = 0x108ee0u;
    SET_GPR_S32(ctx, 2, ((uint32_t)20 << 16));
    // 0x108ee4: 0x3c0b1200
    ctx->pc = 0x108ee4u;
    SET_GPR_S32(ctx, 11, ((uint32_t)4608 << 16));
    // 0x108ee8: 0x832018
    ctx->pc = 0x108ee8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x108eec: 0x24421600
    ctx->pc = 0x108eecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5632));
    // 0x108ef0: 0x3c071200
    ctx->pc = 0x108ef0u;
    SET_GPR_S32(ctx, 7, ((uint32_t)4608 << 16));
    // 0x108ef4: 0x3c091200
    ctx->pc = 0x108ef4u;
    SET_GPR_S32(ctx, 9, ((uint32_t)4608 << 16));
    // 0x108ef8: 0x34e70020
    ctx->pc = 0x108ef8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)32);
    // 0x108efc: 0x35290070
    ctx->pc = 0x108efcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)112);
    // 0x108f00: 0x3c081200
    ctx->pc = 0x108f00u;
    SET_GPR_S32(ctx, 8, ((uint32_t)4608 << 16));
    // 0x108f04: 0x3c0a1200
    ctx->pc = 0x108f04u;
    SET_GPR_S32(ctx, 10, ((uint32_t)4608 << 16));
    // 0x108f08: 0x822021
    ctx->pc = 0x108f08u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x108f0c: 0x35080090
    ctx->pc = 0x108f0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)144);
    // 0x108f10: 0xdc820000
    ctx->pc = 0x108f10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108f14: 0x354a0080
    ctx->pc = 0x108f14u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)128);
    // 0x108f18: 0x3c051200
    ctx->pc = 0x108f18u;
    SET_GPR_S32(ctx, 5, ((uint32_t)4608 << 16));
    // 0x108f1c: 0x3c061200
    ctx->pc = 0x108f1cu;
    SET_GPR_S32(ctx, 6, ((uint32_t)4608 << 16));
    // 0x108f20: 0xfd620000
    ctx->pc = 0x108f20u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 2));
    // 0x108f24: 0x34a500a0
    ctx->pc = 0x108f24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)160);
    // 0x108f28: 0x34c600e0
    ctx->pc = 0x108f28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)224);
    // 0x108f2c: 0xdfbf0000
    ctx->pc = 0x108f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108f30: 0xdc820008
    ctx->pc = 0x108f30u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x108f34: 0xfce20000
    ctx->pc = 0x108f34u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x108f38: 0xdc830010
    ctx->pc = 0x108f38u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x108f3c: 0xfd230000
    ctx->pc = 0x108f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x108f40: 0xdc820018
    ctx->pc = 0x108f40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x108f44: 0xfd020000
    ctx->pc = 0x108f44u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
    // 0x108f48: 0xdc830020
    ctx->pc = 0x108f48u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x108f4c: 0xfd430000
    ctx->pc = 0x108f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 3));
    // 0x108f50: 0xdc820028
    ctx->pc = 0x108f50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x108f54: 0xfca20000
    ctx->pc = 0x108f54u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x108f58: 0xdc830030
    ctx->pc = 0x108f58u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x108f5c: 0xfcc30000
    ctx->pc = 0x108f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x108f60: 0x3e00008
    ctx->pc = 0x108F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108F64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108F68u;
}
