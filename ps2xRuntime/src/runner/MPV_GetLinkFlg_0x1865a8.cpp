#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPV_GetLinkFlg
// Address: 0x1865a8 - 0x186614
void MPV_GetLinkFlg_0x1865a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPV_GetLinkFlg");


    ctx->pc = 0x1865a8u;

    // 0x1865a8: 0x27bdffc0
    ctx->pc = 0x1865a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1865ac: 0xffb00000
    ctx->pc = 0x1865acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1865b0: 0xffb20020
    ctx->pc = 0x1865b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1865b4: 0x80802d
    ctx->pc = 0x1865b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1865b8: 0xffb10010
    ctx->pc = 0x1865b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1865bc: 0xc0902d
    ctx->pc = 0x1865bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1865c0: 0xffbf0030
    ctx->pc = 0x1865c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1865c4: 0xc062142
    ctx->pc = 0x1865C4u;
    SET_GPR_U32(ctx, 31, 0x1865CCu);
    ctx->pc = 0x1865C8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x188508u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVLIB_CheckHn_0x188508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1865CCu; }
        else if (ctx->pc != 0x1865CCu) { ctx->pc = 0x1865CCu; }
    }
    if (ctx->pc != 0x1865CCu) { return; }
    ctx->pc = 0x1865CCu;
    // 0x1865cc: 0x10400006
    ctx->pc = 0x1865CCu;
    {
        const bool branch_taken_0x1865cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1865D0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1865cc) {
            ctx->pc = 0x1865E8u;
            goto label_1865e8;
        }
    }
    ctx->pc = 0x1865D4u;
    // 0x1865d4: 0x3c05ff03
    ctx->pc = 0x1865d4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65283 << 16));
    // 0x1865d8: 0xc061846
    ctx->pc = 0x1865D8u;
    SET_GPR_U32(ctx, 31, 0x1865E0u);
    ctx->pc = 0x1865DCu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 526));
    ctx->pc = 0x186118u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVERR_SetCode_0x186118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1865E0u; }
        else if (ctx->pc != 0x1865E0u) { ctx->pc = 0x1865E0u; }
    }
    if (ctx->pc != 0x1865E0u) { return; }
    ctx->pc = 0x1865E0u;
    // 0x1865e0: 0x10000007
    ctx->pc = 0x1865E0u;
    {
        const bool branch_taken_0x1865e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1865E4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1865e0) {
            ctx->pc = 0x186600u;
            goto label_186600;
        }
    }
    ctx->pc = 0x1865E8u;
label_1865e8:
    // 0x1865e8: 0x8e040220
    ctx->pc = 0x1865e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x1865ec: 0x102d
    ctx->pc = 0x1865ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1865f0: 0xae240000
    ctx->pc = 0x1865f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x1865f4: 0x8e030224
    ctx->pc = 0x1865f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x1865f8: 0xae430000
    ctx->pc = 0x1865f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1865fc: 0xdfbf0030
    ctx->pc = 0x1865fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_186600:
    // 0x186600: 0xdfb20020
    ctx->pc = 0x186600u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186604: 0xdfb10010
    ctx->pc = 0x186604u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186608: 0xdfb00000
    ctx->pc = 0x186608u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18660c: 0x3e00008
    ctx->pc = 0x18660Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186610u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1865E8u: goto label_1865e8;
            case 0x186600u: goto label_186600;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186614u;
}
