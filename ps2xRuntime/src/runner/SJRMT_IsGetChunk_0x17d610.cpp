#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJRMT_IsGetChunk
// Address: 0x17d610 - 0x17d680
void SJRMT_IsGetChunk_0x17d610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJRMT_IsGetChunk");


    ctx->pc = 0x17d610u;

    // 0x17d610: 0x27bdffc0
    ctx->pc = 0x17d610u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17d614: 0x3c03002e
    ctx->pc = 0x17d614u;
    SET_GPR_U32(ctx, 3, ((uint32_t)46 << 16));
    // 0x17d618: 0xffb10010
    ctx->pc = 0x17d618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17d61c: 0x246218c0
    ctx->pc = 0x17d61cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 6336));
    // 0x17d620: 0xffb20020
    ctx->pc = 0x17d620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17d624: 0x3c11002e
    ctx->pc = 0x17d624u;
    SET_GPR_U32(ctx, 17, ((uint32_t)46 << 16));
    // 0x17d628: 0xffb00000
    ctx->pc = 0x17d628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17d62c: 0xe0902d
    ctx->pc = 0x17d62cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d630: 0xac6418c0
    ctx->pc = 0x17d630u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6336), GPR_U32(ctx, 4));
    // 0x17d634: 0x263019c0
    ctx->pc = 0x17d634u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 6592));
    // 0x17d638: 0xffbf0030
    ctx->pc = 0x17d638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17d63c: 0x200382d
    ctx->pc = 0x17d63cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d640: 0xac450004
    ctx->pc = 0x17d640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x17d644: 0x2404002a
    ctx->pc = 0x17d644u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 42));
    // 0x17d648: 0xac460008
    ctx->pc = 0x17d648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x17d64c: 0x40282d
    ctx->pc = 0x17d64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d650: 0x24060003
    ctx->pc = 0x17d650u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x17d654: 0xc05dcd2
    ctx->pc = 0x17D654u;
    SET_GPR_U32(ctx, 31, 0x17D65Cu);
    ctx->pc = 0x17D658u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x177348u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTX_CallUrpc_0x177348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D65Cu; }
        else if (ctx->pc != 0x17D65Cu) { ctx->pc = 0x17D65Cu; }
    }
    if (ctx->pc != 0x17D65Cu) { return; }
    ctx->pc = 0x17D65Cu;
    // 0x17d65c: 0x8e030004
    ctx->pc = 0x17d65cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17d660: 0xdfbf0030
    ctx->pc = 0x17d660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17d664: 0xae430000
    ctx->pc = 0x17d664u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x17d668: 0xdfb20020
    ctx->pc = 0x17d668u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d66c: 0x8e2219c0
    ctx->pc = 0x17d66cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 6592)));
    // 0x17d670: 0xdfb10010
    ctx->pc = 0x17d670u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d674: 0xdfb00000
    ctx->pc = 0x17d674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d678: 0x3e00008
    ctx->pc = 0x17D678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D67Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D680u;
}
