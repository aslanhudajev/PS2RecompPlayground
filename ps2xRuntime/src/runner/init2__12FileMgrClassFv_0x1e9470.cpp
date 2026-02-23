#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"
#include <iostream>

// Loop debug: log key points, cap to detect where we hang
#define LOG_INIT2(id, extra) do { \
    static int _n = 0; \
    if (++_n <= 30 || (_n % 10000) == 0) std::cerr << "[init2] " id << extra << " (n=" << _n << ")\n"; \
} while(0)

// Function: init2__12FileMgrClassFv
// Address: 0x1e9470 - 0x1e9584
void init2__12FileMgrClassFv_0x1e9470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init2__12FileMgrClassFv");

    LOG_INIT2("entry", "");

    ctx->pc = 0x1e9470u;

    // 0x1e9470: 0x27bdfff0
    ctx->pc = 0x1e9470u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e9474: 0x3c020050
    ctx->pc = 0x1e9474u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e9478: 0x7fbf0000
    ctx->pc = 0x1e9478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1e947c: 0x70002628
    ctx->pc = 0x1e947cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e9480: 0x24430c60
    ctx->pc = 0x1e9480u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 3168));
label_1e9484:
    LOG_INIT2("loop_1e9484 r4=", GPR_S32(ctx, 4));
    // 0x1e9484: 0xac600000
    ctx->pc = 0x1e9484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1e9488: 0xac600004
    ctx->pc = 0x1e9488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1e948c: 0xac600008
    ctx->pc = 0x1e948cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1e9490: 0xac60000c
    ctx->pc = 0x1e9490u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1e9494: 0xac600010
    ctx->pc = 0x1e9494u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1e9498: 0xac600014
    ctx->pc = 0x1e9498u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x1e949c: 0xac600018
    ctx->pc = 0x1e949cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x1e94a0: 0x24840008
    ctx->pc = 0x1e94a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e94a4: 0xac60001c
    ctx->pc = 0x1e94a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x1e94a8: 0x28820011
    ctx->pc = 0x1e94a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 17));
    // 0x1e94ac: 0x1440fff5
    ctx->pc = 0x1E94ACu;
    {
        const bool branch_taken_0x1e94ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E94B0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
        if (branch_taken_0x1e94ac) {
            ctx->pc = 0x1E9484u;
            goto label_1e9484;
        }
    }
    ctx->pc = 0x1E94B4u;
    // 0x1e94b4: 0x28810019
    ctx->pc = 0x1e94b4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 25));
    // 0x1e94b8: 0x1020000b
    ctx->pc = 0x1E94B8u;
    {
        const bool branch_taken_0x1e94b8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E94BCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x1e94b8) {
            ctx->pc = 0x1E94E8u;
            goto label_1e94e8;
        }
    }
    ctx->pc = 0x1E94C0u;
    // 0x1e94c0: 0x41880
    ctx->pc = 0x1e94c0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e94c4: 0x24420c60
    ctx->pc = 0x1e94c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3168));
    // 0x1e94c8: 0x431821
    ctx->pc = 0x1e94c8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e94cc:
    LOG_INIT2("loop_1e94cc r4=", GPR_S32(ctx, 4));
    // 0x1e94cc: 0x24840001
    ctx->pc = 0x1e94ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e94d0: 0xac600000
    ctx->pc = 0x1e94d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1e94d4: 0x28820019
    ctx->pc = 0x1e94d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 25));
    // 0x1e94d8: 0x24630004
    ctx->pc = 0x1e94d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x1e94dc: 0x0
    ctx->pc = 0x1e94dcu;
    // NOP
    // 0x1e94e0: 0x1440fffa
    ctx->pc = 0x1E94E0u;
    {
        const bool branch_taken_0x1e94e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e94e0) {
            ctx->pc = 0x1E94CCu;
            goto label_1e94cc;
        }
    }
    ctx->pc = 0x1E94E8u;
