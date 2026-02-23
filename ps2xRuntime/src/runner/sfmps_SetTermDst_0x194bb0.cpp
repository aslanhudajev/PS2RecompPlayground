#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_SetTermDst
// Address: 0x194bb0 - 0x194c18
void sfmps_SetTermDst_0x194bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_SetTermDst");


    ctx->pc = 0x194bb0u;

    // 0x194bb0: 0x27bdffc0
    ctx->pc = 0x194bb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x194bb4: 0xffb00000
    ctx->pc = 0x194bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x194bb8: 0x80802d
    ctx->pc = 0x194bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194bbc: 0xffb20020
    ctx->pc = 0x194bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x194bc0: 0xffb10010
    ctx->pc = 0x194bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x194bc4: 0xa0902d
    ctx->pc = 0x194bc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194bc8: 0xffbf0030
    ctx->pc = 0x194bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x194bcc: 0x26113058
    ctx->pc = 0x194bccu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 12376));
    // 0x194bd0: 0x240302d
    ctx->pc = 0x194bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194bd4: 0xc064a5a
    ctx->pc = 0x194BD4u;
    SET_GPR_U32(ctx, 31, 0x194BDCu);
    ctx->pc = 0x194BD8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 1716)));
    ctx->pc = 0x192968u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_SetTermFlg_0x192968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194BDCu; }
        else if (ctx->pc != 0x194BDCu) { ctx->pc = 0x194BDCu; }
    }
    if (ctx->pc != 0x194BDCu) { return; }
    ctx->pc = 0x194BDCu;
    // 0x194bdc: 0x8e2506b0
    ctx->pc = 0x194bdcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 1712)));
    // 0x194be0: 0x200202d
    ctx->pc = 0x194be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194be4: 0xc064a5a
    ctx->pc = 0x194BE4u;
    SET_GPR_U32(ctx, 31, 0x194BECu);
    ctx->pc = 0x194BE8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192968u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_SetTermFlg_0x192968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194BECu; }
        else if (ctx->pc != 0x194BECu) { ctx->pc = 0x194BECu; }
    }
    if (ctx->pc != 0x194BECu) { return; }
    ctx->pc = 0x194BECu;
    // 0x194bec: 0x8e2506b8
    ctx->pc = 0x194becu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 1720)));
    // 0x194bf0: 0x240302d
    ctx->pc = 0x194bf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194bf4: 0xc064a5a
    ctx->pc = 0x194BF4u;
    SET_GPR_U32(ctx, 31, 0x194BFCu);
    ctx->pc = 0x194BF8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192968u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_SetTermFlg_0x192968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194BFCu; }
        else if (ctx->pc != 0x194BFCu) { ctx->pc = 0x194BFCu; }
    }
    if (ctx->pc != 0x194BFCu) { return; }
    ctx->pc = 0x194BFCu;
    // 0x194bfc: 0x200202d
    ctx->pc = 0x194bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194c00: 0xdfbf0030
    ctx->pc = 0x194c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194c04: 0xdfb20020
    ctx->pc = 0x194c04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194c08: 0xdfb10010
    ctx->pc = 0x194c08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194c0c: 0xdfb00000
    ctx->pc = 0x194c0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194c10: 0x80668d0
    ctx->pc = 0x194C10u;
    ctx->pc = 0x194C14u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x19A340u;
    SFMPVP_Flush_0x19a340(rdram, ctx, runtime); return;
    ctx->pc = 0x194C18u;
}
