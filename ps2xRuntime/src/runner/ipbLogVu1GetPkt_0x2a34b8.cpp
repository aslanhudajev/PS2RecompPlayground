#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ipbLogVu1GetPkt
// Address: 0x2a34b8 - 0x2a3564
void ipbLogVu1GetPkt_0x2a34b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a34b8u;

    // 0x2a34b8: 0x27bdffd0
    ctx->pc = 0x2a34b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a34bc: 0xffbf0020
    ctx->pc = 0x2a34bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a34c0: 0xffb10010
    ctx->pc = 0x2a34c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a34c4: 0xffb00000
    ctx->pc = 0x2a34c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a34c8: 0x3c020036
    ctx->pc = 0x2a34c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a34cc: 0x8c50dee0
    ctx->pc = 0x2a34ccu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a34d0: 0x8e02002c
    ctx->pc = 0x2a34d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a34d4: 0x8c510020
    ctx->pc = 0x2a34d4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2a34d8: 0x42080
    ctx->pc = 0x2a34d8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a34dc: 0x2242021
    ctx->pc = 0x2a34dcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2a34e0: 0xac440020
    ctx->pc = 0x2a34e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
    // 0x2a34e4: 0x8e02002c
    ctx->pc = 0x2a34e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a34e8: 0x8c430020
    ctx->pc = 0x2a34e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2a34ec: 0x8c420024
    ctx->pc = 0x2a34ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2a34f0: 0x43102b
    ctx->pc = 0x2a34f0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a34f4: 0x50400011
    ctx->pc = 0x2A34F4u;
    {
        const bool branch_taken_0x2a34f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a34f4) {
            ctx->pc = 0x2A34F8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->pc = 0x2A353Cu;
            goto label_2a353c;
        }
    }
    ctx->pc = 0x2A34FCu;
    // 0x2a34fc: 0xc0a8d2c
    ctx->pc = 0x2A34FCu;
    SET_GPR_U32(ctx, 31, 0x2A3504u);
    ctx->pc = 0x2A34B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbLogVu1Wrap_0x2a34b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3504u; }
    }
    if (ctx->pc != 0x2A3504u) { return; }
    ctx->pc = 0x2A3504u;
    // 0x2a3504: 0x8e03002c
    ctx->pc = 0x2a3504u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a3508: 0x8c620028
    ctx->pc = 0x2a3508u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2a350c: 0x24420001
    ctx->pc = 0x2a350cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a3510: 0x14400005
    ctx->pc = 0x2A3510u;
    {
        const bool branch_taken_0x2a3510 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A3514u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        if (branch_taken_0x2a3510) {
            ctx->pc = 0x2A3528u;
            goto label_2a3528;
        }
    }
    ctx->pc = 0x2A3518u;
    // 0x2a3518: 0x8e03002c
    ctx->pc = 0x2a3518u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a351c: 0x3c02ffff
    ctx->pc = 0x2a351cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2a3520: 0x3442ffff
    ctx->pc = 0x2a3520u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2a3524: 0xac620028
    ctx->pc = 0x2a3524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_2a3528:
    // 0x2a3528: 0x8e03002c
    ctx->pc = 0x2a3528u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a352c: 0x8c620020
    ctx->pc = 0x2a352cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2a3530: 0x2442b1e0
    ctx->pc = 0x2a3530u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947296));
    // 0x2a3534: 0xac620020
    ctx->pc = 0x2a3534u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x2a3538: 0x8e02002c
    ctx->pc = 0x2a3538u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2a353c:
    // 0x2a353c: 0x8c430020
    ctx->pc = 0x2a353cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2a3540: 0x3c02badb
    ctx->pc = 0x2a3540u;
    SET_GPR_U32(ctx, 2, ((uint32_t)47835 << 16));
    // 0x2a3544: 0x3442eef8
    ctx->pc = 0x2a3544u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 61176));
    // 0x2a3548: 0xac620000
    ctx->pc = 0x2a3548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2a354c: 0x220102d
    ctx->pc = 0x2a354cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3550: 0xdfbf0020
    ctx->pc = 0x2a3550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3554: 0xdfb10010
    ctx->pc = 0x2a3554u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3558: 0xdfb00000
    ctx->pc = 0x2a3558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a355c: 0x3e00008
    ctx->pc = 0x2A355Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3560u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A3528u: goto label_2a3528;
            case 0x2A353Cu: goto label_2a353c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A3564u;
}
