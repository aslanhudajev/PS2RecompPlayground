#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFBUF_VfrmGetRead
// Address: 0x192880 - 0x1928cc
void SFBUF_VfrmGetRead_0x192880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFBUF_VfrmGetRead");


    ctx->pc = 0x192880u;

    // 0x192880: 0x24020388
    ctx->pc = 0x192880u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 904));
    // 0x192884: 0x27bdfff0
    ctx->pc = 0x192884u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x192888: 0xa22818
    ctx->pc = 0x192888u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x19288c: 0xffbf0000
    ctx->pc = 0x19288cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x192890: 0x24830d34
    ctx->pc = 0x192890u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 3380));
    // 0x192894: 0x651821
    ctx->pc = 0x192894u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x192898: 0x8c620004
    ctx->pc = 0x192898u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19289c: 0x14400008
    ctx->pc = 0x19289Cu;
    {
        const bool branch_taken_0x19289c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1928A0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19289c) {
            ctx->pc = 0x1928C0u;
            goto label_1928c0;
        }
    }
    ctx->pc = 0x1928A4u;
    // 0x1928a4: 0xc0382d
    ctx->pc = 0x1928a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1928a8: 0x8c650360
    ctx->pc = 0x1928a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 864)));
    // 0x1928ac: 0x2406000b
    ctx->pc = 0x1928acu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 11));
    // 0x1928b0: 0xc067cca
    ctx->pc = 0x1928B0u;
    SET_GPR_U32(ctx, 31, 0x1928B8u);
    ctx->pc = 0x1928B4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F328u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_CallTrtTrif_0x19f328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1928B8u; }
        else if (ctx->pc != 0x1928B8u) { ctx->pc = 0x1928B8u; }
    }
    if (ctx->pc != 0x1928B8u) { return; }
    ctx->pc = 0x1928B8u;
    // 0x1928b8: 0x10000002
    ctx->pc = 0x1928B8u;
    {
        const bool branch_taken_0x1928b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1928BCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1928b8) {
            ctx->pc = 0x1928C4u;
            goto label_1928c4;
        }
    }
    ctx->pc = 0x1928C0u;
label_1928c0:
    // 0x1928c0: 0xdfbf0000
    ctx->pc = 0x1928c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1928c4:
    // 0x1928c4: 0x3e00008
    ctx->pc = 0x1928C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1928C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1928C0u: goto label_1928c0;
            case 0x1928C4u: goto label_1928c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1928CCu;
}
