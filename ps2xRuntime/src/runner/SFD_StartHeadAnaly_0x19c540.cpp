#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_StartHeadAnaly
// Address: 0x19c540 - 0x19c598
void SFD_StartHeadAnaly_0x19c540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_StartHeadAnaly");


    ctx->pc = 0x19c540u;

    // 0x19c540: 0x27bdffe0
    ctx->pc = 0x19c540u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c544: 0xffb00000
    ctx->pc = 0x19c544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19c548: 0xffbf0010
    ctx->pc = 0x19c548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19c54c: 0xc064f1e
    ctx->pc = 0x19C54Cu;
    SET_GPR_U32(ctx, 31, 0x19C554u);
    ctx->pc = 0x19C550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C554u; }
        else if (ctx->pc != 0x19C554u) { ctx->pc = 0x19C554u; }
    }
    if (ctx->pc != 0x19C554u) { return; }
    ctx->pc = 0x19C554u;
    // 0x19c554: 0x10400007
    ctx->pc = 0x19C554u;
    {
        const bool branch_taken_0x19c554 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19C558u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19c554) {
            ctx->pc = 0x19C574u;
            goto label_19c574;
        }
    }
    ctx->pc = 0x19C55Cu;
    // 0x19c55c: 0x3c05ff00
    ctx->pc = 0x19c55cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19c560: 0x202d
    ctx->pc = 0x19c560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c564: 0xc064ea0
    ctx->pc = 0x19C564u;
    SET_GPR_U32(ctx, 31, 0x19C56Cu);
    ctx->pc = 0x19C568u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 339));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C56Cu; }
        else if (ctx->pc != 0x19C56Cu) { ctx->pc = 0x19C56Cu; }
    }
    if (ctx->pc != 0x19C56Cu) { return; }
    ctx->pc = 0x19C56Cu;
    // 0x19c56c: 0x10000007
    ctx->pc = 0x19C56Cu;
    {
        const bool branch_taken_0x19c56c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19C570u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x19c56c) {
            ctx->pc = 0x19C58Cu;
            goto label_19c58c;
        }
    }
    ctx->pc = 0x19C574u;
label_19c574:
    // 0x19c574: 0x2405002f
    ctx->pc = 0x19c574u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 47));
    // 0x19c578: 0xc067464
    ctx->pc = 0x19C578u;
    SET_GPR_U32(ctx, 31, 0x19C580u);
    ctx->pc = 0x19C57Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19D190u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_SetCond_0x19d190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C580u; }
        else if (ctx->pc != 0x19C580u) { ctx->pc = 0x19C580u; }
    }
    if (ctx->pc != 0x19C580u) { return; }
    ctx->pc = 0x19C580u;
    // 0x19c580: 0xc066a66
    ctx->pc = 0x19C580u;
    SET_GPR_U32(ctx, 31, 0x19C588u);
    ctx->pc = 0x19C584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19A998u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFPL2_Standby_0x19a998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C588u; }
        else if (ctx->pc != 0x19C588u) { ctx->pc = 0x19C588u; }
    }
    if (ctx->pc != 0x19C588u) { return; }
    ctx->pc = 0x19C588u;
    // 0x19c588: 0xdfbf0010
    ctx->pc = 0x19c588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19c58c:
    // 0x19c58c: 0xdfb00000
    ctx->pc = 0x19c58cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c590: 0x3e00008
    ctx->pc = 0x19C590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C594u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19C574u: goto label_19c574;
            case 0x19C58Cu: goto label_19c58c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C598u;
}
