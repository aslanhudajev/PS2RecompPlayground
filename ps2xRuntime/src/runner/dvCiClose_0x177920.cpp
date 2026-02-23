#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dvCiClose
// Address: 0x177920 - 0x177974
void dvCiClose_0x177920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dvCiClose");


    ctx->pc = 0x177920u;

    // 0x177920: 0x27bdffe0
    ctx->pc = 0x177920u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x177924: 0xffb00000
    ctx->pc = 0x177924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177928: 0x80802d
    ctx->pc = 0x177928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17792c: 0x1200000d
    ctx->pc = 0x17792Cu;
    {
        const bool branch_taken_0x17792c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x177930u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x17792c) {
            ctx->pc = 0x177964u;
            goto label_177964;
        }
    }
    ctx->pc = 0x177934u;
    // 0x177934: 0x92020002
    ctx->pc = 0x177934u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x177938: 0x2c420002
    ctx->pc = 0x177938u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x17793c: 0x54400004
    ctx->pc = 0x17793Cu;
    {
        const bool branch_taken_0x17793c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17793c) {
            ctx->pc = 0x177940u;
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x177950u;
            goto label_177950;
        }
    }
    ctx->pc = 0x177944u;
    // 0x177944: 0xc05deec
    ctx->pc = 0x177944u;
    SET_GPR_U32(ctx, 31, 0x17794Cu);
    ctx->pc = 0x177BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvCiStopTr_0x177bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17794Cu; }
        else if (ctx->pc != 0x17794Cu) { ctx->pc = 0x17794Cu; }
    }
    if (ctx->pc != 0x17794Cu) { return; }
    ctx->pc = 0x17794Cu;
    // 0x17794c: 0xa2000000
    ctx->pc = 0x17794cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_177950:
    // 0x177950: 0x200202d
    ctx->pc = 0x177950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177954: 0xdfbf0010
    ctx->pc = 0x177954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177958: 0xdfb00000
    ctx->pc = 0x177958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17795c: 0x805ddf4
    ctx->pc = 0x17795Cu;
    ctx->pc = 0x177960u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1777D0u;
    dvci_free_0x1777d0(rdram, ctx, runtime); return;
    ctx->pc = 0x177964u;
label_177964:
    // 0x177964: 0xdfbf0010
    ctx->pc = 0x177964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177968: 0xdfb00000
    ctx->pc = 0x177968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17796c: 0x3e00008
    ctx->pc = 0x17796Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177970u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x177950u: goto label_177950;
            case 0x177964u: goto label_177964;
            default: break;
        }
        return;
    }
    ctx->pc = 0x177974u;
}
