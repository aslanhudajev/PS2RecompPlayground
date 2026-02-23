#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: topThread
// Address: 0x155668 - 0x155740
void topThread_0x155668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("topThread");


    ctx->pc = 0x155668u;

    // 0x155668: 0x27bdff80
    ctx->pc = 0x155668u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x15566c: 0xffb10010
    ctx->pc = 0x15566cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x155670: 0x80882d
    ctx->pc = 0x155670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155674: 0xffb60060
    ctx->pc = 0x155674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x155678: 0xffb50050
    ctx->pc = 0x155678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x15567c: 0x3c16002d
    ctx->pc = 0x15567cu;
    SET_GPR_U32(ctx, 22, ((uint32_t)45 << 16));
    // 0x155680: 0xffb40040
    ctx->pc = 0x155680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x155684: 0x3c15002c
    ctx->pc = 0x155684u;
    SET_GPR_U32(ctx, 21, ((uint32_t)44 << 16));
    // 0x155688: 0xffb30030
    ctx->pc = 0x155688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x15568c: 0x24140001
    ctx->pc = 0x15568cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x155690: 0xffb20020
    ctx->pc = 0x155690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x155694: 0x24130002
    ctx->pc = 0x155694u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
    // 0x155698: 0xffb00000
    ctx->pc = 0x155698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15569c: 0x26320008
    ctx->pc = 0x15569cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
    // 0x1556a0: 0xffbf0070
    ctx->pc = 0x1556a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1556a4: 0x26300009
    ctx->pc = 0x1556a4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 9));
label_1556a8:
    // 0x1556a8: 0xc055248
    ctx->pc = 0x1556A8u;
    SET_GPR_U32(ctx, 31, 0x1556B0u);
    ctx->pc = 0x1556ACu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 22), 28640)));
    ctx->pc = 0x154920u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x154920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1556B0u; }
        else if (ctx->pc != 0x1556B0u) { ctx->pc = 0x1556B0u; }
    }
    if (ctx->pc != 0x1556B0u) { return; }
    ctx->pc = 0x1556B0u;
    // 0x1556b0: 0x8e230000
    ctx->pc = 0x1556b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1556b4: 0x306301ff
    ctx->pc = 0x1556b4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 511));
    // 0x1556b8: 0x24640001
    ctx->pc = 0x1556b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1556bc: 0x31840
    ctx->pc = 0x1556bcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1556c0: 0xae240000
    ctx->pc = 0x1556c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x1556c4: 0x2431021
    ctx->pc = 0x1556c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1556c8: 0x2033021
    ctx->pc = 0x1556c8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1556cc: 0x90420000
    ctx->pc = 0x1556ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1556d0: 0x1054000f
    ctx->pc = 0x1556D0u;
    {
        const bool branch_taken_0x1556d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 20));
        ctx->pc = 0x1556D4u;
        SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 2), 2));
        if (branch_taken_0x1556d0) {
            ctx->pc = 0x155710u;
            goto label_155710;
        }
    }
    ctx->pc = 0x1556D8u;
    // 0x1556d8: 0x10a00005
    ctx->pc = 0x1556D8u;
    {
        const bool branch_taken_0x1556d8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x1556DCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 4294936488));
        if (branch_taken_0x1556d8) {
            ctx->pc = 0x1556F0u;
            goto label_1556f0;
        }
    }
    ctx->pc = 0x1556E0u;
    // 0x1556e0: 0x10400007
    ctx->pc = 0x1556E0u;
    {
        const bool branch_taken_0x1556e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1556E4u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1556e0) {
            ctx->pc = 0x155700u;
            goto label_155700;
        }
    }
    ctx->pc = 0x1556E8u;
    // 0x1556e8: 0x10000011
    ctx->pc = 0x1556E8u;
    {
        const bool branch_taken_0x1556e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1556e8) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x1556F0u;
label_1556f0:
    // 0x1556f0: 0x1053000b
    ctx->pc = 0x1556F0u;
    {
        const bool branch_taken_0x1556f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 19));
        ctx->pc = 0x1556F4u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        if (branch_taken_0x1556f0) {
            ctx->pc = 0x155720u;
            goto label_155720;
        }
    }
    ctx->pc = 0x1556F8u;
    // 0x1556f8: 0x1000000d
    ctx->pc = 0x1556F8u;
    {
        const bool branch_taken_0x1556f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1556f8) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x155700u;
label_155700:
    // 0x155700: 0xc055204
    ctx->pc = 0x155700u;
    SET_GPR_U32(ctx, 31, 0x155708u);
    ctx->pc = 0x155704u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x154810u;
    {
        const uint32_t __entryPc = ctx->pc;
        WakeupThread_0x154810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155708u; }
        else if (ctx->pc != 0x155708u) { ctx->pc = 0x155708u; }
    }
    if (ctx->pc != 0x155708u) { return; }
    ctx->pc = 0x155708u;
    // 0x155708: 0x1000ffe7
    ctx->pc = 0x155708u;
    {
        const bool branch_taken_0x155708 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x155708) {
            ctx->pc = 0x1556A8u;
            goto label_1556a8;
        }
    }
    ctx->pc = 0x155710u;
label_155710:
    // 0x155710: 0xc0551e4
    ctx->pc = 0x155710u;
    SET_GPR_U32(ctx, 31, 0x155718u);
    ctx->pc = 0x155714u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->pc = 0x154790u;
    {
        const uint32_t __entryPc = ctx->pc;
        RotateThreadReadyQueue_0x154790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155718u; }
        else if (ctx->pc != 0x155718u) { ctx->pc = 0x155718u; }
    }
    if (ctx->pc != 0x155718u) { return; }
    ctx->pc = 0x155718u;
    // 0x155718: 0x1000ffe3
    ctx->pc = 0x155718u;
    {
        const bool branch_taken_0x155718 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x155718) {
            ctx->pc = 0x1556A8u;
            goto label_1556a8;
        }
    }
    ctx->pc = 0x155720u;
label_155720:
    // 0x155720: 0xc055214
    ctx->pc = 0x155720u;
    SET_GPR_U32(ctx, 31, 0x155728u);
    ctx->pc = 0x155724u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x154850u;
    {
        const uint32_t __entryPc = ctx->pc;
        SuspendThread_0x154850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155728u; }
        else if (ctx->pc != 0x155728u) { ctx->pc = 0x155728u; }
    }
    if (ctx->pc != 0x155728u) { return; }
    ctx->pc = 0x155728u;
    // 0x155728: 0x1000ffdf
    ctx->pc = 0x155728u;
    {
        const bool branch_taken_0x155728 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x155728) {
            ctx->pc = 0x1556A8u;
            goto label_1556a8;
        }
    }
    ctx->pc = 0x155730u;
label_155730:
    // 0x155730: 0xc055a6a
    ctx->pc = 0x155730u;
    SET_GPR_U32(ctx, 31, 0x155738u);
    ctx->pc = 0x1569A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        kprintf_0x1569a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155738u; }
        else if (ctx->pc != 0x155738u) { ctx->pc = 0x155738u; }
    }
    if (ctx->pc != 0x155738u) { return; }
    ctx->pc = 0x155738u;
    // 0x155738: 0x1000ffdb
    ctx->pc = 0x155738u;
    {
        const bool branch_taken_0x155738 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x155738) {
            ctx->pc = 0x1556A8u;
            goto label_1556a8;
        }
    }
    ctx->pc = 0x155740u;
}
