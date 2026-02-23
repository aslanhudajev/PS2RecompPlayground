#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfsee_InitHeadInf
// Address: 0x19c3d8 - 0x19c48c
void sfsee_InitHeadInf_0x19c3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfsee_InitHeadInf");


    ctx->pc = 0x19c3d8u;

    // 0x19c3d8: 0x27bdffb0
    ctx->pc = 0x19c3d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19c3dc: 0xffb10010
    ctx->pc = 0x19c3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19c3e0: 0x80882d
    ctx->pc = 0x19c3e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c3e4: 0xffb30030
    ctx->pc = 0x19c3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19c3e8: 0xffb20020
    ctx->pc = 0x19c3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19c3ec: 0x2624000c
    ctx->pc = 0x19c3ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 12));
    // 0x19c3f0: 0xffb00000
    ctx->pc = 0x19c3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19c3f4: 0x26330ac4
    ctx->pc = 0x19c3f4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 17), 2756));
    // 0x19c3f8: 0xffbf0040
    ctx->pc = 0x19c3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19c3fc: 0x263008a0
    ctx->pc = 0x19c3fcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 2208));
    // 0x19c400: 0xae200000
    ctx->pc = 0x19c400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x19c404: 0x26320cfc
    ctx->pc = 0x19c404u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 3324));
    // 0x19c408: 0xae200004
    ctx->pc = 0x19c408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x19c40c: 0xc064b88
    ctx->pc = 0x19C40Cu;
    SET_GPR_U32(ctx, 31, 0x19C414u);
    ctx->pc = 0x19C410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x192E20u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFHDS_InitFhd_0x192e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C414u; }
        else if (ctx->pc != 0x19C414u) { ctx->pc = 0x19C414u; }
    }
    if (ctx->pc != 0x19C414u) { return; }
    ctx->pc = 0x19C414u;
    // 0x19c414: 0xae2008a0
    ctx->pc = 0x19c414u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2208), GPR_U32(ctx, 0));
    // 0x19c418: 0x3c057fff
    ctx->pc = 0x19c418u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32767 << 16));
    // 0x19c41c: 0xae000020
    ctx->pc = 0x19c41cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x19c420: 0x26240ad0
    ctx->pc = 0x19c420u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 2768));
    // 0x19c424: 0xae000004
    ctx->pc = 0x19c424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x19c428: 0x34a5ffff
    ctx->pc = 0x19c428u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x19c42c: 0xae000008
    ctx->pc = 0x19c42cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x19c430: 0xae00000c
    ctx->pc = 0x19c430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x19c434: 0xae000010
    ctx->pc = 0x19c434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x19c438: 0xae000014
    ctx->pc = 0x19c438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x19c43c: 0xae000018
    ctx->pc = 0x19c43cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x19c440: 0xae00001c
    ctx->pc = 0x19c440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x19c444: 0xae200ac4
    ctx->pc = 0x19c444u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2756), GPR_U32(ctx, 0));
    // 0x19c448: 0xae600008
    ctx->pc = 0x19c448u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x19c44c: 0xc06760c
    ctx->pc = 0x19C44Cu;
    SET_GPR_U32(ctx, 31, 0x19C454u);
    ctx->pc = 0x19C450u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x19D830u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_InitTtu_0x19d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C454u; }
        else if (ctx->pc != 0x19C454u) { ctx->pc = 0x19C454u; }
    }
    if (ctx->pc != 0x19C454u) { return; }
    ctx->pc = 0x19C454u;
    // 0x19c454: 0xae200cfc
    ctx->pc = 0x19c454u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3324), GPR_U32(ctx, 0));
    // 0x19c458: 0x24020001
    ctx->pc = 0x19c458u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c45c: 0xae420008
    ctx->pc = 0x19c45cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x19c460: 0xae400004
    ctx->pc = 0x19c460u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x19c464: 0xae40000c
    ctx->pc = 0x19c464u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x19c468: 0xae400010
    ctx->pc = 0x19c468u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x19c46c: 0xae400014
    ctx->pc = 0x19c46cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x19c470: 0xdfbf0040
    ctx->pc = 0x19c470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19c474: 0xdfb30030
    ctx->pc = 0x19c474u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19c478: 0xdfb20020
    ctx->pc = 0x19c478u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c47c: 0xdfb10010
    ctx->pc = 0x19c47cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c480: 0xdfb00000
    ctx->pc = 0x19c480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c484: 0x3e00008
    ctx->pc = 0x19C484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C488u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C48Cu;
}
