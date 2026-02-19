#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioPoll
// Address: 0x2207d0 - 0x220824
void AudioPoll_0x2207d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2207d0u;

    // 0x2207d0: 0x27bdfff0
    ctx->pc = 0x2207d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2207d4: 0xffbf0000
    ctx->pc = 0x2207d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2207d8: 0x3c020032
    ctx->pc = 0x2207d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2207dc: 0x8c42fd58
    ctx->pc = 0x2207dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966616)));
    // 0x2207e0: 0x1440000e
    ctx->pc = 0x2207E0u;
    {
        const bool branch_taken_0x2207e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2207E4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2207e0) {
            ctx->pc = 0x22081Cu;
            goto label_22081c;
        }
    }
    ctx->pc = 0x2207E8u;
    // 0x2207e8: 0x44846000
    ctx->pc = 0x2207e8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 4);
    // 0x2207ec: 0x46806320
    ctx->pc = 0x2207ecu;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x2207f0: 0xc088e54
    ctx->pc = 0x2207F0u;
    SET_GPR_U32(ctx, 31, 0x2207F8u);
    ctx->pc = 0x223950u;
    {
        const uint32_t __entryPc = ctx->pc;
        aud_poll_0x223950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2207F8u; }
    }
    if (ctx->pc != 0x2207F8u) { return; }
    ctx->pc = 0x2207F8u;
    // 0x2207f8: 0x3c030032
    ctx->pc = 0x2207f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2207fc: 0xac62fd8c
    ctx->pc = 0x2207fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966668), GPR_U32(ctx, 2));
    // 0x220800: 0x2403fffe
    ctx->pc = 0x220800u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x220804: 0x14430005
    ctx->pc = 0x220804u;
    {
        const bool branch_taken_0x220804 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x220808u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x220804) {
            ctx->pc = 0x22081Cu;
            goto label_22081c;
        }
    }
    ctx->pc = 0x22080Cu;
    // 0x22080c: 0x3c030032
    ctx->pc = 0x22080cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x220810: 0x8c62fd7c
    ctx->pc = 0x220810u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294966652)));
    // 0x220814: 0x34420001
    ctx->pc = 0x220814u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x220818: 0xac62fd7c
    ctx->pc = 0x220818u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966652), GPR_U32(ctx, 2));
label_22081c:
    // 0x22081c: 0x3e00008
    ctx->pc = 0x22081Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220820u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22081Cu: goto label_22081c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x220824u;
}
