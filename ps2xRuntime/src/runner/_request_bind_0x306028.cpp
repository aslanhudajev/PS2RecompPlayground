#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _request_bind
// Address: 0x306028 - 0x3060d8
void _request_bind_0x306028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x306028u;

    // 0x306028: 0x27bdffc0
    ctx->pc = 0x306028u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30602c: 0xffb10010
    ctx->pc = 0x30602cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x306030: 0xffb00000
    ctx->pc = 0x306030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x306034: 0xa0882d
    ctx->pc = 0x306034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306038: 0x80802d
    ctx->pc = 0x306038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30603c: 0xffb20020
    ctx->pc = 0x30603cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x306040: 0xffbf0030
    ctx->pc = 0x306040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x306044: 0xc0c173e
    ctx->pc = 0x306044u;
    SET_GPR_U32(ctx, 31, 0x30604Cu);
    ctx->pc = 0x306048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x305CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sceRpcGetFPacket_0x305cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30604Cu; }
    }
    if (ctx->pc != 0x30604Cu) { return; }
    ctx->pc = 0x30604Cu;
    // 0x30604c: 0x40902d
    ctx->pc = 0x30604cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306050: 0x8e04001c
    ctx->pc = 0x306050u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x306054: 0x8e030014
    ctx->pc = 0x306054u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x306058: 0x3c028000
    ctx->pc = 0x306058u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x30605c: 0x34420009
    ctx->pc = 0x30605cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 9));
    // 0x306060: 0xae44001c
    ctx->pc = 0x306060u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
    // 0x306064: 0xae430014
    ctx->pc = 0x306064u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x306068: 0x220282d
    ctx->pc = 0x306068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30606c: 0xae420020
    ctx->pc = 0x30606cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x306070: 0xc0c17f6
    ctx->pc = 0x306070u;
    SET_GPR_U32(ctx, 31, 0x306078u);
    ctx->pc = 0x306074u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->pc = 0x305FD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _search_svdata_0x305fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306078u; }
    }
    if (ctx->pc != 0x306078u) { return; }
    ctx->pc = 0x306078u;
    // 0x306078: 0x40182d
    ctx->pc = 0x306078u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30607c: 0x54600005
    ctx->pc = 0x30607Cu;
    {
        const bool branch_taken_0x30607c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x30607c) {
            ctx->pc = 0x306080u;
            WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
            ctx->pc = 0x306094u;
            goto label_306094;
        }
    }
    ctx->pc = 0x306084u;
    // 0x306084: 0xae400024
    ctx->pc = 0x306084u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x306088: 0xae400028
    ctx->pc = 0x306088u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x30608c: 0x10000005
    ctx->pc = 0x30608Cu;
    {
        const bool branch_taken_0x30608c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x306090u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
        if (branch_taken_0x30608c) {
            ctx->pc = 0x3060A4u;
            goto label_3060a4;
        }
    }
    ctx->pc = 0x306094u;
label_306094:
    // 0x306094: 0x8c620008
    ctx->pc = 0x306094u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x306098: 0xae420028
    ctx->pc = 0x306098u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x30609c: 0x8c630014
    ctx->pc = 0x30609cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x3060a0: 0xae43002c
    ctx->pc = 0x3060a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
label_3060a4:
    // 0x3060a4: 0x240282d
    ctx->pc = 0x3060a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3060a8: 0x3c048000
    ctx->pc = 0x3060a8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x3060ac: 0xdfbf0030
    ctx->pc = 0x3060acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3060b0: 0x34840008
    ctx->pc = 0x3060b0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 8));
    // 0x3060b4: 0xdfb20020
    ctx->pc = 0x3060b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3060b8: 0x24060040
    ctx->pc = 0x3060b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    // 0x3060bc: 0xdfb10010
    ctx->pc = 0x3060bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3060c0: 0x382d
    ctx->pc = 0x3060c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3060c4: 0xdfb00000
    ctx->pc = 0x3060c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3060c8: 0x402d
    ctx->pc = 0x3060c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3060cc: 0x482d
    ctx->pc = 0x3060ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3060d0: 0x80c160e
    ctx->pc = 0x3060D0u;
    ctx->pc = 0x3060D4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x305838u;
    isceSifSendCmd_0x305838(rdram, ctx, runtime); return;
    ctx->pc = 0x3060D8u;
}
