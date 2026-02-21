#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: voBufGetData
// Address: 0x2de908 - 0x2de94c
void voBufGetData_0x2de908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2de908u;

    // 0x2de908: 0x27bdffe0
    ctx->pc = 0x2de908u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2de90c: 0xffbf0010
    ctx->pc = 0x2de90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2de910: 0xffb00000
    ctx->pc = 0x2de910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2de914: 0xc0b7a1c
    ctx->pc = 0x2DE914u;
    SET_GPR_U32(ctx, 31, 0x2DE91Cu);
    ctx->pc = 0x2DE918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DE870u;
    {
        const uint32_t __entryPc = ctx->pc;
        voBufIsFull_0x2de870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE91Cu; }
    }
    if (ctx->pc != 0x2DE91Cu) { return; }
    ctx->pc = 0x2DE91Cu;
    // 0x2de91c: 0x54400007
    ctx->pc = 0x2DE91Cu;
    {
        const bool branch_taken_0x2de91c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2de91c) {
            ctx->pc = 0x2DE920u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2DE93Cu;
            goto label_2de93c;
        }
    }
    ctx->pc = 0x2DE924u;
    // 0x2de924: 0x8e020008
    ctx->pc = 0x2de924u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2de928: 0x3c030012
    ctx->pc = 0x2de928u;
    SET_GPR_U32(ctx, 3, ((uint32_t)18 << 16));
    // 0x2de92c: 0x3463c000
    ctx->pc = 0x2de92cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 49152));
    // 0x2de930: 0x431018
    ctx->pc = 0x2de930u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2de934: 0x8e030000
    ctx->pc = 0x2de934u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2de938: 0x431021
    ctx->pc = 0x2de938u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2de93c:
    // 0x2de93c: 0xdfbf0010
    ctx->pc = 0x2de93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de940: 0xdfb00000
    ctx->pc = 0x2de940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de944: 0x3e00008
    ctx->pc = 0x2DE944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE948u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DE93Cu: goto label_2de93c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DE94Cu;
}
