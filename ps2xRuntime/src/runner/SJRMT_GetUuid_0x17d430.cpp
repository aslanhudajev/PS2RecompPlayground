#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJRMT_GetUuid
// Address: 0x17d430 - 0x17d4a8
void SJRMT_GetUuid_0x17d430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJRMT_GetUuid");


    ctx->pc = 0x17d430u;

    // 0x17d430: 0x27bdffd0
    ctx->pc = 0x17d430u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17d434: 0x3c05002e
    ctx->pc = 0x17d434u;
    SET_GPR_U32(ctx, 5, ((uint32_t)46 << 16));
    // 0x17d438: 0xffb10010
    ctx->pc = 0x17d438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17d43c: 0x24060001
    ctx->pc = 0x17d43cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d440: 0x3c11002e
    ctx->pc = 0x17d440u;
    SET_GPR_U32(ctx, 17, ((uint32_t)46 << 16));
    // 0x17d444: 0xffb00000
    ctx->pc = 0x17d444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17d448: 0x263019c0
    ctx->pc = 0x17d448u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 6592));
    // 0x17d44c: 0xaca418c0
    ctx->pc = 0x17d44cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6336), GPR_U32(ctx, 4));
    // 0x17d450: 0x200382d
    ctx->pc = 0x17d450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d454: 0xffbf0020
    ctx->pc = 0x17d454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17d458: 0x24a518c0
    ctx->pc = 0x17d458u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 6336));
    // 0x17d45c: 0x24040024
    ctx->pc = 0x17d45cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 36));
    // 0x17d460: 0xc05dcd2
    ctx->pc = 0x17D460u;
    SET_GPR_U32(ctx, 31, 0x17D468u);
    ctx->pc = 0x17D464u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x177348u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTX_CallUrpc_0x177348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D468u; }
        else if (ctx->pc != 0x17D468u) { ctx->pc = 0x17D468u; }
    }
    if (ctx->pc != 0x17D468u) { return; }
    ctx->pc = 0x17D468u;
    // 0x17d468: 0x8e2719c0
    ctx->pc = 0x17d468u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 6592)));
    // 0x17d46c: 0x3c05002e
    ctx->pc = 0x17d46cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)46 << 16));
    // 0x17d470: 0x8e08000c
    ctx->pc = 0x17d470u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17d474: 0x24a31880
    ctx->pc = 0x17d474u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 6272));
    // 0x17d478: 0x8e060004
    ctx->pc = 0x17d478u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17d47c: 0x60102d
    ctx->pc = 0x17d47cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d480: 0x8e040008
    ctx->pc = 0x17d480u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17d484: 0xaca71880
    ctx->pc = 0x17d484u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6272), GPR_U32(ctx, 7));
    // 0x17d488: 0xdfbf0020
    ctx->pc = 0x17d488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d48c: 0xdfb10010
    ctx->pc = 0x17d48cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d490: 0xdfb00000
    ctx->pc = 0x17d490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d494: 0xac660004
    ctx->pc = 0x17d494u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x17d498: 0xac640008
    ctx->pc = 0x17d498u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x17d49c: 0xac68000c
    ctx->pc = 0x17d49cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 8));
    // 0x17d4a0: 0x3e00008
    ctx->pc = 0x17D4A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D4A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D4A8u;
}
