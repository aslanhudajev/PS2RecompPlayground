#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJX_Finish
// Address: 0x17d9f8 - 0x17da48
void SJX_Finish_0x17d9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJX_Finish");


    ctx->pc = 0x17d9f8u;

    // 0x17d9f8: 0x8f82830c
    ctx->pc = 0x17d9f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935308)));
    // 0x17d9fc: 0x27bdfff0
    ctx->pc = 0x17d9fcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17da00: 0xffbf0000
    ctx->pc = 0x17da00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17da04: 0x2442ffff
    ctx->pc = 0x17da04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17da08: 0x1440000c
    ctx->pc = 0x17DA08u;
    {
        const bool branch_taken_0x17da08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17DA0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935308), GPR_U32(ctx, 2));
        if (branch_taken_0x17da08) {
            ctx->pc = 0x17DA3Cu;
            goto label_17da3c;
        }
    }
    ctx->pc = 0x17DA10u;
    // 0x17da10: 0xc05dc12
    ctx->pc = 0x17DA10u;
    SET_GPR_U32(ctx, 31, 0x17DA18u);
    ctx->pc = 0x17DA14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935324)));
    ctx->pc = 0x177048u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTX_Destroy_0x177048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DA18u; }
        else if (ctx->pc != 0x17DA18u) { ctx->pc = 0x17DA18u; }
    }
    if (ctx->pc != 0x17DA18u) { return; }
    ctx->pc = 0x17DA18u;
    // 0x17da18: 0x8f848314
    ctx->pc = 0x17da18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935316)));
    // 0x17da1c: 0x10800004
    ctx->pc = 0x17DA1Cu;
    {
        const bool branch_taken_0x17da1c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x17DA20u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935324), GPR_U32(ctx, 0));
        if (branch_taken_0x17da1c) {
            ctx->pc = 0x17DA30u;
            goto label_17da30;
        }
    }
    ctx->pc = 0x17DA24u;
    // 0x17da24: 0xc056e14
    ctx->pc = 0x17DA24u;
    SET_GPR_U32(ctx, 31, 0x17DA2Cu);
    ctx->pc = 0x15B850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifFreeIopHeap_0x15b850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DA2Cu; }
        else if (ctx->pc != 0x17DA2Cu) { ctx->pc = 0x17DA2Cu; }
    }
    if (ctx->pc != 0x17DA2Cu) { return; }
    ctx->pc = 0x17DA2Cu;
    // 0x17da2c: 0xaf808314
    ctx->pc = 0x17da2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935316), GPR_U32(ctx, 0));
label_17da30:
    // 0x17da30: 0xdfbf0000
    ctx->pc = 0x17da30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17da34: 0x805dcb4
    ctx->pc = 0x17DA34u;
    ctx->pc = 0x17DA38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1772D0u;
    DTX_Finish_0x1772d0(rdram, ctx, runtime); return;
    ctx->pc = 0x17DA3Cu;
label_17da3c:
    // 0x17da3c: 0xdfbf0000
    ctx->pc = 0x17da3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17da40: 0x3e00008
    ctx->pc = 0x17DA40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DA44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17DA30u: goto label_17da30;
            case 0x17DA3Cu: goto label_17da3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17DA48u;
}
