#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_EntryData
// Address: 0x1680c0 - 0x168144
void ADXB_EntryData_0x1680c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_EntryData");


    ctx->pc = 0x1680c0u;

    // 0x1680c0: 0x80382d
    ctx->pc = 0x1680c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1680c4: 0x84e200a8
    ctx->pc = 0x1680c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 168)));
    // 0x1680c8: 0x1440000c
    ctx->pc = 0x1680C8u;
    {
        const bool branch_taken_0x1680c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1680CCu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1680c8) {
            ctx->pc = 0x1680FCu;
            goto label_1680fc;
        }
    }
    ctx->pc = 0x1680D0u;
    // 0x1680d0: 0x80e2000f
    ctx->pc = 0x1680d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 15)));
    // 0x1680d4: 0xace80050
    ctx->pc = 0x1680d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 8));
    // 0x1680d8: 0xc2001a
    ctx->pc = 0x1680d8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1680dc: 0x50400001
    ctx->pc = 0x1680DCu;
    {
        const bool branch_taken_0x1680dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1680dc) {
            ctx->pc = 0x1680E0u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1680E4u;
            goto label_1680e4;
        }
    }
    ctx->pc = 0x1680E4u;
label_1680e4:
    // 0x1680e4: 0xace000a4
    ctx->pc = 0x1680e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 164), GPR_U32(ctx, 0));
    // 0x1680e8: 0xace00084
    ctx->pc = 0x1680e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 132), GPR_U32(ctx, 0));
    // 0x1680ec: 0xace000a0
    ctx->pc = 0x1680ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 160), GPR_U32(ctx, 0));
    // 0x1680f0: 0x1812
    ctx->pc = 0x1680f0u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x1680f4: 0x3e00008
    ctx->pc = 0x1680F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1680F8u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 84), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1680E4u: goto label_1680e4;
            case 0x1680FCu: goto label_1680fc;
            case 0x16812Cu: goto label_16812c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1680FCu;
label_1680fc:
    // 0x1680fc: 0x80e4000d
    ctx->pc = 0x1680fcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 13)));
    // 0x168100: 0x2403ffff
    ctx->pc = 0x168100u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x168104: 0x80e5000e
    ctx->pc = 0x168104u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x168108: 0x64182a
    ctx->pc = 0x168108u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x16810c: 0x24820007
    ctx->pc = 0x16810cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 7));
    // 0x168110: 0x83100b
    ctx->pc = 0x168110u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x168114: 0xace80050
    ctx->pc = 0x168114u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 8));
    // 0x168118: 0x210c3
    ctx->pc = 0x168118u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x16811c: 0x451018
    ctx->pc = 0x16811cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x168120: 0x70c2001a
    ctx->pc = 0x168120u;
    { int32_t divisor = GPR_S32(ctx, 2); if (divisor != 0) { ctx->lo1 = (uint32_t)(GPR_S32(ctx, 6) / divisor); ctx->hi1 = (uint32_t)(GPR_S32(ctx, 2) % divisor); } else { ctx->lo1= (GPR_S32(ctx,6) < 0) ? 1 : -1; ctx->hi1=GPR_S32(ctx,2); } }
    // 0x168124: 0x50400001
    ctx->pc = 0x168124u;
    {
        const bool branch_taken_0x168124 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x168124) {
            ctx->pc = 0x168128u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x16812Cu;
            goto label_16812c;
        }
    }
    ctx->pc = 0x16812Cu;
label_16812c:
    // 0x16812c: 0xace000a4
    ctx->pc = 0x16812cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 164), GPR_U32(ctx, 0));
    // 0x168130: 0xace00084
    ctx->pc = 0x168130u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 132), GPR_U32(ctx, 0));
    // 0x168134: 0xace000a0
    ctx->pc = 0x168134u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 160), GPR_U32(ctx, 0));
    // 0x168138: 0x70001812
    ctx->pc = 0x168138u;
    SET_GPR_U32(ctx, 3, ctx->lo1);
    // 0x16813c: 0x3e00008
    ctx->pc = 0x16813Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168140u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 84), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1680E4u: goto label_1680e4;
            case 0x1680FCu: goto label_1680fc;
            case 0x16812Cu: goto label_16812c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x168144u;
}
