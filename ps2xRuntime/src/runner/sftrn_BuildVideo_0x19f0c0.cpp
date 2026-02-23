#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftrn_BuildVideo
// Address: 0x19f0c0 - 0x19f158
void sftrn_BuildVideo_0x19f0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftrn_BuildVideo");


    ctx->pc = 0x19f0c0u;

    // 0x19f0c0: 0x27bdffd0
    ctx->pc = 0x19f0c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19f0c4: 0x24060002
    ctx->pc = 0x19f0c4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x19f0c8: 0xffb10010
    ctx->pc = 0x19f0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19f0cc: 0xffb00000
    ctx->pc = 0x19f0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f0d0: 0x80882d
    ctx->pc = 0x19f0d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f0d4: 0xa0802d
    ctx->pc = 0x19f0d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f0d8: 0xffbf0020
    ctx->pc = 0x19f0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19f0dc: 0xc067c9c
    ctx->pc = 0x19F0DCu;
    SET_GPR_U32(ctx, 31, 0x19F0E4u);
    ctx->pc = 0x19F0E0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19F270u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftrn_ConnBufTrn_0x19f270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F0E4u; }
        else if (ctx->pc != 0x19F0E4u) { ctx->pc = 0x19F0E4u; }
    }
    if (ctx->pc != 0x19F0E4u) { return; }
    ctx->pc = 0x19F0E4u;
    // 0x19f0e4: 0x220202d
    ctx->pc = 0x19f0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f0e8: 0x24050002
    ctx->pc = 0x19f0e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x19f0ec: 0xc067c80
    ctx->pc = 0x19F0ECu;
    SET_GPR_U32(ctx, 31, 0x19F0F4u);
    ctx->pc = 0x19F0F0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x19F200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftrn_ConnTrnBuf0_0x19f200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F0F4u; }
        else if (ctx->pc != 0x19F0F4u) { ctx->pc = 0x19F0F4u; }
    }
    if (ctx->pc != 0x19F0F4u) { return; }
    ctx->pc = 0x19F0F4u;
    // 0x19f0f4: 0x8e020010
    ctx->pc = 0x19f0f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19f0f8: 0x10400010
    ctx->pc = 0x19F0F8u;
    {
        const bool branch_taken_0x19f0f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19F0FCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19f0f8) {
            ctx->pc = 0x19F13Cu;
            goto label_19f13c;
        }
    }
    ctx->pc = 0x19F100u;
    // 0x19f100: 0x24050003
    ctx->pc = 0x19f100u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x19f104: 0xc067c9c
    ctx->pc = 0x19F104u;
    SET_GPR_U32(ctx, 31, 0x19F10Cu);
    ctx->pc = 0x19F108u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x19F270u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftrn_ConnBufTrn_0x19f270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F10Cu; }
        else if (ctx->pc != 0x19F10Cu) { ctx->pc = 0x19F10Cu; }
    }
    if (ctx->pc != 0x19F10Cu) { return; }
    ctx->pc = 0x19F10Cu;
    // 0x19f10c: 0x220202d
    ctx->pc = 0x19f10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f110: 0x24050004
    ctx->pc = 0x19f110u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x19f114: 0xc067c80
    ctx->pc = 0x19F114u;
    SET_GPR_U32(ctx, 31, 0x19F11Cu);
    ctx->pc = 0x19F118u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x19F200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftrn_ConnTrnBuf0_0x19f200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F11Cu; }
        else if (ctx->pc != 0x19F11Cu) { ctx->pc = 0x19F11Cu; }
    }
    if (ctx->pc != 0x19F11Cu) { return; }
    ctx->pc = 0x19F11Cu;
    // 0x19f11c: 0x220202d
    ctx->pc = 0x19f11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f120: 0xdfbf0020
    ctx->pc = 0x19f120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f124: 0xdfb10010
    ctx->pc = 0x19f124u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f128: 0x24050005
    ctx->pc = 0x19f128u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x19f12c: 0xdfb00000
    ctx->pc = 0x19f12cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f130: 0x24060006
    ctx->pc = 0x19f130u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x19f134: 0x8067c9c
    ctx->pc = 0x19F134u;
    ctx->pc = 0x19F138u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x19F270u;
    sftrn_ConnBufTrn_0x19f270(rdram, ctx, runtime); return;
    ctx->pc = 0x19F13Cu;
label_19f13c:
    // 0x19f13c: 0xdfbf0020
    ctx->pc = 0x19f13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f140: 0xdfb10010
    ctx->pc = 0x19f140u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f144: 0x24050003
    ctx->pc = 0x19f144u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x19f148: 0xdfb00000
    ctx->pc = 0x19f148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f14c: 0x24060006
    ctx->pc = 0x19f14cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x19f150: 0x8067c9c
    ctx->pc = 0x19F150u;
    ctx->pc = 0x19F154u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x19F270u;
    sftrn_ConnBufTrn_0x19f270(rdram, ctx, runtime); return;
    ctx->pc = 0x19F158u;
}
