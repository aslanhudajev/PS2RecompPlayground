#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: variousProc
// Address: 0x174820 - 0x1748cc
void variousProc_0x174820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("variousProc");


    ctx->pc = 0x174820u;

    // 0x174820: 0x27bdffb0
    ctx->pc = 0x174820u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x174824: 0xffb30030
    ctx->pc = 0x174824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x174828: 0xffb20020
    ctx->pc = 0x174828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17482c: 0xc0982d
    ctx->pc = 0x17482cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174830: 0xffb00000
    ctx->pc = 0x174830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174834: 0xffbf0040
    ctx->pc = 0x174834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x174838: 0x80802d
    ctx->pc = 0x174838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17483c: 0xffb10010
    ctx->pc = 0x17483cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x174840: 0x82020000
    ctx->pc = 0x174840u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x174844: 0x14400006
    ctx->pc = 0x174844u;
    {
        const bool branch_taken_0x174844 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x174848u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174844) {
            ctx->pc = 0x174860u;
            goto label_174860;
        }
    }
    ctx->pc = 0x17484Cu;
    // 0x17484c: 0xc05d2e8
    ctx->pc = 0x17484Cu;
    SET_GPR_U32(ctx, 31, 0x174854u);
    ctx->pc = 0x174BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getDefDev_0x174ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174854u; }
        else if (ctx->pc != 0x174854u) { ctx->pc = 0x174854u; }
    }
    if (ctx->pc != 0x174854u) { return; }
    ctx->pc = 0x174854u;
    // 0x174854: 0x82020000
    ctx->pc = 0x174854u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x174858: 0x10400015
    ctx->pc = 0x174858u;
    {
        const bool branch_taken_0x174858 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17485Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174858) {
            ctx->pc = 0x1748B0u;
            goto label_1748b0;
        }
    }
    ctx->pc = 0x174860u;
label_174860:
    // 0x174860: 0x200202d
    ctx->pc = 0x174860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174864: 0xc05d768
    ctx->pc = 0x174864u;
    SET_GPR_U32(ctx, 31, 0x17486Cu);
    ctx->pc = 0x174868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175DA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        addDevName_0x175da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17486Cu; }
        else if (ctx->pc != 0x17486Cu) { ctx->pc = 0x17486Cu; }
    }
    if (ctx->pc != 0x17486Cu) { return; }
    ctx->pc = 0x17486Cu;
    // 0x17486c: 0xc05d142
    ctx->pc = 0x17486Cu;
    SET_GPR_U32(ctx, 31, 0x174874u);
    ctx->pc = 0x174870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174508u;
    {
        const uint32_t __entryPc = ctx->pc;
        getDevice_0x174508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174874u; }
        else if (ctx->pc != 0x174874u) { ctx->pc = 0x174874u; }
    }
    if (ctx->pc != 0x174874u) { return; }
    ctx->pc = 0x174874u;
    // 0x174874: 0x40882d
    ctx->pc = 0x174874u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174878: 0x1620000d
    ctx->pc = 0x174878u;
    {
        const bool branch_taken_0x174878 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x17487Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174878) {
            ctx->pc = 0x1748B0u;
            goto label_1748b0;
        }
    }
    ctx->pc = 0x174880u;
    // 0x174880: 0xc05d2e8
    ctx->pc = 0x174880u;
    SET_GPR_U32(ctx, 31, 0x174888u);
    ctx->pc = 0x174884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getDefDev_0x174ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174888u; }
        else if (ctx->pc != 0x174888u) { ctx->pc = 0x174888u; }
    }
    if (ctx->pc != 0x174888u) { return; }
    ctx->pc = 0x174888u;
    // 0x174888: 0xc05d142
    ctx->pc = 0x174888u;
    SET_GPR_U32(ctx, 31, 0x174890u);
    ctx->pc = 0x17488Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174508u;
    {
        const uint32_t __entryPc = ctx->pc;
        getDevice_0x174508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174890u; }
        else if (ctx->pc != 0x174890u) { ctx->pc = 0x174890u; }
    }
    if (ctx->pc != 0x174890u) { return; }
    ctx->pc = 0x174890u;
    // 0x174890: 0x40882d
    ctx->pc = 0x174890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174894: 0x16200003
    ctx->pc = 0x174894u;
    {
        const bool branch_taken_0x174894 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x174898u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174894) {
            ctx->pc = 0x1748A4u;
            goto label_1748a4;
        }
    }
    ctx->pc = 0x17489Cu;
    // 0x17489c: 0x10000004
    ctx->pc = 0x17489Cu;
    {
        const bool branch_taken_0x17489c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1748A0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17489c) {
            ctx->pc = 0x1748B0u;
            goto label_1748b0;
        }
    }
    ctx->pc = 0x1748A4u;
label_1748a4:
    // 0x1748a4: 0xc05150e
    ctx->pc = 0x1748A4u;
    SET_GPR_U32(ctx, 31, 0x1748ACu);
    ctx->pc = 0x1748A8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145438u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x145438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1748ACu; }
        else if (ctx->pc != 0x1748ACu) { ctx->pc = 0x1748ACu; }
    }
    if (ctx->pc != 0x1748ACu) { return; }
    ctx->pc = 0x1748ACu;
    // 0x1748ac: 0x220102d
    ctx->pc = 0x1748acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1748b0:
    // 0x1748b0: 0xdfbf0040
    ctx->pc = 0x1748b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1748b4: 0xdfb30030
    ctx->pc = 0x1748b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1748b8: 0xdfb20020
    ctx->pc = 0x1748b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1748bc: 0xdfb10010
    ctx->pc = 0x1748bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1748c0: 0xdfb00000
    ctx->pc = 0x1748c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1748c4: 0x3e00008
    ctx->pc = 0x1748C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1748C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174860u: goto label_174860;
            case 0x1748A4u: goto label_1748a4;
            case 0x1748B0u: goto label_1748b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1748CCu;
}
