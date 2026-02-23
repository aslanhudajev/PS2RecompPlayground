#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DTX_Finish
// Address: 0x1772d0 - 0x177348
void DTX_Finish_0x1772d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DTX_Finish");


    ctx->pc = 0x1772d0u;

    // 0x1772d0: 0x8f828298
    ctx->pc = 0x1772d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935192)));
    // 0x1772d4: 0x27bdffc0
    ctx->pc = 0x1772d4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1772d8: 0xffbf0030
    ctx->pc = 0x1772d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1772dc: 0x2442ffff
    ctx->pc = 0x1772dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1772e0: 0xffb20020
    ctx->pc = 0x1772e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1772e4: 0xffb10010
    ctx->pc = 0x1772e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1772e8: 0xffb00000
    ctx->pc = 0x1772e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1772ec: 0x14400010
    ctx->pc = 0x1772ECu;
    {
        const bool branch_taken_0x1772ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1772F0u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935192), GPR_U32(ctx, 2));
        if (branch_taken_0x1772ec) {
            ctx->pc = 0x177330u;
            goto label_177330;
        }
    }
    ctx->pc = 0x1772F4u;
    // 0x1772f4: 0x3c020024
    ctx->pc = 0x1772f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x1772f8: 0x24120001
    ctx->pc = 0x1772f8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1772fc: 0x24428bb0
    ctx->pc = 0x1772fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937520));
    // 0x177300: 0x40802d
    ctx->pc = 0x177300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177304: 0x26110220
    ctx->pc = 0x177304u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 544));
    // 0x177308: 0x82020000
    ctx->pc = 0x177308u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17730c: 0x0
    ctx->pc = 0x17730cu;
    // NOP
label_177310:
    // 0x177310: 0x54520004
    ctx->pc = 0x177310u;
    {
        const bool branch_taken_0x177310 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x177310) {
            ctx->pc = 0x177314u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 68));
            ctx->pc = 0x177324u;
            goto label_177324;
        }
    }
    ctx->pc = 0x177318u;
    // 0x177318: 0xc05dc12
    ctx->pc = 0x177318u;
    SET_GPR_U32(ctx, 31, 0x177320u);
    ctx->pc = 0x17731Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177048u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTX_Destroy_0x177048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177320u; }
        else if (ctx->pc != 0x177320u) { ctx->pc = 0x177320u; }
    }
    if (ctx->pc != 0x177320u) { return; }
    ctx->pc = 0x177320u;
    // 0x177320: 0x26100044
    ctx->pc = 0x177320u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 68));
label_177324:
    // 0x177324: 0x211102a
    ctx->pc = 0x177324u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x177328: 0x5440fff9
    ctx->pc = 0x177328u;
    {
        const bool branch_taken_0x177328 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x177328) {
            ctx->pc = 0x17732Cu;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x177310u;
            goto label_177310;
        }
    }
    ctx->pc = 0x177330u;
label_177330:
    // 0x177330: 0xdfbf0030
    ctx->pc = 0x177330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177334: 0xdfb20020
    ctx->pc = 0x177334u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177338: 0xdfb10010
    ctx->pc = 0x177338u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17733c: 0xdfb00000
    ctx->pc = 0x17733cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177340: 0x3e00008
    ctx->pc = 0x177340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177344u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x177310u: goto label_177310;
            case 0x177324u: goto label_177324;
            case 0x177330u: goto label_177330;
            default: break;
        }
        return;
    }
    ctx->pc = 0x177348u;
}
