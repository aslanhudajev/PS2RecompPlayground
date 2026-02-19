#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _fstat_r
// Address: 0x303160 - 0x3031bc
void _fstat_r_0x303160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303160u;

    // 0x303160: 0x27bdffd0
    ctx->pc = 0x303160u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x303164: 0xffb00000
    ctx->pc = 0x303164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x303168: 0xffb10010
    ctx->pc = 0x303168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x30316c: 0x80802d
    ctx->pc = 0x30316cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303170: 0xa0202d
    ctx->pc = 0x303170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303174: 0x3c11003c
    ctx->pc = 0x303174u;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
    // 0x303178: 0xffbf0020
    ctx->pc = 0x303178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30317c: 0xc0282d
    ctx->pc = 0x30317cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303180: 0xc0c0f36
    ctx->pc = 0x303180u;
    SET_GPR_U32(ctx, 31, 0x303188u);
    ctx->pc = 0x303184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294947224), GPR_U32(ctx, 0));
    ctx->pc = 0x303CD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        fstat_0x303cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303188u; }
    }
    if (ctx->pc != 0x303188u) { return; }
    ctx->pc = 0x303188u;
    // 0x303188: 0x40182d
    ctx->pc = 0x303188u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30318c: 0x2402ffff
    ctx->pc = 0x30318cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x303190: 0x14620005
    ctx->pc = 0x303190u;
    {
        const bool branch_taken_0x303190 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x303194u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x303190) {
            ctx->pc = 0x3031A8u;
            goto label_3031a8;
        }
    }
    ctx->pc = 0x303198u;
    // 0x303198: 0x8e22b198
    ctx->pc = 0x303198u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294947224)));
    // 0x30319c: 0x54400002
    ctx->pc = 0x30319Cu;
    {
        const bool branch_taken_0x30319c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x30319c) {
            ctx->pc = 0x3031A0u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->pc = 0x3031A8u;
            goto label_3031a8;
        }
    }
    ctx->pc = 0x3031A4u;
    // 0x3031a4: 0xdfbf0020
    ctx->pc = 0x3031a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3031a8:
    // 0x3031a8: 0x60102d
    ctx->pc = 0x3031a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3031ac: 0xdfb10010
    ctx->pc = 0x3031acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3031b0: 0xdfb00000
    ctx->pc = 0x3031b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3031b4: 0x3e00008
    ctx->pc = 0x3031B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3031B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3031A8u: goto label_3031a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3031BCu;
}
