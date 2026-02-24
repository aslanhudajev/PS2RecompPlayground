#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: drawSetDisplayBuffer
// Address: 0x1089e8 - 0x108a90
void drawSetDisplayBuffer_0x1089e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1089e8u;

    // 0x1089e8: 0x30840001
    ctx->pc = 0x1089e8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 1));
    // 0x1089ec: 0x27bdfff0
    ctx->pc = 0x1089ecu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1089f0: 0xa7848494
    ctx->pc = 0x1089f0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935700), (uint16_t)GPR_U32(ctx, 4));
    // 0x1089f4: 0xffbf0000
    ctx->pc = 0x1089f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1089f8: 0xc0432fc
    ctx->pc = 0x1089F8u;
    SET_GPR_U32(ctx, 31, 0x108A00u);
    ctx->pc = 0x1089FCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CBF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x10cbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108A00u; }
    }
    if (ctx->pc != 0x108A00u) { return; }
    ctx->pc = 0x108A00u;
    // 0x108a00: 0x97848494
    ctx->pc = 0x108a00u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935700)));
    // 0x108a04: 0x24030038
    ctx->pc = 0x108a04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 56));
    // 0x108a08: 0x3c020014
    ctx->pc = 0x108a08u;
    SET_GPR_S32(ctx, 2, ((uint32_t)20 << 16));
    // 0x108a0c: 0x3c0b1200
    ctx->pc = 0x108a0cu;
    SET_GPR_S32(ctx, 11, ((uint32_t)4608 << 16));
    // 0x108a10: 0x832018
    ctx->pc = 0x108a10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x108a14: 0x24421600
    ctx->pc = 0x108a14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5632));
    // 0x108a18: 0x3c071200
    ctx->pc = 0x108a18u;
    SET_GPR_S32(ctx, 7, ((uint32_t)4608 << 16));
    // 0x108a1c: 0x3c091200
    ctx->pc = 0x108a1cu;
    SET_GPR_S32(ctx, 9, ((uint32_t)4608 << 16));
    // 0x108a20: 0x34e70020
    ctx->pc = 0x108a20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)32);
    // 0x108a24: 0x35290070
    ctx->pc = 0x108a24u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)112);
    // 0x108a28: 0x3c081200
    ctx->pc = 0x108a28u;
    SET_GPR_S32(ctx, 8, ((uint32_t)4608 << 16));
    // 0x108a2c: 0x3c0a1200
    ctx->pc = 0x108a2cu;
    SET_GPR_S32(ctx, 10, ((uint32_t)4608 << 16));
    // 0x108a30: 0x822021
    ctx->pc = 0x108a30u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x108a34: 0x35080090
    ctx->pc = 0x108a34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)144);
    // 0x108a38: 0xdc820000
    ctx->pc = 0x108a38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108a3c: 0x354a0080
    ctx->pc = 0x108a3cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)128);
    // 0x108a40: 0x3c051200
    ctx->pc = 0x108a40u;
    SET_GPR_S32(ctx, 5, ((uint32_t)4608 << 16));
    // 0x108a44: 0x3c061200
    ctx->pc = 0x108a44u;
    SET_GPR_S32(ctx, 6, ((uint32_t)4608 << 16));
    // 0x108a48: 0xfd620000
    ctx->pc = 0x108a48u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 2));
    // 0x108a4c: 0x34a500a0
    ctx->pc = 0x108a4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)160);
    // 0x108a50: 0x34c600e0
    ctx->pc = 0x108a50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)224);
    // 0x108a54: 0xdfbf0000
    ctx->pc = 0x108a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108a58: 0xdc820008
    ctx->pc = 0x108a58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x108a5c: 0xfce20000
    ctx->pc = 0x108a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x108a60: 0xdc830010
    ctx->pc = 0x108a60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x108a64: 0xfd230000
    ctx->pc = 0x108a64u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x108a68: 0xdc820018
    ctx->pc = 0x108a68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x108a6c: 0xfd020000
    ctx->pc = 0x108a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
    // 0x108a70: 0xdc830020
    ctx->pc = 0x108a70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x108a74: 0xfd430000
    ctx->pc = 0x108a74u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 3));
    // 0x108a78: 0xdc820028
    ctx->pc = 0x108a78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x108a7c: 0xfca20000
    ctx->pc = 0x108a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x108a80: 0xdc830030
    ctx->pc = 0x108a80u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x108a84: 0xfcc30000
    ctx->pc = 0x108a84u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x108a88: 0x3e00008
    ctx->pc = 0x108A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108A8Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108A90u;
}
