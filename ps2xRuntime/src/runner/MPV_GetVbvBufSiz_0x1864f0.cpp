#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPV_GetVbvBufSiz
// Address: 0x1864f0 - 0x1865a4
void MPV_GetVbvBufSiz_0x1864f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPV_GetVbvBufSiz");


    ctx->pc = 0x1864f0u;

    // 0x1864f0: 0x27bdffb0
    ctx->pc = 0x1864f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1864f4: 0xffb00000
    ctx->pc = 0x1864f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1864f8: 0xffb30030
    ctx->pc = 0x1864f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1864fc: 0x80802d
    ctx->pc = 0x1864fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186500: 0xffb20020
    ctx->pc = 0x186500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x186504: 0xe0982d
    ctx->pc = 0x186504u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186508: 0xffb10010
    ctx->pc = 0x186508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18650c: 0xc0902d
    ctx->pc = 0x18650cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186510: 0xffbf0040
    ctx->pc = 0x186510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x186514: 0xc062142
    ctx->pc = 0x186514u;
    SET_GPR_U32(ctx, 31, 0x18651Cu);
    ctx->pc = 0x186518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x188508u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVLIB_CheckHn_0x188508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18651Cu; }
        else if (ctx->pc != 0x18651Cu) { ctx->pc = 0x18651Cu; }
    }
    if (ctx->pc != 0x18651Cu) { return; }
    ctx->pc = 0x18651Cu;
    // 0x18651c: 0x10400006
    ctx->pc = 0x18651Cu;
    {
        const bool branch_taken_0x18651c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x186520u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18651c) {
            ctx->pc = 0x186538u;
            goto label_186538;
        }
    }
    ctx->pc = 0x186524u;
    // 0x186524: 0x3c05ff03
    ctx->pc = 0x186524u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65283 << 16));
    // 0x186528: 0xc061846
    ctx->pc = 0x186528u;
    SET_GPR_U32(ctx, 31, 0x186530u);
    ctx->pc = 0x18652Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 527));
    ctx->pc = 0x186118u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVERR_SetCode_0x186118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186530u; }
        else if (ctx->pc != 0x186530u) { ctx->pc = 0x186530u; }
    }
    if (ctx->pc != 0x186530u) { return; }
    ctx->pc = 0x186530u;
    // 0x186530: 0x10000016
    ctx->pc = 0x186530u;
    {
        const bool branch_taken_0x186530 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186534u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x186530) {
            ctx->pc = 0x18658Cu;
            goto label_18658c;
        }
    }
    ctx->pc = 0x186538u;
label_186538:
    // 0x186538: 0x8e020218
    ctx->pc = 0x186538u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 536)));
    // 0x18653c: 0x3c040003
    ctx->pc = 0x18653cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)3 << 16));
    // 0x186540: 0x3484ffff
    ctx->pc = 0x186540u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x186544: 0x212c0
    ctx->pc = 0x186544u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 11));
    // 0x186548: 0xae220000
    ctx->pc = 0x186548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x18654c: 0x8e030228
    ctx->pc = 0x18654cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x186550: 0xae430000
    ctx->pc = 0x186550u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x186554: 0x8e050214
    ctx->pc = 0x186554u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x186558: 0x54a40003
    ctx->pc = 0x186558u;
    {
        const bool branch_taken_0x186558 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 4));
        if (branch_taken_0x186558) {
            ctx->pc = 0x18655Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 552)));
            ctx->pc = 0x186568u;
            goto label_186568;
        }
    }
    ctx->pc = 0x186560u;
    // 0x186560: 0x10000007
    ctx->pc = 0x186560u;
    {
        const bool branch_taken_0x186560 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186564u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x186560) {
            ctx->pc = 0x186580u;
            goto label_186580;
        }
    }
    ctx->pc = 0x186568u;
label_186568:
    // 0x186568: 0x24030708
    ctx->pc = 0x186568u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1800));
    // 0x18656c: 0x50600001
    ctx->pc = 0x18656Cu;
    {
        const bool branch_taken_0x18656c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x18656c) {
            ctx->pc = 0x186570u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x186574u;
            goto label_186574;
        }
    }
    ctx->pc = 0x186574u;
label_186574:
    // 0x186574: 0x451018
    ctx->pc = 0x186574u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x186578: 0x7043001a
    ctx->pc = 0x186578u;
    { int32_t divisor = GPR_S32(ctx, 3); if (divisor != 0) { ctx->lo1 = (uint32_t)(GPR_S32(ctx, 2) / divisor); ctx->hi1 = (uint32_t)(GPR_S32(ctx, 3) % divisor); } else { ctx->lo1= (GPR_S32(ctx,2) < 0) ? 1 : -1; ctx->hi1=GPR_S32(ctx,3); } }
    // 0x18657c: 0x70001012
    ctx->pc = 0x18657cu;
    SET_GPR_U32(ctx, 2, ctx->lo1);
label_186580:
    // 0x186580: 0xae620000
    ctx->pc = 0x186580u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x186584: 0x102d
    ctx->pc = 0x186584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186588: 0xdfbf0040
    ctx->pc = 0x186588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_18658c:
    // 0x18658c: 0xdfb30030
    ctx->pc = 0x18658cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x186590: 0xdfb20020
    ctx->pc = 0x186590u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186594: 0xdfb10010
    ctx->pc = 0x186594u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186598: 0xdfb00000
    ctx->pc = 0x186598u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18659c: 0x3e00008
    ctx->pc = 0x18659Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1865A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186538u: goto label_186538;
            case 0x186568u: goto label_186568;
            case 0x186574u: goto label_186574;
            case 0x186580u: goto label_186580;
            case 0x18658Cu: goto label_18658c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1865A4u;
}
