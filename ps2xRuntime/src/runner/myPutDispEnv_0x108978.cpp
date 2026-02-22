#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: myPutDispEnv
// Address: 0x108978 - 0x1089e4
void myPutDispEnv_0x108978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x108978u;

    // 0x108978: 0xdc830000
    ctx->pc = 0x108978u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10897c: 0x3c051200
    ctx->pc = 0x10897cu;
    SET_GPR_S32(ctx, 5, ((uint32_t)4608 << 16));
    // 0x108980: 0x3c021200
    ctx->pc = 0x108980u;
    SET_GPR_S32(ctx, 2, ((uint32_t)4608 << 16));
    // 0x108984: 0x3c081200
    ctx->pc = 0x108984u;
    SET_GPR_S32(ctx, 8, ((uint32_t)4608 << 16));
    // 0x108988: 0xfca30000
    ctx->pc = 0x108988u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x10898c: 0x34420020
    ctx->pc = 0x10898cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)32);
    // 0x108990: 0x35080070
    ctx->pc = 0x108990u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)112);
    // 0x108994: 0x3c071200
    ctx->pc = 0x108994u;
    SET_GPR_S32(ctx, 7, ((uint32_t)4608 << 16));
    // 0x108998: 0xdc830008
    ctx->pc = 0x108998u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10899c: 0x34e70090
    ctx->pc = 0x10899cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)144);
    // 0x1089a0: 0x3c091200
    ctx->pc = 0x1089a0u;
    SET_GPR_S32(ctx, 9, ((uint32_t)4608 << 16));
    // 0x1089a4: 0x3c061200
    ctx->pc = 0x1089a4u;
    SET_GPR_S32(ctx, 6, ((uint32_t)4608 << 16));
    // 0x1089a8: 0xfc430000
    ctx->pc = 0x1089a8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1089ac: 0x35290080
    ctx->pc = 0x1089acu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)128);
    // 0x1089b0: 0x34c600a0
    ctx->pc = 0x1089b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)160);
    // 0x1089b4: 0x34a500e0
    ctx->pc = 0x1089b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)224);
    // 0x1089b8: 0xdc830010
    ctx->pc = 0x1089b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1089bc: 0xfd030000
    ctx->pc = 0x1089bcu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x1089c0: 0xdc820018
    ctx->pc = 0x1089c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1089c4: 0xfce20000
    ctx->pc = 0x1089c4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x1089c8: 0xdc830020
    ctx->pc = 0x1089c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1089cc: 0xfd230000
    ctx->pc = 0x1089ccu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x1089d0: 0xdc820028
    ctx->pc = 0x1089d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1089d4: 0xfcc20000
    ctx->pc = 0x1089d4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x1089d8: 0xdc830030
    ctx->pc = 0x1089d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1089dc: 0x3e00008
    ctx->pc = 0x1089DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1089E0u;
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1089E4u;
}
