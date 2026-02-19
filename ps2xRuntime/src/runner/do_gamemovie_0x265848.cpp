#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_gamemovie
// Address: 0x265848 - 0x2658f4
void do_gamemovie_0x265848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x265848u;

    // 0x265848: 0x27bdffe0
    ctx->pc = 0x265848u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26584c: 0xffbf0010
    ctx->pc = 0x26584cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x265850: 0xffb00000
    ctx->pc = 0x265850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x265854: 0x3c02003c
    ctx->pc = 0x265854u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x265858: 0x8c4237c8
    ctx->pc = 0x265858u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14280)));
    // 0x26585c: 0x1040001e
    ctx->pc = 0x26585Cu;
    {
        const bool branch_taken_0x26585c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x265860u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26585c) {
            ctx->pc = 0x2658D8u;
            goto label_2658d8;
        }
    }
    ctx->pc = 0x265864u;
    // 0x265864: 0xc081d04
    ctx->pc = 0x265864u;
    SET_GPR_U32(ctx, 31, 0x26586Cu);
    ctx->pc = 0x265868u;
    SET_GPR_U32(ctx, 4, ((uint32_t)512 << 16));
    ctx->pc = 0x207410u;
    {
        const uint32_t __entryPc = ctx->pc;
        active_player_edge_0x207410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26586Cu; }
    }
    if (ctx->pc != 0x26586Cu) { return; }
    ctx->pc = 0x26586Cu;
    // 0x26586c: 0x10400006
    ctx->pc = 0x26586Cu;
    {
        const bool branch_taken_0x26586c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x265870u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26586c) {
            ctx->pc = 0x265888u;
            goto label_265888;
        }
    }
    ctx->pc = 0x265874u;
    // 0x265874: 0x8c4337cc
    ctx->pc = 0x265874u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 14284)));
    // 0x265878: 0x24020001
    ctx->pc = 0x265878u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26587c: 0x14620003
    ctx->pc = 0x26587Cu;
    {
        const bool branch_taken_0x26587c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x265880u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26587c) {
            ctx->pc = 0x26588Cu;
            goto label_26588c;
        }
    }
    ctx->pc = 0x265884u;
    // 0x265884: 0xac4337d0
    ctx->pc = 0x265884u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14288), GPR_U32(ctx, 3));
label_265888:
    // 0x265888: 0x3c02003c
    ctx->pc = 0x265888u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_26588c:
    // 0x26588c: 0x8c4237d0
    ctx->pc = 0x26588cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14288)));
    // 0x265890: 0x10400007
    ctx->pc = 0x265890u;
    {
        const bool branch_taken_0x265890 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x265894u;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        if (branch_taken_0x265890) {
            ctx->pc = 0x2658B0u;
            goto label_2658b0;
        }
    }
    ctx->pc = 0x265898u;
    // 0x265898: 0xc0b731e
    ctx->pc = 0x265898u;
    SET_GPR_U32(ctx, 31, 0x2658A0u);
    ctx->pc = 0x2DCC78u;
    {
        const uint32_t __entryPc = ctx->pc;
        KillMovie_0x2dcc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2658A0u; }
    }
    if (ctx->pc != 0x2658A0u) { return; }
    ctx->pc = 0x2658A0u;
    // 0x2658a0: 0x10400003
    ctx->pc = 0x2658A0u;
    {
        const bool branch_taken_0x2658a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2658A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2658a0) {
            ctx->pc = 0x2658B0u;
            goto label_2658b0;
        }
    }
    ctx->pc = 0x2658A8u;
    // 0x2658a8: 0xac4037c8
    ctx->pc = 0x2658a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14280), GPR_U32(ctx, 0));
    // 0x2658ac: 0x3c10003c
    ctx->pc = 0x2658acu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_2658b0:
    // 0x2658b0: 0x8e0237c8
    ctx->pc = 0x2658b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 14280)));
    // 0x2658b4: 0x10400005
    ctx->pc = 0x2658B4u;
    {
        const bool branch_taken_0x2658b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2658b4) {
            ctx->pc = 0x2658CCu;
            goto label_2658cc;
        }
    }
    ctx->pc = 0x2658BCu;
    // 0x2658bc: 0xc0b72fa
    ctx->pc = 0x2658BCu;
    SET_GPR_U32(ctx, 31, 0x2658C4u);
    ctx->pc = 0x2DCBE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ServeMovie_0x2dcbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2658C4u; }
    }
    if (ctx->pc != 0x2658C4u) { return; }
    ctx->pc = 0x2658C4u;
    // 0x2658c4: 0x14400006
    ctx->pc = 0x2658C4u;
    {
        const bool branch_taken_0x2658c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2658C8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 14280), GPR_U32(ctx, 2));
        if (branch_taken_0x2658c4) {
            ctx->pc = 0x2658E0u;
            goto label_2658e0;
        }
    }
    ctx->pc = 0x2658CCu;
label_2658cc:
    // 0x2658cc: 0xc0b731e
    ctx->pc = 0x2658CCu;
    SET_GPR_U32(ctx, 31, 0x2658D4u);
    ctx->pc = 0x2DCC78u;
    {
        const uint32_t __entryPc = ctx->pc;
        KillMovie_0x2dcc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2658D4u; }
    }
    if (ctx->pc != 0x2658D4u) { return; }
    ctx->pc = 0x2658D4u;
    // 0x2658d4: 0x3c02003c
    ctx->pc = 0x2658d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2658d8:
    // 0x2658d8: 0x10000002
    ctx->pc = 0x2658D8u;
    {
        const bool branch_taken_0x2658d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2658DCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14284)));
        if (branch_taken_0x2658d8) {
            ctx->pc = 0x2658E4u;
            goto label_2658e4;
        }
    }
    ctx->pc = 0x2658E0u;
label_2658e0:
    // 0x2658e0: 0x102d
    ctx->pc = 0x2658e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2658e4:
    // 0x2658e4: 0xdfbf0010
    ctx->pc = 0x2658e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2658e8: 0xdfb00000
    ctx->pc = 0x2658e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2658ec: 0x3e00008
    ctx->pc = 0x2658ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2658F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x265888u: goto label_265888;
            case 0x26588Cu: goto label_26588c;
            case 0x2658B0u: goto label_2658b0;
            case 0x2658CCu: goto label_2658cc;
            case 0x2658D8u: goto label_2658d8;
            case 0x2658E0u: goto label_2658e0;
            case 0x2658E4u: goto label_2658e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2658F4u;
}
