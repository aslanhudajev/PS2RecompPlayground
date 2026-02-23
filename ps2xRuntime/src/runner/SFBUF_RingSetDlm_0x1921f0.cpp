#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFBUF_RingSetDlm
// Address: 0x1921f0 - 0x192270
void SFBUF_RingSetDlm_0x1921f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFBUF_RingSetDlm");


    ctx->pc = 0x1921f0u;

    // 0x1921f0: 0x24020388
    ctx->pc = 0x1921f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 904));
    // 0x1921f4: 0x27bdff90
    ctx->pc = 0x1921f4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1921f8: 0xa22818
    ctx->pc = 0x1921f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x1921fc: 0xffb00010
    ctx->pc = 0x1921fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x192200: 0x24900d34
    ctx->pc = 0x192200u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 3380));
    // 0x192204: 0xffb40050
    ctx->pc = 0x192204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x192208: 0xffb30040
    ctx->pc = 0x192208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x19220c: 0xe0a02d
    ctx->pc = 0x19220cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192210: 0xffb20030
    ctx->pc = 0x192210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x192214: 0x120982d
    ctx->pc = 0x192214u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192218: 0xffb10020
    ctx->pc = 0x192218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x19221c: 0x2058021
    ctx->pc = 0x19221cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x192220: 0xc0882d
    ctx->pc = 0x192220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192224: 0x100902d
    ctx->pc = 0x192224u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192228: 0xffbf0060
    ctx->pc = 0x192228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x19222c: 0xc064f3a
    ctx->pc = 0x19222Cu;
    SET_GPR_U32(ctx, 31, 0x192234u);
    ctx->pc = 0x192230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_LockCs_0x193ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192234u; }
        else if (ctx->pc != 0x192234u) { ctx->pc = 0x192234u; }
    }
    if (ctx->pc != 0x192234u) { return; }
    ctx->pc = 0x192234u;
    // 0x192234: 0x26020028
    ctx->pc = 0x192234u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 40));
    // 0x192238: 0xae110028
    ctx->pc = 0x192238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
    // 0x19223c: 0xac52000c
    ctx->pc = 0x19223cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 18));
    // 0x192240: 0x3a0202d
    ctx->pc = 0x192240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192244: 0xac540004
    ctx->pc = 0x192244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x192248: 0xc064f44
    ctx->pc = 0x192248u;
    SET_GPR_U32(ctx, 31, 0x192250u);
    ctx->pc = 0x19224Cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 19));
    ctx->pc = 0x193D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_UnlockCs_0x193d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192250u; }
        else if (ctx->pc != 0x192250u) { ctx->pc = 0x192250u; }
    }
    if (ctx->pc != 0x192250u) { return; }
    ctx->pc = 0x192250u;
    // 0x192250: 0xdfbf0060
    ctx->pc = 0x192250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x192254: 0xdfb40050
    ctx->pc = 0x192254u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x192258: 0xdfb30040
    ctx->pc = 0x192258u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19225c: 0xdfb20030
    ctx->pc = 0x19225cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x192260: 0xdfb10020
    ctx->pc = 0x192260u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192264: 0xdfb00010
    ctx->pc = 0x192264u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192268: 0x3e00008
    ctx->pc = 0x192268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19226Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192270u;
}
