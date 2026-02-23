#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFTIM_GetAudioStartSample
// Address: 0x19dcd0 - 0x19dd20
void SFTIM_GetAudioStartSample_0x19dcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFTIM_GetAudioStartSample");


    ctx->pc = 0x19dcd0u;

    // 0x19dcd0: 0x27bdffe0
    ctx->pc = 0x19dcd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19dcd4: 0xffb00000
    ctx->pc = 0x19dcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19dcd8: 0xffbf0010
    ctx->pc = 0x19dcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19dcdc: 0x80802d
    ctx->pc = 0x19dcdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dce0: 0x8e040114
    ctx->pc = 0x19dce0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x19dce4: 0x480000a
    ctx->pc = 0x19DCE4u;
    {
        const bool branch_taken_0x19dce4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x19DCE8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x19dce4) {
            ctx->pc = 0x19DD10u;
            goto label_19dd10;
        }
    }
    ctx->pc = 0x19DCECu;
    // 0x19dcec: 0xc063132
    ctx->pc = 0x19DCECu;
    SET_GPR_U32(ctx, 31, 0x19DCF4u);
    ctx->pc = 0x19DCF0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 22500));
    ctx->pc = 0x18C4C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MulAbDivC_0x18c4c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DCF4u; }
        else if (ctx->pc != 0x19DCF4u) { ctx->pc = 0x19DCF4u; }
    }
    if (ctx->pc != 0x19DCF4u) { return; }
    ctx->pc = 0x19DCF4u;
    // 0x19dcf4: 0x40202d
    ctx->pc = 0x19dcf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dcf8: 0x8e050114
    ctx->pc = 0x19dcf8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x19dcfc: 0x3c020026
    ctx->pc = 0x19dcfcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x19dd00: 0x3c030026
    ctx->pc = 0x19dd00u;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x19dd04: 0xac45df60
    ctx->pc = 0x19dd04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958944), GPR_U32(ctx, 5));
    // 0x19dd08: 0xac64df64
    ctx->pc = 0x19dd08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294958948), GPR_U32(ctx, 4));
    // 0x19dd0c: 0x80102d
    ctx->pc = 0x19dd0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19dd10:
    // 0x19dd10: 0xdfbf0010
    ctx->pc = 0x19dd10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dd14: 0xdfb00000
    ctx->pc = 0x19dd14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dd18: 0x3e00008
    ctx->pc = 0x19DD18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DD1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19DD10u: goto label_19dd10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19DD20u;
}