label_1e94e8:
    LOG_INIT2("before ADXT_Init", "");
    // 0x1e94e8: 0xc05b128
    ctx->pc = 0x1E94E8u;
    SET_GPR_U32(ctx, 31, 0x1E94F0u);
    ctx->pc = 0x16C4A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_Init_0x16c4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E94F0u; }
        else if (ctx->pc != 0x1E94F0u) { ctx->pc = 0x1E94F0u; }
    }
    if (ctx->pc != 0x1E94F0u) { return; }
    LOG_INIT2("after ADXT_Init", "");
    ctx->pc = 0x1E94F0u;
    // 0x1e94f0: 0x3c02001f
    ctx->pc = 0x1e94f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)31 << 16));
    // 0x1e94f4: 0x2444ed10
    ctx->pc = 0x1e94f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294962448));
    // 0x1e94f8: 0xc05ca20
    ctx->pc = 0x1E94F8u;
    SET_GPR_U32(ctx, 31, 0x1E9500u);
    ctx->pc = 0x1E94FCu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x172880u;
    {
        LOG_INIT2("before ADXT_EntryErrFunc", "");
        const uint32_t __entryPc = ctx->pc;
        ADXT_EntryErrFunc_0x172880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9500u; }
        else if (ctx->pc != 0x1E9500u) { ctx->pc = 0x1E9500u; }
    }
    if (ctx->pc != 0x1E9500u) { return; }
    LOG_INIT2("after ADXT_EntryErrFunc", "");
    ctx->pc = 0x1E9500u;
    // 0x1e9500: 0x3c010050
    ctx->pc = 0x1e9500u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e9504: 0xac200c90
    ctx->pc = 0x1e9504u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3216), GPR_U32(ctx, 0));
    // 0x1e9508: 0x3c010050
    ctx->pc = 0x1e9508u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e950c: 0xac200c94
    ctx->pc = 0x1e950cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3220), GPR_U32(ctx, 0));
    // 0x1e9510: 0x3c010050
    ctx->pc = 0x1e9510u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e9514: 0xac200c98
    ctx->pc = 0x1e9514u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3224), GPR_U32(ctx, 0));
    // 0x1e9518: 0x3c010050
    ctx->pc = 0x1e9518u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e951c: 0xac200c9c
    ctx->pc = 0x1e951cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3228), GPR_U32(ctx, 0));
    // 0x1e9520: 0x3c010050
    ctx->pc = 0x1e9520u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e9524: 0xac200ca0
    ctx->pc = 0x1e9524u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3232), GPR_U32(ctx, 0));
    // 0x1e9528: 0x3c010050
    ctx->pc = 0x1e9528u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e952c: 0xac200ca4
    ctx->pc = 0x1e952cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3236), GPR_U32(ctx, 0));
    // 0x1e9530: 0x3c020047
    ctx->pc = 0x1e9530u;
    SET_GPR_U32(ctx, 2, ((uint32_t)71 << 16));
    // 0x1e9534: 0x3c010050
    ctx->pc = 0x1e9534u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e9538: 0x24458540
    ctx->pc = 0x1e9538u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294935872));
    // 0x1e953c: 0xac200ca8
    ctx->pc = 0x1e953cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3240), GPR_U32(ctx, 0));
    // 0x1e9540: 0x3c020002
    ctx->pc = 0x1e9540u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x1e9544: 0x3c010050
    ctx->pc = 0x1e9544u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e9548: 0x24040002
    ctx->pc = 0x1e9548u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e954c: 0x344631e4
    ctx->pc = 0x1e954cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 12772));
    // 0x1e9550: 0xc05c534
    ctx->pc = 0x1E9550u;
    SET_GPR_U32(ctx, 31, 0x1E9558u);
    ctx->pc = 0x1E9554u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3244), GPR_U32(ctx, 0));
    ctx->pc = 0x1714D0u;
    {
        LOG_INIT2("before ADXT_Create#1", "");
        const uint32_t __entryPc = ctx->pc;
        ADXT_Create_0x1714d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9558u; }
        else if (ctx->pc != 0x1E9558u) { ctx->pc = 0x1E9558u; }
    }
    if (ctx->pc != 0x1E9558u) { return; }
    LOG_INIT2("after ADXT_Create#1", "");
    ctx->pc = 0x1E9558u;
    // 0x1e9558: 0xaf828d00
    ctx->pc = 0x1e9558u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937856), GPR_U32(ctx, 2));
    // 0x1e955c: 0x3c020049
    ctx->pc = 0x1e955cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)73 << 16));
    // 0x1e9560: 0x2445b740
    ctx->pc = 0x1e9560u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294948672));
    // 0x1e9564: 0x3c020001
    ctx->pc = 0x1e9564u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x1e9568: 0x24040001
    ctx->pc = 0x1e9568u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e956c: 0xc05c534
    ctx->pc = 0x1E956Cu;
    SET_GPR_U32(ctx, 31, 0x1E9574u);
    ctx->pc = 0x1E9570u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 6436));
    ctx->pc = 0x1714D0u;
    {
        LOG_INIT2("before ADXT_Create#2", "");
        const uint32_t __entryPc = ctx->pc;
        ADXT_Create_0x1714d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9574u; }
        else if (ctx->pc != 0x1E9574u) { ctx->pc = 0x1E9574u; }
    }
    if (ctx->pc != 0x1E9574u) { return; }
    LOG_INIT2("after ADXT_Create#2", "");
    ctx->pc = 0x1E9574u;
    // 0x1e9574: 0xaf828d04
    ctx->pc = 0x1e9574u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937860), GPR_U32(ctx, 2));
    // 0x1e9578: 0x7bbf0000
    ctx->pc = 0x1e9578u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e957c: 0x3e00008
    ctx->pc = 0x1E957Cu;
    ctx->pc = 0x1E9580u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    LOG_INIT2("epilogue return", "");
    // Workaround: always return to caller (0x1E25AC). Restored $ra is unreliable (128-bit save/
    // restore bug) and wrong values cause loops. init2 is only called from PowerOnInit.
    ctx->pc = 0x1E25ACu;
    return;
    ctx->pc = 0x1E9584u;
}
