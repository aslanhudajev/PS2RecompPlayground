#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_players
// Address: 0x22e7e8 - 0x22e860
void init_players_0x22e7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22e7e8u;

    // 0x22e7e8: 0x27bdffb0
    ctx->pc = 0x22e7e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22e7ec: 0xffbf0040
    ctx->pc = 0x22e7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22e7f0: 0xffb30030
    ctx->pc = 0x22e7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22e7f4: 0xffb20020
    ctx->pc = 0x22e7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22e7f8: 0xffb10010
    ctx->pc = 0x22e7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22e7fc: 0xffb00000
    ctx->pc = 0x22e7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22e800: 0x882d
    ctx->pc = 0x22e800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e804: 0x24132b00
    ctx->pc = 0x22e804u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x22e808: 0x3c020032
    ctx->pc = 0x22e808u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22e80c: 0x24521bc0
    ctx->pc = 0x22e80cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x22e810: 0x2331018
    ctx->pc = 0x22e810u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22e814: 0x0
    ctx->pc = 0x22e814u;
    // NOP
label_22e818:
    // 0x22e818: 0x528021
    ctx->pc = 0x22e818u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x22e81c: 0x200202d
    ctx->pc = 0x22e81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e820: 0x282d
    ctx->pc = 0x22e820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e824: 0xc0becc6
    ctx->pc = 0x22E824u;
    SET_GPR_U32(ctx, 31, 0x22E82Cu);
    ctx->pc = 0x22E828u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 11008));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E82Cu; }
    }
    if (ctx->pc != 0x22E82Cu) { return; }
    ctx->pc = 0x22E82Cu;
    // 0x22e82c: 0xae110004
    ctx->pc = 0x22e82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x22e830: 0xae110000
    ctx->pc = 0x22e830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x22e834: 0x26310001
    ctx->pc = 0x22e834u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x22e838: 0x2a220004
    ctx->pc = 0x22e838u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x22e83c: 0x5440fff6
    ctx->pc = 0x22E83Cu;
    {
        const bool branch_taken_0x22e83c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22e83c) {
            ctx->pc = 0x22E840u;
            { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
            ctx->pc = 0x22E818u;
            goto label_22e818;
        }
    }
    ctx->pc = 0x22E844u;
    // 0x22e844: 0xdfbf0040
    ctx->pc = 0x22e844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22e848: 0xdfb30030
    ctx->pc = 0x22e848u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e84c: 0xdfb20020
    ctx->pc = 0x22e84cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e850: 0xdfb10010
    ctx->pc = 0x22e850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e854: 0xdfb00000
    ctx->pc = 0x22e854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e858: 0x3e00008
    ctx->pc = 0x22E858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E85Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22E818u: goto label_22e818;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22E860u;
}
