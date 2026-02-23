#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftim_GetTimeVsync
// Address: 0x19e0c8 - 0x19e12c
void sftim_GetTimeVsync_0x19e0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftim_GetTimeVsync");


    ctx->pc = 0x19e0c8u;

    // 0x19e0c8: 0x27bdffc0
    ctx->pc = 0x19e0c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19e0cc: 0xffb20020
    ctx->pc = 0x19e0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19e0d0: 0xffb10010
    ctx->pc = 0x19e0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19e0d4: 0xc0902d
    ctx->pc = 0x19e0d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e0d8: 0xffb00000
    ctx->pc = 0x19e0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19e0dc: 0xa0882d
    ctx->pc = 0x19e0dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e0e0: 0xffbf0030
    ctx->pc = 0x19e0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19e0e4: 0xc067854
    ctx->pc = 0x19E0E4u;
    SET_GPR_U32(ctx, 31, 0x19E0ECu);
    ctx->pc = 0x19E0E8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19E150u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_ChkRegularTime_0x19e150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E0ECu; }
        else if (ctx->pc != 0x19E0ECu) { ctx->pc = 0x19E0ECu; }
    }
    if (ctx->pc != 0x19E0ECu) { return; }
    ctx->pc = 0x19E0ECu;
    // 0x19e0ec: 0x14400003
    ctx->pc = 0x19E0ECu;
    {
        const bool branch_taken_0x19e0ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19E0F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 2708));
        if (branch_taken_0x19e0ec) {
            ctx->pc = 0x19E0FCu;
            goto label_19e0fc;
        }
    }
    ctx->pc = 0x19E0F4u;
    // 0x19e0f4: 0x10000007
    ctx->pc = 0x19E0F4u;
    {
        const bool branch_taken_0x19e0f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E0F8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19e0f4) {
            ctx->pc = 0x19E114u;
            goto label_19e114;
        }
    }
    ctx->pc = 0x19E0FCu;
label_19e0fc:
    // 0x19e0fc: 0x3c050026
    ctx->pc = 0x19e0fcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
    // 0x19e100: 0x8c440254
    ctx->pc = 0x19e100u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 596)));
    // 0x19e104: 0x102d
    ctx->pc = 0x19e104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e108: 0xae240000
    ctx->pc = 0x19e108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x19e10c: 0x8ca3def0
    ctx->pc = 0x19e10cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4294958832)));
    // 0x19e110: 0xae430000
    ctx->pc = 0x19e110u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_19e114:
    // 0x19e114: 0xdfbf0030
    ctx->pc = 0x19e114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e118: 0xdfb20020
    ctx->pc = 0x19e118u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e11c: 0xdfb10010
    ctx->pc = 0x19e11cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e120: 0xdfb00000
    ctx->pc = 0x19e120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e124: 0x3e00008
    ctx->pc = 0x19E124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E128u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E0FCu: goto label_19e0fc;
            case 0x19E114u: goto label_19e114;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19E12Cu;
}
