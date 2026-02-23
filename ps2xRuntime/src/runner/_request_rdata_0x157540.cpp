#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _request_rdata
// Address: 0x157540 - 0x1575a0
void _request_rdata_0x157540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_request_rdata");


    ctx->pc = 0x157540u;

    // 0x157540: 0x27bdffe0
    ctx->pc = 0x157540u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x157544: 0xffb00000
    ctx->pc = 0x157544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x157548: 0x80802d
    ctx->pc = 0x157548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15754c: 0xffbf0010
    ctx->pc = 0x15754cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x157550: 0xc055d06
    ctx->pc = 0x157550u;
    SET_GPR_U32(ctx, 31, 0x157558u);
    ctx->pc = 0x157554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x157418u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sceRpcGetFPacket_0x157418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157558u; }
        else if (ctx->pc != 0x157558u) { ctx->pc = 0x157558u; }
    }
    if (ctx->pc != 0x157558u) { return; }
    ctx->pc = 0x157558u;
    // 0x157558: 0x8e050014
    ctx->pc = 0x157558u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15755c: 0x3c038000
    ctx->pc = 0x15755cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x157560: 0x8e04001c
    ctx->pc = 0x157560u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x157564: 0x3463000c
    ctx->pc = 0x157564u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 12));
    // 0x157568: 0xac450014
    ctx->pc = 0x157568u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x15756c: 0x24060040
    ctx->pc = 0x15756cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    // 0x157570: 0xac44001c
    ctx->pc = 0x157570u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x157574: 0x40282d
    ctx->pc = 0x157574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157578: 0xac430020
    ctx->pc = 0x157578u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x15757c: 0x3c048000
    ctx->pc = 0x15757cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x157580: 0xdfbf0010
    ctx->pc = 0x157580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157584: 0x34840008
    ctx->pc = 0x157584u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 8));
    // 0x157588: 0x8e090028
    ctx->pc = 0x157588u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x15758c: 0x8e070020
    ctx->pc = 0x15758cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x157590: 0x8e080024
    ctx->pc = 0x157590u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x157594: 0xdfb00000
    ctx->pc = 0x157594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157598: 0x8055bdc
    ctx->pc = 0x157598u;
    ctx->pc = 0x15759Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x156F70u;
    isceSifSendCmd_0x156f70(rdram, ctx, runtime); return;
    ctx->pc = 0x1575A0u;
}
