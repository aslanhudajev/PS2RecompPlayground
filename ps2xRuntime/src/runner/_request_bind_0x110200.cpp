#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _request_bind
// Address: 0x110200 - 0x1102b0
void _request_bind_0x110200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x110200u;

    // 0x110200: 0x27bdffc0
    ctx->pc = 0x110200u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x110204: 0xffb10010
    ctx->pc = 0x110204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x110208: 0xffb00000
    ctx->pc = 0x110208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11020c: 0xa0882d
    ctx->pc = 0x11020cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110210: 0x80802d
    ctx->pc = 0x110210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110214: 0xffb20020
    ctx->pc = 0x110214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x110218: 0xffbf0030
    ctx->pc = 0x110218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11021c: 0xc043fb4
    ctx->pc = 0x11021Cu;
    SET_GPR_U32(ctx, 31, 0x110224u);
    ctx->pc = 0x110220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10FED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sceRpcGetFPacket_0x10fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110224u; }
    }
    if (ctx->pc != 0x110224u) { return; }
    ctx->pc = 0x110224u;
    // 0x110224: 0x40902d
    ctx->pc = 0x110224u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110228: 0x8e04001c
    ctx->pc = 0x110228u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11022c: 0x8e030014
    ctx->pc = 0x11022cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x110230: 0x3c028000
    ctx->pc = 0x110230u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x110234: 0x34420009
    ctx->pc = 0x110234u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 9));
    // 0x110238: 0xae44001c
    ctx->pc = 0x110238u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
    // 0x11023c: 0xae430014
    ctx->pc = 0x11023cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x110240: 0x220282d
    ctx->pc = 0x110240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110244: 0xae420020
    ctx->pc = 0x110244u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x110248: 0xc04406c
    ctx->pc = 0x110248u;
    SET_GPR_U32(ctx, 31, 0x110250u);
    ctx->pc = 0x11024Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->pc = 0x1101B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _search_svdata_0x1101b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110250u; }
    }
    if (ctx->pc != 0x110250u) { return; }
    ctx->pc = 0x110250u;
    // 0x110250: 0x40182d
    ctx->pc = 0x110250u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110254: 0x54600005
    ctx->pc = 0x110254u;
    {
        const bool branch_taken_0x110254 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x110254) {
            ctx->pc = 0x110258u;
            WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
            ctx->pc = 0x11026Cu;
            goto label_11026c;
        }
    }
    ctx->pc = 0x11025Cu;
    // 0x11025c: 0xae400024
    ctx->pc = 0x11025cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x110260: 0xae400028
    ctx->pc = 0x110260u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x110264: 0x10000005
    ctx->pc = 0x110264u;
    {
        const bool branch_taken_0x110264 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x110268u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
        if (branch_taken_0x110264) {
            ctx->pc = 0x11027Cu;
            goto label_11027c;
        }
    }
    ctx->pc = 0x11026Cu;
label_11026c:
    // 0x11026c: 0x8c620008
    ctx->pc = 0x11026cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x110270: 0xae420028
    ctx->pc = 0x110270u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x110274: 0x8c630014
    ctx->pc = 0x110274u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x110278: 0xae43002c
    ctx->pc = 0x110278u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
label_11027c:
    // 0x11027c: 0x240282d
    ctx->pc = 0x11027cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110280: 0x3c048000
    ctx->pc = 0x110280u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x110284: 0xdfbf0030
    ctx->pc = 0x110284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x110288: 0x34840008
    ctx->pc = 0x110288u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 8));
    // 0x11028c: 0xdfb20020
    ctx->pc = 0x11028cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110290: 0x24060040
    ctx->pc = 0x110290u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    // 0x110294: 0xdfb10010
    ctx->pc = 0x110294u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110298: 0x382d
    ctx->pc = 0x110298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11029c: 0xdfb00000
    ctx->pc = 0x11029cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1102a0: 0x402d
    ctx->pc = 0x1102a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102a4: 0x482d
    ctx->pc = 0x1102a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102a8: 0x80456c0
    ctx->pc = 0x1102A8u;
    ctx->pc = 0x1102ACu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x115B00u;
    isceSifSendCmd_0x115b00(rdram, ctx, runtime); return;
    ctx->pc = 0x1102B0u;
}
