#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: isnan
// Address: 0x2d74a8 - 0x2d7510
void isnan_0x2d74a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d74a8u;

    // 0x2d74a8: 0x27bdffe0
    ctx->pc = 0x2d74a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d74ac: 0xffbf0010
    ctx->pc = 0x2d74acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d74b0: 0xffa40000
    ctx->pc = 0x2d74b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x2d74b4: 0xdfa40000
    ctx->pc = 0x2d74b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d74b8: 0x4153e
    ctx->pc = 0x2d74b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (32 + 20));
    // 0x2d74bc: 0x304207ff
    ctx->pc = 0x2d74bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2047));
    // 0x2d74c0: 0x240307ff
    ctx->pc = 0x2d74c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2047));
    // 0x2d74c4: 0x5443000f
    ctx->pc = 0x2D74C4u;
    {
        const bool branch_taken_0x2d74c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2d74c4) {
            ctx->pc = 0x2D74C8u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2D7504u;
            goto label_2d7504;
        }
    }
    ctx->pc = 0x2D74CCu;
    // 0x2d74cc: 0x3c02800f
    ctx->pc = 0x2d74ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32783 << 16));
    // 0x2d74d0: 0x3442ffff
    ctx->pc = 0x2d74d0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2d74d4: 0x21438
    ctx->pc = 0x2d74d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2d74d8: 0x3442ffff
    ctx->pc = 0x2d74d8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2d74dc: 0x21438
    ctx->pc = 0x2d74dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2d74e0: 0x3442ffff
    ctx->pc = 0x2d74e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2d74e4: 0x821024
    ctx->pc = 0x2d74e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d74e8: 0xffa20000
    ctx->pc = 0x2d74e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2d74ec: 0xdfa40000
    ctx->pc = 0x2d74ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d74f0: 0xc0be4ba
    ctx->pc = 0x2D74F0u;
    SET_GPR_U32(ctx, 31, 0x2D74F8u);
    ctx->pc = 0x2D74F4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D74F8u; }
    }
    if (ctx->pc != 0x2D74F8u) { return; }
    ctx->pc = 0x2D74F8u;
    // 0x2d74f8: 0x24030001
    ctx->pc = 0x2d74f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d74fc: 0x2180a
    ctx->pc = 0x2d74fcu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
    // 0x2d7500: 0x60102d
    ctx->pc = 0x2d7500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2d7504:
    // 0x2d7504: 0xdfbf0010
    ctx->pc = 0x2d7504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7508: 0x3e00008
    ctx->pc = 0x2D7508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D750Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D7504u: goto label_2d7504;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D7510u;
}
