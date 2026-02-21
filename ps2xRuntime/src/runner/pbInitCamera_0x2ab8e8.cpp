#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbInitCamera
// Address: 0x2ab8e8 - 0x2ab964
void pbInitCamera_0x2ab8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ab8e8u;

    // 0x2ab8e8: 0x3c020036
    ctx->pc = 0x2ab8e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ab8ec: 0x8c43dee0
    ctx->pc = 0x2ab8ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ab8f0: 0x8c620004
    ctx->pc = 0x2ab8f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ab8f4: 0xac400020
    ctx->pc = 0x2ab8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x2ab8f8: 0x8c620004
    ctx->pc = 0x2ab8f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ab8fc: 0xac400024
    ctx->pc = 0x2ab8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x2ab900: 0x8c620004
    ctx->pc = 0x2ab900u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ab904: 0xac400028
    ctx->pc = 0x2ab904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x2ab908: 0x8c620004
    ctx->pc = 0x2ab908u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ab90c: 0xac40002c
    ctx->pc = 0x2ab90cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x2ab910: 0x8c620004
    ctx->pc = 0x2ab910u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ab914: 0xac400030
    ctx->pc = 0x2ab914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x2ab918: 0x8c620004
    ctx->pc = 0x2ab918u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ab91c: 0xac400034
    ctx->pc = 0x2ab91cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x2ab920: 0x8c620004
    ctx->pc = 0x2ab920u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ab924: 0x3c01bf80
    ctx->pc = 0x2ab924u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x2ab928: 0x44810000
    ctx->pc = 0x2ab928u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ab92c: 0xe4400038
    ctx->pc = 0x2ab92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x2ab930: 0x8c620004
    ctx->pc = 0x2ab930u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ab934: 0xac40003c
    ctx->pc = 0x2ab934u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x2ab938: 0x8c620004
    ctx->pc = 0x2ab938u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ab93c: 0xac400040
    ctx->pc = 0x2ab93cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x2ab940: 0x8c620004
    ctx->pc = 0x2ab940u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ab944: 0x3c013f80
    ctx->pc = 0x2ab944u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2ab948: 0x44810000
    ctx->pc = 0x2ab948u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ab94c: 0xe4400044
    ctx->pc = 0x2ab94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2ab950: 0x8c620004
    ctx->pc = 0x2ab950u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ab954: 0xac400048
    ctx->pc = 0x2ab954u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x2ab958: 0x8c620004
    ctx->pc = 0x2ab958u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ab95c: 0x3e00008
    ctx->pc = 0x2AB95Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB960u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB964u;
}
