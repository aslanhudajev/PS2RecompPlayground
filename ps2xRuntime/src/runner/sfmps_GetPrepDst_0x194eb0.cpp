#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_GetPrepDst
// Address: 0x194eb0 - 0x194f1c
void sfmps_GetPrepDst_0x194eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_GetPrepDst");


    ctx->pc = 0x194eb0u;

    // 0x194eb0: 0x27bdffb0
    ctx->pc = 0x194eb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x194eb4: 0xffb20020
    ctx->pc = 0x194eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x194eb8: 0x80902d
    ctx->pc = 0x194eb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194ebc: 0xffb30030
    ctx->pc = 0x194ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x194ec0: 0xffb10010
    ctx->pc = 0x194ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x194ec4: 0xffb00000
    ctx->pc = 0x194ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x194ec8: 0xffbf0040
    ctx->pc = 0x194ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x194ecc: 0x26503058
    ctx->pc = 0x194eccu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 12376));
    // 0x194ed0: 0xc064a54
    ctx->pc = 0x194ED0u;
    SET_GPR_U32(ctx, 31, 0x194ED8u);
    ctx->pc = 0x194ED4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 1716)));
    ctx->pc = 0x192950u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetPrepFlg_0x192950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194ED8u; }
        else if (ctx->pc != 0x194ED8u) { ctx->pc = 0x194ED8u; }
    }
    if (ctx->pc != 0x194ED8u) { return; }
    ctx->pc = 0x194ED8u;
    // 0x194ed8: 0x8e0506b0
    ctx->pc = 0x194ed8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 1712)));
    // 0x194edc: 0x40882d
    ctx->pc = 0x194edcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194ee0: 0xc064a54
    ctx->pc = 0x194EE0u;
    SET_GPR_U32(ctx, 31, 0x194EE8u);
    ctx->pc = 0x194EE4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192950u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetPrepFlg_0x192950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194EE8u; }
        else if (ctx->pc != 0x194EE8u) { ctx->pc = 0x194EE8u; }
    }
    if (ctx->pc != 0x194EE8u) { return; }
    ctx->pc = 0x194EE8u;
    // 0x194ee8: 0x8e0506b8
    ctx->pc = 0x194ee8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 1720)));
    // 0x194eec: 0x40982d
    ctx->pc = 0x194eecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194ef0: 0xc064a54
    ctx->pc = 0x194EF0u;
    SET_GPR_U32(ctx, 31, 0x194EF8u);
    ctx->pc = 0x194EF4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192950u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetPrepFlg_0x192950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194EF8u; }
        else if (ctx->pc != 0x194EF8u) { ctx->pc = 0x194EF8u; }
    }
    if (ctx->pc != 0x194EF8u) { return; }
    ctx->pc = 0x194EF8u;
    // 0x194ef8: 0x2338825
    ctx->pc = 0x194ef8u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x194efc: 0xdfbf0040
    ctx->pc = 0x194efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x194f00: 0x2221025
    ctx->pc = 0x194f00u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x194f04: 0xdfb30030
    ctx->pc = 0x194f04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194f08: 0xdfb20020
    ctx->pc = 0x194f08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194f0c: 0xdfb10010
    ctx->pc = 0x194f0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194f10: 0xdfb00000
    ctx->pc = 0x194f10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194f14: 0x3e00008
    ctx->pc = 0x194F14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194F18u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194F1Cu;
}
