#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _request_bind
// Address: 0x157748 - 0x1577f8
void _request_bind_0x157748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_request_bind");


    ctx->pc = 0x157748u;

    // 0x157748: 0x27bdffc0
    ctx->pc = 0x157748u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15774c: 0xffb10010
    ctx->pc = 0x15774cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x157750: 0xffb00000
    ctx->pc = 0x157750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x157754: 0xa0882d
    ctx->pc = 0x157754u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157758: 0x80802d
    ctx->pc = 0x157758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15775c: 0xffb20020
    ctx->pc = 0x15775cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x157760: 0xffbf0030
    ctx->pc = 0x157760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x157764: 0xc055d06
    ctx->pc = 0x157764u;
    SET_GPR_U32(ctx, 31, 0x15776Cu);
    ctx->pc = 0x157768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x157418u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sceRpcGetFPacket_0x157418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15776Cu; }
        else if (ctx->pc != 0x15776Cu) { ctx->pc = 0x15776Cu; }
    }
    if (ctx->pc != 0x15776Cu) { return; }
    ctx->pc = 0x15776Cu;
    // 0x15776c: 0x40902d
    ctx->pc = 0x15776cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157770: 0x8e04001c
    ctx->pc = 0x157770u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x157774: 0x8e030014
    ctx->pc = 0x157774u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x157778: 0x3c028000
    ctx->pc = 0x157778u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x15777c: 0x34420009
    ctx->pc = 0x15777cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 9));
    // 0x157780: 0xae44001c
    ctx->pc = 0x157780u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
    // 0x157784: 0xae430014
    ctx->pc = 0x157784u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x157788: 0x220282d
    ctx->pc = 0x157788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15778c: 0xae420020
    ctx->pc = 0x15778cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x157790: 0xc055dbe
    ctx->pc = 0x157790u;
    SET_GPR_U32(ctx, 31, 0x157798u);
    ctx->pc = 0x157794u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->pc = 0x1576F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _search_svdata_0x1576f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157798u; }
        else if (ctx->pc != 0x157798u) { ctx->pc = 0x157798u; }
    }
    if (ctx->pc != 0x157798u) { return; }
    ctx->pc = 0x157798u;
    // 0x157798: 0x40182d
    ctx->pc = 0x157798u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15779c: 0x54600005
    ctx->pc = 0x15779Cu;
    {
        const bool branch_taken_0x15779c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x15779c) {
            ctx->pc = 0x1577A0u;
            WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
            ctx->pc = 0x1577B4u;
            goto label_1577b4;
        }
    }
    ctx->pc = 0x1577A4u;
    // 0x1577a4: 0xae400024
    ctx->pc = 0x1577a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x1577a8: 0xae400028
    ctx->pc = 0x1577a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x1577ac: 0x10000005
    ctx->pc = 0x1577ACu;
    {
        const bool branch_taken_0x1577ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1577B0u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
        if (branch_taken_0x1577ac) {
            ctx->pc = 0x1577C4u;
            goto label_1577c4;
        }
    }
    ctx->pc = 0x1577B4u;
label_1577b4:
    // 0x1577b4: 0x8c620008
    ctx->pc = 0x1577b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1577b8: 0xae420028
    ctx->pc = 0x1577b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x1577bc: 0x8c630014
    ctx->pc = 0x1577bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1577c0: 0xae43002c
    ctx->pc = 0x1577c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
label_1577c4:
    // 0x1577c4: 0x240282d
    ctx->pc = 0x1577c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1577c8: 0x3c048000
    ctx->pc = 0x1577c8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x1577cc: 0xdfbf0030
    ctx->pc = 0x1577ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1577d0: 0x34840008
    ctx->pc = 0x1577d0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 8));
    // 0x1577d4: 0xdfb20020
    ctx->pc = 0x1577d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1577d8: 0x24060040
    ctx->pc = 0x1577d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    // 0x1577dc: 0xdfb10010
    ctx->pc = 0x1577dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1577e0: 0x382d
    ctx->pc = 0x1577e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1577e4: 0xdfb00000
    ctx->pc = 0x1577e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1577e8: 0x402d
    ctx->pc = 0x1577e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1577ec: 0x482d
    ctx->pc = 0x1577ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1577f0: 0x8055bdc
    ctx->pc = 0x1577F0u;
    ctx->pc = 0x1577F4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x156F70u;
    isceSifSendCmd_0x156f70(rdram, ctx, runtime); return;
    ctx->pc = 0x1577F8u;
}
